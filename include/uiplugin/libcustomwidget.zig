const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDesignerFormEditorInterface = @import("libqt6").QDesignerFormEditorInterface;
const QIcon = @import("libqt6").QIcon;
const QWidget = @import("libqt6").QWidget;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html)
pub const QDesignerCustomWidgetInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerCustomWidgetInterface,

    pub const _is_QDesignerCustomWidgetInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QDesignerCustomWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignercustomwidgetinterface.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: QDesignerCustomWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignercustomwidgetinterface.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QDesignerCustomWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignercustomwidgetinterface.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QDesignerCustomWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignercustomwidgetinterface.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#includeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IncludeFile(self: QDesignerCustomWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_IncludeFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignercustomwidgetinterface.IncludeFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    pub fn Icon(self: QDesignerCustomWidgetInterface) QIcon {
        return .{ .ptr = qtc.QDesignerCustomWidgetInterface_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    pub fn IsContainer(self: QDesignerCustomWidgetInterface) bool {
        return qtc.QDesignerCustomWidgetInterface_IsContainer(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#createWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateWidget(self: QDesignerCustomWidgetInterface, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerCustomWidgetInterface_CreateWidget(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#isInitialized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    pub fn IsInitialized(self: QDesignerCustomWidgetInterface) bool {
        return qtc.QDesignerCustomWidgetInterface_IsInitialized(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#initialize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    pub fn Initialize(self: QDesignerCustomWidgetInterface, core: anytype) void {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        qtc.QDesignerCustomWidgetInterface_Initialize(@ptrCast(self.ptr), @ptrCast(core.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#domXml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DomXml(self: QDesignerCustomWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_DomXml(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignercustomwidgetinterface.DomXml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#codeTemplate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CodeTemplate(self: QDesignerCustomWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_CodeTemplate(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignercustomwidgetinterface.CodeTemplate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` param1: QDesignerCustomWidgetInterface `
    ///
    pub fn OperatorAssign(self: QDesignerCustomWidgetInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDesignerCustomWidgetInterface;
        qtc.QDesignerCustomWidgetInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#dtor.QDesignerCustomWidgetInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    pub fn Delete(self: QDesignerCustomWidgetInterface) void {
        qtc.QDesignerCustomWidgetInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html)
pub const QDesignerCustomWidgetCollectionInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerCustomWidgetCollectionInterface,

    pub const _is_QDesignerCustomWidgetCollectionInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html#customWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetCollectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CustomWidgets(self: QDesignerCustomWidgetCollectionInterface, allocator: std.mem.Allocator) []QDesignerCustomWidgetInterface {
        const _arr: qtc.libqt_list = qtc.QDesignerCustomWidgetCollectionInterface_CustomWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDesignerCustomWidgetInterface, _arr.len) catch @panic("qdesignercustomwidgetcollectioninterface.CustomWidgets: Memory allocation failed");
        const _data: [*]QtC.QDesignerCustomWidgetInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetCollectionInterface `
    ///
    /// ` param1: QDesignerCustomWidgetCollectionInterface `
    ///
    pub fn OperatorAssign(self: QDesignerCustomWidgetCollectionInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDesignerCustomWidgetCollectionInterface;
        qtc.QDesignerCustomWidgetCollectionInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html#dtor.QDesignerCustomWidgetCollectionInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerCustomWidgetCollectionInterface `
    ///
    pub fn Delete(self: QDesignerCustomWidgetCollectionInterface) void {
        qtc.QDesignerCustomWidgetCollectionInterface_Delete(@ptrCast(self.ptr));
    }
};
