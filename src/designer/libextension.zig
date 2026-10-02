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

    /// ### DEPRECATED: Use `extension` instead
    ///
    pub const Extension = extension;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html#extension)
    ///
    /// **Warning:** Use caution when calling this method as it might not be defined.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractExtensionFactory `
    ///
    /// ` object: QObject `
    ///
    /// ` iid: []const u8 `
    ///
    pub fn extension(self: QAbstractExtensionFactory, object: anytype, iid: []const u8) QObject {
        comptime _ = @TypeOf(object)._is_QObject;
        const iid_str = qtc.libqt_string{
            .len = iid.len,
            .data = iid.ptr,
        };
        return .{ .ptr = qtc.QAbstractExtensionFactory_Extension(@ptrCast(self.ptr), @ptrCast(object.ptr), iid_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html#dtor.QAbstractExtensionFactory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractExtensionFactory `
    ///
    pub fn delete(self: QAbstractExtensionFactory) void {
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

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#dtor.QAbstractExtensionManager)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractExtensionManager `
    ///
    pub fn delete(self: QAbstractExtensionManager) void {
        qtc.QAbstractExtensionManager_Delete(@ptrCast(self.ptr));
    }
};
