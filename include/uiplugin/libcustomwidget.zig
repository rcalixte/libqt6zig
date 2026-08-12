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

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDesignerCustomWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerCustomWidgetInterface.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn group(self: QDesignerCustomWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerCustomWidgetInterface.group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QDesignerCustomWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerCustomWidgetInterface.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QDesignerCustomWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerCustomWidgetInterface.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `includeFile` instead
    ///
    pub const IncludeFile = includeFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#includeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn includeFile(self: QDesignerCustomWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_IncludeFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerCustomWidgetInterface.includeFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    pub fn icon(self: QDesignerCustomWidgetInterface) QIcon {
        return .{ .ptr = qtc.QDesignerCustomWidgetInterface_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isContainer` instead
    ///
    pub const IsContainer = isContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    pub fn isContainer(self: QDesignerCustomWidgetInterface) bool {
        return qtc.QDesignerCustomWidgetInterface_IsContainer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createWidget` instead
    ///
    pub const CreateWidget = createWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#createWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn createWidget(self: QDesignerCustomWidgetInterface, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerCustomWidgetInterface_CreateWidget(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `isInitialized` instead
    ///
    pub const IsInitialized = isInitialized;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#isInitialized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    pub fn isInitialized(self: QDesignerCustomWidgetInterface) bool {
        return qtc.QDesignerCustomWidgetInterface_IsInitialized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `initialize` instead
    ///
    pub const Initialize = initialize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#initialize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    pub fn initialize(self: QDesignerCustomWidgetInterface, core: anytype) void {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        qtc.QDesignerCustomWidgetInterface_Initialize(@ptrCast(self.ptr), @ptrCast(core.ptr));
    }

    /// ### DEPRECATED: Use `domXml` instead
    ///
    pub const DomXml = domXml;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#domXml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn domXml(self: QDesignerCustomWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_DomXml(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerCustomWidgetInterface.domXml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `codeTemplate` instead
    ///
    pub const CodeTemplate = codeTemplate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#codeTemplate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn codeTemplate(self: QDesignerCustomWidgetInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerCustomWidgetInterface_CodeTemplate(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerCustomWidgetInterface.codeTemplate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    /// ` param1: QDesignerCustomWidgetInterface `
    ///
    pub fn operatorAssign(self: QDesignerCustomWidgetInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDesignerCustomWidgetInterface;
        qtc.QDesignerCustomWidgetInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html#dtor.QDesignerCustomWidgetInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerCustomWidgetInterface `
    ///
    pub fn delete(self: QDesignerCustomWidgetInterface) void {
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

    /// ### DEPRECATED: Use `customWidgets` instead
    ///
    pub const CustomWidgets = customWidgets;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html#customWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetCollectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn customWidgets(self: QDesignerCustomWidgetCollectionInterface, allocator: std.mem.Allocator) []QDesignerCustomWidgetInterface {
        const _arr: qtc.libqt_list = qtc.QDesignerCustomWidgetCollectionInterface_CustomWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QDesignerCustomWidgetInterface, _arr.len) catch @panic("QDesignerCustomWidgetCollectionInterface.customWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QDesignerCustomWidgetInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerCustomWidgetCollectionInterface `
    ///
    /// ` param1: QDesignerCustomWidgetCollectionInterface `
    ///
    pub fn operatorAssign(self: QDesignerCustomWidgetCollectionInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDesignerCustomWidgetCollectionInterface;
        qtc.QDesignerCustomWidgetCollectionInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetcollectioninterface.html#dtor.QDesignerCustomWidgetCollectionInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerCustomWidgetCollectionInterface `
    ///
    pub fn delete(self: QDesignerCustomWidgetCollectionInterface) void {
        qtc.QDesignerCustomWidgetCollectionInterface_Delete(@ptrCast(self.ptr));
    }
};
