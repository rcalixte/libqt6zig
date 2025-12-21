const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html)
pub const qabstractextensionfactory = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html#extension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractExtensionFactory `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` iid: []const u8 `
    ///
    pub fn Extension(self: ?*anyopaque, object: ?*anyopaque, iid: []const u8) QtC.QObject {
        const iid_str = qtc.libqt_string{
            .len = iid.len,
            .data = iid.ptr,
        };
        return qtc.QAbstractExtensionFactory_Extension(@ptrCast(self), @ptrCast(object), iid_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractExtensionFactory `
    ///
    /// ` param1: QtC.QAbstractExtensionFactory `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractExtensionFactory_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html#dtor.QAbstractExtensionFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAbstractExtensionFactory `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractExtensionFactory_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html)
pub const qabstractextensionmanager = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#registerExtensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractExtensionManager `
    ///
    /// ` factory: QtC.QAbstractExtensionFactory `
    ///
    /// ` iid: []const u8 `
    ///
    pub fn RegisterExtensions(self: ?*anyopaque, factory: ?*anyopaque, iid: []const u8) void {
        const iid_str = qtc.libqt_string{
            .len = iid.len,
            .data = iid.ptr,
        };
        qtc.QAbstractExtensionManager_RegisterExtensions(@ptrCast(self), @ptrCast(factory), iid_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#unregisterExtensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractExtensionManager `
    ///
    /// ` factory: QtC.QAbstractExtensionFactory `
    ///
    /// ` iid: []const u8 `
    ///
    pub fn UnregisterExtensions(self: ?*anyopaque, factory: ?*anyopaque, iid: []const u8) void {
        const iid_str = qtc.libqt_string{
            .len = iid.len,
            .data = iid.ptr,
        };
        qtc.QAbstractExtensionManager_UnregisterExtensions(@ptrCast(self), @ptrCast(factory), iid_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#extension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractExtensionManager `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` iid: []const u8 `
    ///
    pub fn Extension(self: ?*anyopaque, object: ?*anyopaque, iid: []const u8) QtC.QObject {
        const iid_str = qtc.libqt_string{
            .len = iid.len,
            .data = iid.ptr,
        };
        return qtc.QAbstractExtensionManager_Extension(@ptrCast(self), @ptrCast(object), iid_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAbstractExtensionManager `
    ///
    /// ` param1: QtC.QAbstractExtensionManager `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractExtensionManager_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#dtor.QAbstractExtensionManager)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAbstractExtensionManager `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractExtensionManager_Delete(@ptrCast(self));
    }
};
