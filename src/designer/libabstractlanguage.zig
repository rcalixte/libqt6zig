const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDesignerFormEditorInterface = @import("libqt6").QDesignerFormEditorInterface;
const QDesignerFormWindowInterface = @import("libqt6").QDesignerFormWindowInterface;
const QDesignerResourceBrowserInterface = @import("libqt6").QDesignerResourceBrowserInterface;
const QDialog = @import("libqt6").QDialog;
const QObject = @import("libqt6").QObject;
const QWidget = @import("libqt6").QWidget;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html)
pub const QDesignerLanguageExtension = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerLanguageExtension,

    pub const _is_QDesignerLanguageExtension = {};

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLanguageExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDesignerLanguageExtension, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerLanguageExtension_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerLanguageExtension.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `createFormWindowSettingsDialog` instead
    ///
    pub const CreateFormWindowSettingsDialog = createFormWindowSettingsDialog;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#createFormWindowSettingsDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLanguageExtension `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    /// ` parentWidget: QWidget `
    ///
    pub fn createFormWindowSettingsDialog(self: QDesignerLanguageExtension, formWindow: anytype, parentWidget: anytype) QDialog {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerLanguageExtension_CreateFormWindowSettingsDialog(@ptrCast(self.ptr), @ptrCast(formWindow.ptr), @ptrCast(parentWidget.ptr)) };
    }

    /// ### DEPRECATED: Use `createResourceBrowser` instead
    ///
    pub const CreateResourceBrowser = createResourceBrowser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#createResourceBrowser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLanguageExtension `
    ///
    /// ` parentWidget: QWidget `
    ///
    pub fn createResourceBrowser(self: QDesignerLanguageExtension, parentWidget: anytype) QDesignerResourceBrowserInterface {
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerLanguageExtension_CreateResourceBrowser(@ptrCast(self.ptr), @ptrCast(parentWidget.ptr)) };
    }

    /// ### DEPRECATED: Use `createPromotionDialog` instead
    ///
    pub const CreatePromotionDialog = createPromotionDialog;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#createPromotionDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLanguageExtension `
    ///
    /// ` formEditor: QDesignerFormEditorInterface `
    ///
    /// ` parentWidget: QWidget `
    ///
    pub fn createPromotionDialog(self: QDesignerLanguageExtension, formEditor: anytype, parentWidget: anytype) QDialog {
        comptime _ = @TypeOf(formEditor)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parentWidget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerLanguageExtension_CreatePromotionDialog(@ptrCast(self.ptr), @ptrCast(formEditor.ptr), @ptrCast(parentWidget.ptr)) };
    }

    /// ### DEPRECATED: Use `isLanguageResource` instead
    ///
    pub const IsLanguageResource = isLanguageResource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#isLanguageResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLanguageExtension `
    ///
    /// ` path: []const u8 `
    ///
    pub fn isLanguageResource(self: QDesignerLanguageExtension, path: []const u8) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QDesignerLanguageExtension_IsLanguageResource(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `classNameOf` instead
    ///
    pub const ClassNameOf = classNameOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#classNameOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLanguageExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` object: QObject `
    ///
    pub fn classNameOf(self: QDesignerLanguageExtension, allocator: std.mem.Allocator, object: anytype) []const u8 {
        comptime _ = @TypeOf(object)._is_QObject;
        var _str = qtc.QDesignerLanguageExtension_ClassNameOf(@ptrCast(self.ptr), @ptrCast(object.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerLanguageExtension.classNameOf: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `signalMatchesSlot` instead
    ///
    pub const SignalMatchesSlot = signalMatchesSlot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#signalMatchesSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLanguageExtension `
    ///
    /// ` signal: []const u8 `
    ///
    /// ` slot: []const u8 `
    ///
    pub fn signalMatchesSlot(self: QDesignerLanguageExtension, signal: []const u8, slot: []const u8) bool {
        const signal_str = qtc.libqt_string{
            .len = signal.len,
            .data = signal.ptr,
        };
        const slot_str = qtc.libqt_string{
            .len = slot.len,
            .data = slot.ptr,
        };
        return qtc.QDesignerLanguageExtension_SignalMatchesSlot(@ptrCast(self.ptr), signal_str, slot_str);
    }

    /// ### DEPRECATED: Use `widgetBoxContents` instead
    ///
    pub const WidgetBoxContents = widgetBoxContents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#widgetBoxContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLanguageExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn widgetBoxContents(self: QDesignerLanguageExtension, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerLanguageExtension_WidgetBoxContents(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerLanguageExtension.widgetBoxContents: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `uiExtension` instead
    ///
    pub const UiExtension = uiExtension;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#uiExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerLanguageExtension `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uiExtension(self: QDesignerLanguageExtension, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerLanguageExtension_UiExtension(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerLanguageExtension.uiExtension: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#dtor.QDesignerLanguageExtension)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerLanguageExtension `
    ///
    pub fn delete(self: QDesignerLanguageExtension) void {
        qtc.QDesignerLanguageExtension_Delete(@ptrCast(self.ptr));
    }
};
