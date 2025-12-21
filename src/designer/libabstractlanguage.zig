const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html)
pub const qdesignerlanguageextension = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLanguageExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerLanguageExtension_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerlanguageextension.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#createFormWindowSettingsDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLanguageExtension `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    /// ` parentWidget: QtC.QWidget `
    ///
    pub fn CreateFormWindowSettingsDialog(self: ?*anyopaque, formWindow: ?*anyopaque, parentWidget: ?*anyopaque) QtC.QDialog {
        return qtc.QDesignerLanguageExtension_CreateFormWindowSettingsDialog(@ptrCast(self), @ptrCast(formWindow), @ptrCast(parentWidget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#createResourceBrowser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLanguageExtension `
    ///
    /// ` parentWidget: QtC.QWidget `
    ///
    pub fn CreateResourceBrowser(self: ?*anyopaque, parentWidget: ?*anyopaque) QtC.QDesignerResourceBrowserInterface {
        return qtc.QDesignerLanguageExtension_CreateResourceBrowser(@ptrCast(self), @ptrCast(parentWidget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#createPromotionDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLanguageExtension `
    ///
    /// ` formEditor: QtC.QDesignerFormEditorInterface `
    ///
    /// ` parentWidget: QtC.QWidget `
    ///
    pub fn CreatePromotionDialog(self: ?*anyopaque, formEditor: ?*anyopaque, parentWidget: ?*anyopaque) QtC.QDialog {
        return qtc.QDesignerLanguageExtension_CreatePromotionDialog(@ptrCast(self), @ptrCast(formEditor), @ptrCast(parentWidget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#isLanguageResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLanguageExtension `
    ///
    /// ` path: []const u8 `
    ///
    pub fn IsLanguageResource(self: ?*anyopaque, path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QDesignerLanguageExtension_IsLanguageResource(@ptrCast(self), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#classNameOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLanguageExtension `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ClassNameOf(self: ?*anyopaque, object: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerLanguageExtension_ClassNameOf(@ptrCast(self), @ptrCast(object));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerlanguageextension.ClassNameOf: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#signalMatchesSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLanguageExtension `
    ///
    /// ` signal: []const u8 `
    ///
    /// ` slot: []const u8 `
    ///
    pub fn SignalMatchesSlot(self: ?*anyopaque, signal: []const u8, slot: []const u8) bool {
        const signal_str = qtc.libqt_string{
            .len = signal.len,
            .data = signal.ptr,
        };
        const slot_str = qtc.libqt_string{
            .len = slot.len,
            .data = slot.ptr,
        };
        return qtc.QDesignerLanguageExtension_SignalMatchesSlot(@ptrCast(self), signal_str, slot_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#widgetBoxContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLanguageExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WidgetBoxContents(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerLanguageExtension_WidgetBoxContents(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerlanguageextension.WidgetBoxContents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#uiExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerLanguageExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UiExtension(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerLanguageExtension_UiExtension(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerlanguageextension.UiExtension: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#dtor.QDesignerLanguageExtension)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerLanguageExtension `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerLanguageExtension_Delete(@ptrCast(self));
    }
};
