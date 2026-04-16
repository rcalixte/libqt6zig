const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QObject = @import("libqt6").QObject;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html)
pub const QAbstractExtensionFactory = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractExtensionFactory,

    pub const _is_QAbstractExtensionFactory = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html#extension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractExtensionFactory `
    ///
    /// ` object: QObject `
    ///
    /// ` iid: []const u8 `
    ///
    pub fn Extension(self: QAbstractExtensionFactory, object: anytype, iid: []const u8) QObject {
        comptime _ = @TypeOf(object)._is_QObject;
        const iid_str = qtc.libqt_string{
            .len = iid.len,
            .data = iid.ptr,
        };
        return .{ .ptr = qtc.QAbstractExtensionFactory_Extension(@ptrCast(self.ptr), @ptrCast(object.ptr), iid_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractExtensionFactory `
    ///
    /// ` param1: QAbstractExtensionFactory `
    ///
    pub fn OperatorAssign(self: QAbstractExtensionFactory, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractExtensionFactory;
        qtc.QAbstractExtensionFactory_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html#dtor.QAbstractExtensionFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractExtensionFactory `
    ///
    pub fn Delete(self: QAbstractExtensionFactory) void {
        qtc.QAbstractExtensionFactory_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html)
pub const QAbstractExtensionManager = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractExtensionManager,

    pub const _is_QAbstractExtensionManager = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#registerExtensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractExtensionManager `
    ///
    /// ` factory: QAbstractExtensionFactory `
    ///
    /// ` iid: []const u8 `
    ///
    pub fn RegisterExtensions(self: QAbstractExtensionManager, factory: anytype, iid: []const u8) void {
        comptime _ = @TypeOf(factory)._is_QAbstractExtensionFactory;
        const iid_str = qtc.libqt_string{
            .len = iid.len,
            .data = iid.ptr,
        };
        qtc.QAbstractExtensionManager_RegisterExtensions(@ptrCast(self.ptr), @ptrCast(factory.ptr), iid_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#unregisterExtensions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractExtensionManager `
    ///
    /// ` factory: QAbstractExtensionFactory `
    ///
    /// ` iid: []const u8 `
    ///
    pub fn UnregisterExtensions(self: QAbstractExtensionManager, factory: anytype, iid: []const u8) void {
        comptime _ = @TypeOf(factory)._is_QAbstractExtensionFactory;
        const iid_str = qtc.libqt_string{
            .len = iid.len,
            .data = iid.ptr,
        };
        qtc.QAbstractExtensionManager_UnregisterExtensions(@ptrCast(self.ptr), @ptrCast(factory.ptr), iid_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#extension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractExtensionManager `
    ///
    /// ` object: QObject `
    ///
    /// ` iid: []const u8 `
    ///
    pub fn Extension(self: QAbstractExtensionManager, object: anytype, iid: []const u8) QObject {
        comptime _ = @TypeOf(object)._is_QObject;
        const iid_str = qtc.libqt_string{
            .len = iid.len,
            .data = iid.ptr,
        };
        return .{ .ptr = qtc.QAbstractExtensionManager_Extension(@ptrCast(self.ptr), @ptrCast(object.ptr), iid_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractExtensionManager `
    ///
    /// ` param1: QAbstractExtensionManager `
    ///
    pub fn OperatorAssign(self: QAbstractExtensionManager, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractExtensionManager;
        qtc.QAbstractExtensionManager_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#dtor.QAbstractExtensionManager)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractExtensionManager `
    ///
    pub fn Delete(self: QAbstractExtensionManager) void {
        qtc.QAbstractExtensionManager_Delete(@ptrCast(self.ptr));
    }
};
