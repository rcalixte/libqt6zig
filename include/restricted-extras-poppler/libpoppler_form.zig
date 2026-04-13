const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const poppler_annotation_enums = @import("libpoppler_annotation.zig").enums;
const poppler_form_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const struct_constu8_constu8 = struct { first: []const u8, second: []const u8 };

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldIcon.html)
pub const poppler__formfieldicon = struct {
    /// New constructs a new Poppler::FormFieldIcon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` ffIcon: QtC.Poppler__FormFieldIcon `
    ///
    pub fn New(ffIcon: ?*anyopaque) QtC.Poppler__FormFieldIcon {
        return qtc.Poppler__FormFieldIcon_new(@ptrCast(ffIcon));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldIcon.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldIcon `
    ///
    /// ` ffIcon: QtC.Poppler__FormFieldIcon `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, ffIcon: ?*anyopaque) void {
        qtc.Poppler__FormFieldIcon_OperatorAssign(@ptrCast(self), @ptrCast(ffIcon));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldIcon.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__FormFieldIcon `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__FormFieldIcon_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
pub const poppler__formfield = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.FormType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormField_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__FormField_Rect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormField_Id(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfield.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Poppler__FormField_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FullyQualifiedName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_FullyQualifiedName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfield.FullyQualifiedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UiName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_UiName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfield.UiName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsReadOnly(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    /// ` value: bool `
    ///
    pub fn SetReadOnly(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetReadOnly(@ptrCast(self), value);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsVisible(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    /// ` value: bool `
    ///
    pub fn SetVisible(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetVisible(@ptrCast(self), value);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    pub fn IsPrintable(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsPrintable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    /// ` value: bool `
    ///
    pub fn SetPrintable(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetPrintable(@ptrCast(self), value);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    pub fn ActivationAction(self: ?*anyopaque) QtC.Poppler__Link {
        return qtc.Poppler__FormField_ActivationAction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    /// ` typeVal: poppler_form_enums.AdditionalActionType `
    ///
    pub fn AdditionalAction(self: ?*anyopaque, typeVal: i32) QtC.Poppler__Link {
        return qtc.Poppler__FormField_AdditionalAction(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn AdditionalAction2(self: ?*anyopaque, typeVal: i32) QtC.Poppler__Link {
        return qtc.Poppler__FormField_AdditionalAction2(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormField.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__FormField `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__FormField_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
pub const poppler__formfieldbutton = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.FormType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormFieldButton_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.ButtonType `
    ///
    pub fn ButtonType(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormFieldButton_ButtonType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Caption(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormFieldButton_Caption(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldbutton.Caption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.Poppler__FormFieldIcon {
        return qtc.Poppler__FormFieldButton_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ` icon: QtC.Poppler__FormFieldIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.Poppler__FormFieldButton_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    pub fn State(self: ?*anyopaque) bool {
        return qtc.Poppler__FormFieldButton_State(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ` state: bool `
    ///
    pub fn SetState(self: ?*anyopaque, state: bool) void {
        qtc.Poppler__FormFieldButton_SetState(@ptrCast(self), state);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Siblings(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.Poppler__FormFieldButton_Siblings(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("poppler__formfieldbutton.Siblings: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__FormField_Rect(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormField_Id(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldbutton.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Poppler__FormField_SetName(@ptrCast(self), name_str);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FullyQualifiedName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_FullyQualifiedName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldbutton.FullyQualifiedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UiName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_UiName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldbutton.UiName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsReadOnly(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ` value: bool `
    ///
    pub fn SetReadOnly(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetReadOnly(@ptrCast(self), value);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsVisible(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ` value: bool `
    ///
    pub fn SetVisible(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetVisible(@ptrCast(self), value);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    pub fn IsPrintable(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsPrintable(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ` value: bool `
    ///
    pub fn SetPrintable(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetPrintable(@ptrCast(self), value);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    pub fn ActivationAction(self: ?*anyopaque) QtC.Poppler__Link {
        return qtc.Poppler__FormField_ActivationAction(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ` typeVal: poppler_form_enums.AdditionalActionType `
    ///
    pub fn AdditionalAction(self: ?*anyopaque, typeVal: i32) QtC.Poppler__Link {
        return qtc.Poppler__FormField_AdditionalAction(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn AdditionalAction2(self: ?*anyopaque, typeVal: i32) QtC.Poppler__Link {
        return qtc.Poppler__FormField_AdditionalAction2(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldButton.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__FormFieldButton `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__FormFieldButton_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
pub const poppler__formfieldtext = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.FormType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormFieldText_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.TextType `
    ///
    pub fn TextType(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormFieldText_TextType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormFieldText_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldtext.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__FormFieldText_SetText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetAppearanceText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__FormFieldText_SetAppearanceText(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    pub fn IsPassword(self: ?*anyopaque) bool {
        return qtc.Poppler__FormFieldText_IsPassword(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    pub fn IsRichText(self: ?*anyopaque) bool {
        return qtc.Poppler__FormFieldText_IsRichText(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    pub fn MaximumLength(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormFieldText_MaximumLength(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn TextAlignment(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormFieldText_TextAlignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    pub fn CanBeSpellChecked(self: ?*anyopaque) bool {
        return qtc.Poppler__FormFieldText_CanBeSpellChecked(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    pub fn GetFontSize(self: ?*anyopaque) f64 {
        return qtc.Poppler__FormFieldText_GetFontSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ` fontSize: i32 `
    ///
    pub fn SetFontSize(self: ?*anyopaque, fontSize: i32) void {
        qtc.Poppler__FormFieldText_SetFontSize(@ptrCast(self), @bitCast(fontSize));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__FormField_Rect(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormField_Id(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldtext.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Poppler__FormField_SetName(@ptrCast(self), name_str);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FullyQualifiedName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_FullyQualifiedName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldtext.FullyQualifiedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UiName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_UiName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldtext.UiName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsReadOnly(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ` value: bool `
    ///
    pub fn SetReadOnly(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetReadOnly(@ptrCast(self), value);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsVisible(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ` value: bool `
    ///
    pub fn SetVisible(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetVisible(@ptrCast(self), value);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    pub fn IsPrintable(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsPrintable(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ` value: bool `
    ///
    pub fn SetPrintable(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetPrintable(@ptrCast(self), value);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    pub fn ActivationAction(self: ?*anyopaque) QtC.Poppler__Link {
        return qtc.Poppler__FormField_ActivationAction(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ` typeVal: poppler_form_enums.AdditionalActionType `
    ///
    pub fn AdditionalAction(self: ?*anyopaque, typeVal: i32) QtC.Poppler__Link {
        return qtc.Poppler__FormField_AdditionalAction(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn AdditionalAction2(self: ?*anyopaque, typeVal: i32) QtC.Poppler__Link {
        return qtc.Poppler__FormField_AdditionalAction2(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldText.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__FormFieldText `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__FormFieldText_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
pub const poppler__formfieldchoice = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.FormType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormFieldChoice_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.ChoiceType `
    ///
    pub fn ChoiceType(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormFieldChoice_ChoiceType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Choices(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Poppler__FormFieldChoice_Choices(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("poppler__formfieldchoice.Choices: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("poppler__formfieldchoice.Choices: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChoicesWithExportValues(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_constu8_constu8 {
        const _arr: qtc.libqt_list = qtc.Poppler__FormFieldChoice_ChoicesWithExportValues(@ptrCast(self));
        const _data: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].first)));
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_constu8_constu8, _arr.len) catch @panic("poppler__formfieldchoice.ChoicesWithExportValues: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("poppler__formfieldchoice.ChoicesWithExportValues: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("poppler__formfieldchoice.ChoicesWithExportValues: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = struct_constu8_constu8{
                .first = _first_slice,
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    pub fn IsEditable(self: ?*anyopaque) bool {
        return qtc.Poppler__FormFieldChoice_IsEditable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    pub fn MultiSelect(self: ?*anyopaque) bool {
        return qtc.Poppler__FormFieldChoice_MultiSelect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentChoices(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.Poppler__FormFieldChoice_CurrentChoices(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("poppler__formfieldchoice.CurrentChoices: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` choice: []i32 `
    ///
    pub fn SetCurrentChoices(self: ?*anyopaque, choice: []i32) void {
        const choice_list = qtc.libqt_list{
            .len = choice.len,
            .data = choice.ptr,
        };
        qtc.Poppler__FormFieldChoice_SetCurrentChoices(@ptrCast(self), choice_list);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EditChoice(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormFieldChoice_EditChoice(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldchoice.EditChoice: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetEditChoice(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__FormFieldChoice_SetEditChoice(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn TextAlignment(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormFieldChoice_TextAlignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    pub fn CanBeSpellChecked(self: ?*anyopaque) bool {
        return qtc.Poppler__FormFieldChoice_CanBeSpellChecked(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetAppearanceChoiceText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.Poppler__FormFieldChoice_SetAppearanceChoiceText(@ptrCast(self), text_str);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__FormField_Rect(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormField_Id(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldchoice.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Poppler__FormField_SetName(@ptrCast(self), name_str);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FullyQualifiedName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_FullyQualifiedName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldchoice.FullyQualifiedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UiName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_UiName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldchoice.UiName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsReadOnly(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` value: bool `
    ///
    pub fn SetReadOnly(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetReadOnly(@ptrCast(self), value);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsVisible(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` value: bool `
    ///
    pub fn SetVisible(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetVisible(@ptrCast(self), value);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    pub fn IsPrintable(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsPrintable(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` value: bool `
    ///
    pub fn SetPrintable(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetPrintable(@ptrCast(self), value);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    pub fn ActivationAction(self: ?*anyopaque) QtC.Poppler__Link {
        return qtc.Poppler__FormField_ActivationAction(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` typeVal: poppler_form_enums.AdditionalActionType `
    ///
    pub fn AdditionalAction(self: ?*anyopaque, typeVal: i32) QtC.Poppler__Link {
        return qtc.Poppler__FormField_AdditionalAction(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn AdditionalAction2(self: ?*anyopaque, typeVal: i32) QtC.Poppler__Link {
        return qtc.Poppler__FormField_AdditionalAction2(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldChoice.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__FormFieldChoice `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__FormFieldChoice_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
pub const poppler__certificateinfo = struct {
    /// New constructs a new Poppler::CertificateInfo object.
    ///
    pub fn New() QtC.Poppler__CertificateInfo {
        return qtc.Poppler__CertificateInfo_new();
    }

    /// New2 constructs a new Poppler::CertificateInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Poppler__CertificateInfo `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Poppler__CertificateInfo {
        return qtc.Poppler__CertificateInfo_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.Poppler__CertificateInfo_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.Poppler__CertificateInfo_Version(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SerialNumber(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__CertificateInfo_SerialNumber(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__certificateinfo.SerialNumber: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    /// ` key: poppler_form_enums.EntityInfoKey `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IssuerInfo(self: ?*anyopaque, key: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__CertificateInfo_IssuerInfo(@ptrCast(self), @bitCast(key));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__certificateinfo.IssuerInfo: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    /// ` key: poppler_form_enums.EntityInfoKey `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SubjectInfo(self: ?*anyopaque, key: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__CertificateInfo_SubjectInfo(@ptrCast(self), @bitCast(key));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__certificateinfo.SubjectInfo: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NickName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__CertificateInfo_NickName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__certificateinfo.NickName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    pub fn ValidityStart(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__CertificateInfo_ValidityStart(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    pub fn ValidityEnd(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Poppler__CertificateInfo_ValidityEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_form_enums.KeyUsageExtension `
    ///
    pub fn KeyUsageExtensions(self: ?*anyopaque) i32 {
        return qtc.Poppler__CertificateInfo_KeyUsageExtensions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PublicKey(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__CertificateInfo_PublicKey(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__certificateinfo.PublicKey: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.PublicKeyType `
    ///
    pub fn PublicKeyType(self: ?*anyopaque) i32 {
        return qtc.Poppler__CertificateInfo_PublicKeyType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    pub fn PublicKeyStrength(self: ?*anyopaque) i32 {
        return qtc.Poppler__CertificateInfo_PublicKeyStrength(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    pub fn IsSelfSigned(self: ?*anyopaque) bool {
        return qtc.Poppler__CertificateInfo_IsSelfSigned(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    pub fn IsQualified(self: ?*anyopaque) bool {
        return qtc.Poppler__CertificateInfo_IsQualified(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.CertificateType `
    ///
    pub fn CertificateType(self: ?*anyopaque) i32 {
        return qtc.Poppler__CertificateInfo_CertificateType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CertificateData(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__CertificateInfo_CertificateData(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__certificateinfo.CertificateData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    /// ` password: []const u8 `
    ///
    pub fn CheckPassword(self: ?*anyopaque, password: []const u8) bool {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Poppler__CertificateInfo_CheckPassword(@ptrCast(self), password_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.KeyLocation `
    ///
    pub fn KeyLocation(self: ?*anyopaque) i32 {
        return qtc.Poppler__CertificateInfo_KeyLocation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    /// ` other: QtC.Poppler__CertificateInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Poppler__CertificateInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CertificateInfo.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__CertificateInfo `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__CertificateInfo_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
pub const poppler__signaturevalidationinfo = struct {
    /// New constructs a new Poppler::SignatureValidationInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Poppler__SignatureValidationInfo `
    ///
    pub fn New(other: ?*anyopaque) QtC.Poppler__SignatureValidationInfo {
        return qtc.Poppler__SignatureValidationInfo_new(@ptrCast(other));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureValidationInfo `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.SignatureStatus `
    ///
    pub fn SignatureStatus(self: ?*anyopaque) i32 {
        return qtc.Poppler__SignatureValidationInfo_SignatureStatus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureValidationInfo `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.CertificateStatus `
    ///
    pub fn CertificateStatus(self: ?*anyopaque) i32 {
        return qtc.Poppler__SignatureValidationInfo_CertificateStatus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureValidationInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SignerName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SignatureValidationInfo_SignerName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__signaturevalidationinfo.SignerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureValidationInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SignerSubjectDN(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SignatureValidationInfo_SignerSubjectDN(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__signaturevalidationinfo.SignerSubjectDN: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureValidationInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Location(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SignatureValidationInfo_Location(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__signaturevalidationinfo.Location: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureValidationInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Reason(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__SignatureValidationInfo_Reason(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__signaturevalidationinfo.Reason: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureValidationInfo `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.HashAlgorithm `
    ///
    pub fn HashAlgorithm(self: ?*anyopaque) i32 {
        return qtc.Poppler__SignatureValidationInfo_HashAlgorithm(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureValidationInfo `
    ///
    pub fn SigningTime(self: ?*anyopaque) i64 {
        return @bitCast(qtc.Poppler__SignatureValidationInfo_SigningTime(@ptrCast(self)));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureValidationInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Signature(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.Poppler__SignatureValidationInfo_Signature(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("poppler__signaturevalidationinfo.Signature: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureValidationInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SignedRangeBounds(self: ?*anyopaque, allocator: std.mem.Allocator) []isize {
        const _arr: qtc.libqt_list = qtc.Poppler__SignatureValidationInfo_SignedRangeBounds(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(isize, _arr.len) catch @panic("poppler__signaturevalidationinfo.SignedRangeBounds: Memory allocation failed");
        const _data: [*]isize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureValidationInfo `
    ///
    pub fn SignsTotalDocument(self: ?*anyopaque) bool {
        return qtc.Poppler__SignatureValidationInfo_SignsTotalDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureValidationInfo `
    ///
    pub fn CertificateInfo(self: ?*anyopaque) QtC.Poppler__CertificateInfo {
        return qtc.Poppler__SignatureValidationInfo_CertificateInfo(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__SignatureValidationInfo `
    ///
    /// ` other: QtC.Poppler__SignatureValidationInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Poppler__SignatureValidationInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureValidationInfo.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__SignatureValidationInfo `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__SignatureValidationInfo_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AsyncObject.html)
pub const poppler__asyncobject = struct {
    /// New constructs a new Poppler::AsyncObject object.
    ///
    pub fn New() QtC.Poppler__AsyncObject {
        return qtc.Poppler__AsyncObject_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Poppler__AsyncObject_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.Poppler__AsyncObject_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.Poppler__AsyncObject_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Poppler__AsyncObject_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Poppler__AsyncObject_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Poppler__AsyncObject_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Poppler__AsyncObject_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Poppler__AsyncObject_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Poppler__AsyncObject_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__asyncobject.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AsyncObject.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn Done(self: ?*anyopaque) void {
        qtc.Poppler__AsyncObject_Done(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AsyncObject.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject) callconv(.c) void `
    ///
    pub fn OnDone(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.Poppler__AsyncObject_Connect_Done(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__asyncobject.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__asyncobject.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__asyncobject.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("poppler__asyncobject.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("poppler__asyncobject.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("poppler__asyncobject.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Poppler__AsyncObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Poppler__AsyncObject_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Poppler__AsyncObject_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Poppler__AsyncObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.Poppler__AsyncObject_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Poppler__AsyncObject_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Poppler__AsyncObject_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Poppler__AsyncObject_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Poppler__AsyncObject_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Poppler__AsyncObject_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Poppler__AsyncObject_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Poppler__AsyncObject_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Poppler__AsyncObject_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.Poppler__AsyncObject_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Poppler__AsyncObject_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Poppler__AsyncObject_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Poppler__AsyncObject_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Poppler__AsyncObject_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Poppler__AsyncObject_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.Poppler__AsyncObject_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.Poppler__AsyncObject_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.Poppler__AsyncObject_Sender(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.Poppler__AsyncObject_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.Poppler__AsyncObject_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Poppler__AsyncObject_SenderSignalIndex(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.Poppler__AsyncObject_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__AsyncObject_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Poppler__AsyncObject_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Poppler__AsyncObject_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.Poppler__AsyncObject_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Poppler__AsyncObject_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.Poppler__AsyncObject_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject`
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.Poppler__AsyncObject_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    /// ` callback: *const fn (self: QtC.Poppler__AsyncObject, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1AsyncObject.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__AsyncObject `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__AsyncObject_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
pub const poppler__formfieldsignature = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.FormType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormFieldSignature_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.SignatureType `
    ///
    pub fn SignatureType(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormFieldSignature_SignatureType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ` opt: poppler_form_enums.ValidateOptions `
    ///
    pub fn Validate(self: ?*anyopaque, opt: i32) QtC.Poppler__SignatureValidationInfo {
        return qtc.Poppler__FormFieldSignature_Validate(@ptrCast(self), @bitCast(opt));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ` opt: i32 `
    ///
    /// ` validationTime: QtC.QDateTime `
    ///
    pub fn Validate2(self: ?*anyopaque, opt: i32, validationTime: ?*anyopaque) QtC.Poppler__SignatureValidationInfo {
        return qtc.Poppler__FormFieldSignature_Validate2(@ptrCast(self), @bitCast(opt), @ptrCast(validationTime));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.CertificateStatus `
    ///
    pub fn ValidateResult(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormFieldSignature_ValidateResult(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ` outputFileName: []const u8 `
    ///
    /// ` data: QtC.Poppler__PDFConverter__NewSignatureData `
    ///
    /// ## Returns:
    ///
    /// ` poppler_form_enums.SigningResult `
    ///
    pub fn Sign(self: ?*anyopaque, outputFileName: []const u8, data: ?*anyopaque) i32 {
        const outputFileName_str = qtc.libqt_string{
            .len = outputFileName.len,
            .data = outputFileName.ptr,
        };
        return qtc.Poppler__FormFieldSignature_Sign(@ptrCast(self), outputFileName_str, @ptrCast(data));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__FormField_Rect(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.Poppler__FormField_Id(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldsignature.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Poppler__FormField_SetName(@ptrCast(self), name_str);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FullyQualifiedName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_FullyQualifiedName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldsignature.FullyQualifiedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UiName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__FormField_UiName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__formfieldsignature.UiName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsReadOnly(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ` value: bool `
    ///
    pub fn SetReadOnly(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetReadOnly(@ptrCast(self), value);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsVisible(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ` value: bool `
    ///
    pub fn SetVisible(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetVisible(@ptrCast(self), value);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    pub fn IsPrintable(self: ?*anyopaque) bool {
        return qtc.Poppler__FormField_IsPrintable(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ` value: bool `
    ///
    pub fn SetPrintable(self: ?*anyopaque, value: bool) void {
        qtc.Poppler__FormField_SetPrintable(@ptrCast(self), value);
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    pub fn ActivationAction(self: ?*anyopaque) QtC.Poppler__Link {
        return qtc.Poppler__FormField_ActivationAction(@ptrCast(self));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ` typeVal: poppler_form_enums.AdditionalActionType `
    ///
    pub fn AdditionalAction(self: ?*anyopaque, typeVal: i32) QtC.Poppler__Link {
        return qtc.Poppler__FormField_AdditionalAction(@ptrCast(self), @bitCast(typeVal));
    }

    /// Inherited from Poppler::FormField
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    /// ` typeVal: poppler_annotation_enums.AdditionalActionType `
    ///
    pub fn AdditionalAction2(self: ?*anyopaque, typeVal: i32) QtC.Poppler__Link {
        return qtc.Poppler__FormField_AdditionalAction2(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FormFieldSignature.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__FormFieldSignature `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__FormFieldSignature_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
pub const poppler = struct {
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
    pub fn AvailableCryptoSignBackends(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.Poppler_AvailableCryptoSignBackends();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("poppler.AvailableCryptoSignBackends: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: poppler_form_enums.CryptoSignBackend `
    ///
    pub fn SetActiveCryptoSignBackend(param1: i32) bool {
        return qtc.Poppler_SetActiveCryptoSignBackend(@bitCast(param1));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: poppler_form_enums.CryptoSignBackend `
    ///
    /// ` param2: poppler_form_enums.CryptoSignBackendFeature `
    ///
    pub fn HasCryptoSignBackendFeature(param1: i32, param2: i32) bool {
        return qtc.Poppler_HasCryptoSignBackendFeature(@bitCast(param1), @bitCast(param2));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    pub fn HasNSSSupport() bool {
        return qtc.Poppler_HasNSSSupport();
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetAvailableSigningCertificates(allocator: std.mem.Allocator) []QtC.Poppler__CertificateInfo {
        const _arr: qtc.libqt_list = qtc.Poppler_GetAvailableSigningCertificates();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__CertificateInfo, _arr.len) catch @panic("poppler.GetAvailableSigningCertificates: Memory allocation failed");
        const _data: [*]QtC.Poppler__CertificateInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetNSSDir(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler_GetNSSDir();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler.GetNSSDir: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SetNSSDir(param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.Poppler_SetNSSDir(param1_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: *const fn (funcparam1: [*:0]const u8) callconv(.c) qtc.libqt_string `
    ///
    pub fn SetNSSPasswordCallback(param1: *const fn ([*:0]const u8) callconv(.c) qtc.libqt_string) void {
        qtc.Poppler_SetNSSPasswordCallback(@bitCast(@intFromPtr(param1)));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: bool `
    ///
    pub fn SetPgpSignaturesAllowed(param1: bool) void {
        qtc.Poppler_SetPgpSignaturesAllowed(param1);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
    ///
    pub fn ArePgpSignaturesAllowed() bool {
        return qtc.Poppler_ArePgpSignaturesAllowed();
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
pub const enums = struct {
    pub const CryptoSignBackend = enum(i32) {
        pub const NSS: i32 = 0;
        pub const GPG: i32 = 1;
    };

    pub const CryptoSignBackendFeature = enum(i32) {
        pub const BackendAsksPassphrase: i32 = 0;
    };

    pub const FormType = enum(i32) {
        pub const FormButton: i32 = 0;
        pub const FormText: i32 = 1;
        pub const FormChoice: i32 = 2;
        pub const FormSignature: i32 = 3;
    };

    pub const AdditionalActionType = enum(i32) {
        pub const FieldModified: i32 = 0;
        pub const FormatField: i32 = 1;
        pub const ValidateField: i32 = 2;
        pub const CalculateField: i32 = 3;
    };

    pub const ButtonType = enum(i32) {
        pub const Push: i32 = 0;
        pub const CheckBox: i32 = 1;
        pub const Radio: i32 = 2;
    };

    pub const TextType = enum(i32) {
        pub const Normal: i32 = 0;
        pub const Multiline: i32 = 1;
        pub const FileSelect: i32 = 2;
    };

    pub const ChoiceType = enum(i32) {
        pub const ComboBox: i32 = 0;
        pub const ListBox: i32 = 1;
    };

    pub const PublicKeyType = enum(i32) {
        pub const RsaKey: i32 = 0;
        pub const DsaKey: i32 = 1;
        pub const EcKey: i32 = 2;
        pub const OtherKey: i32 = 3;
    };

    pub const KeyUsageExtension = enum(i32) {
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

    pub const EntityInfoKey = enum(i32) {
        pub const CommonName: i32 = 0;
        pub const DistinguishedName: i32 = 1;
        pub const EmailAddress: i32 = 2;
        pub const Organization: i32 = 3;
    };

    pub const CertificateType = enum(i32) {
        pub const X509: i32 = 0;
        pub const PGP: i32 = 1;
    };

    pub const KeyLocation = enum(i32) {
        pub const Unknown: i32 = 0;
        pub const Other: i32 = 1;
        pub const Computer: i32 = 2;
        pub const HardwareToken: i32 = 3;
    };

    pub const SignatureStatus = enum(i32) {
        pub const SignatureValid: i32 = 0;
        pub const SignatureInvalid: i32 = 1;
        pub const SignatureDigestMismatch: i32 = 2;
        pub const SignatureDecodingError: i32 = 3;
        pub const SignatureGenericError: i32 = 4;
        pub const SignatureNotFound: i32 = 5;
        pub const SignatureNotVerified: i32 = 6;
    };

    pub const CertificateStatus = enum(i32) {
        pub const CertificateTrusted: i32 = 0;
        pub const CertificateUntrustedIssuer: i32 = 1;
        pub const CertificateUnknownIssuer: i32 = 2;
        pub const CertificateRevoked: i32 = 3;
        pub const CertificateExpired: i32 = 4;
        pub const CertificateGenericError: i32 = 5;
        pub const CertificateNotVerified: i32 = 6;
        pub const CertificateVerificationInProgress: i32 = 7;
    };

    pub const HashAlgorithm = enum(i32) {
        pub const HashAlgorithmUnknown: i32 = 0;
        pub const HashAlgorithmMd2: i32 = 1;
        pub const HashAlgorithmMd5: i32 = 2;
        pub const HashAlgorithmSha1: i32 = 3;
        pub const HashAlgorithmSha256: i32 = 4;
        pub const HashAlgorithmSha384: i32 = 5;
        pub const HashAlgorithmSha512: i32 = 6;
        pub const HashAlgorithmSha224: i32 = 7;
    };

    pub const SignatureType = enum(i32) {
        pub const UnknownSignatureType: i32 = 0;
        pub const AdbePkcs7sha1: i32 = 1;
        pub const AdbePkcs7detached: i32 = 2;
        pub const EtsiCAdESdetached: i32 = 3;
        pub const UnsignedSignature: i32 = 4;
        pub const G10cPgpSignatureDetached: i32 = 5;
    };

    pub const ValidateOptions = enum(i32) {
        pub const ValidateVerifyCertificate: i32 = 1;
        pub const ValidateForceRevalidation: i32 = 2;
        pub const ValidateWithoutOCSPRevocationCheck: i32 = 4;
        pub const ValidateUseAIACertFetch: i32 = 8;
    };

    pub const SigningResult = enum(i32) {
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
