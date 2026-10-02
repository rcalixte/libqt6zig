const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDesignerFormEditorInterface = @import("libqt6").QDesignerFormEditorInterface;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html)
pub const QDesignerCustomWidgetInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignercustomwidgetinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerCustomWidgetInterface,

    pub const _is_QDesignerCustomWidgetInterface = {};

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
