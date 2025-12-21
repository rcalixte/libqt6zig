const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html)
pub const qdesignercustomwidgetinterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignercustomwidgetinterface.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_Group(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignercustomwidgetinterface.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignercustomwidgetinterface.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignercustomwidgetinterface.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#includeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IncludeFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_IncludeFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignercustomwidgetinterface.IncludeFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetInterface `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QDesignerCustomWidgetInterface_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetInterface `
    ///
    pub fn IsContainer(self: ?*anyopaque) bool {
        return qtc.QDesignerCustomWidgetInterface_IsContainer(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#createWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetInterface `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn CreateWidget(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerCustomWidgetInterface_CreateWidget(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#isInitialized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetInterface `
    ///
    pub fn IsInitialized(self: ?*anyopaque) bool {
        return qtc.QDesignerCustomWidgetInterface_IsInitialized(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#initialize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetInterface `
    ///
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    pub fn Initialize(self: ?*anyopaque, core: ?*anyopaque) void {
        qtc.QDesignerCustomWidgetInterface_Initialize(@ptrCast(self), @ptrCast(core));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#domXml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DomXml(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_DomXml(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignercustomwidgetinterface.DomXml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#codeTemplate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CodeTemplate(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_CodeTemplate(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignercustomwidgetinterface.CodeTemplate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetInterface `
    ///
    /// ` param1: QtC.QDesignerCustomWidgetInterface `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDesignerCustomWidgetInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#dtor.QDesignerCustomWidgetInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerCustomWidgetInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerCustomWidgetInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html)
pub const qdesignercustomwidgetcollectioninterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html#customWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetCollectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CustomWidgets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDesignerCustomWidgetInterface {
        const _arr: qtc.libqt_list = qtc.QDesignerCustomWidgetCollectionInterface_CustomWidgets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDesignerCustomWidgetInterface, _arr.len) catch @panic("qdesignercustomwidgetcollectioninterface.CustomWidgets: Memory allocation failed");
        const _data: [*]QtC.QDesignerCustomWidgetInterface = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerCustomWidgetCollectionInterface `
    ///
    /// ` param1: QtC.QDesignerCustomWidgetCollectionInterface `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QDesignerCustomWidgetCollectionInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html#dtor.QDesignerCustomWidgetCollectionInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerCustomWidgetCollectionInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerCustomWidgetCollectionInterface_Delete(@ptrCast(self));
    }
};
