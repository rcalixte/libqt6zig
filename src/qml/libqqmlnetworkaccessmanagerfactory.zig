const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QNetworkAccessManager = @import("libqt6").QNetworkAccessManager;
const QObject = @import("libqt6").QObject;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlnetworkaccessmanagerfactory.html)
pub const QQmlNetworkAccessManagerFactory = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlnetworkaccessmanagerfactory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlNetworkAccessManagerFactory,

    pub const _is_QQmlNetworkAccessManagerFactory = {};

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlnetworkaccessmanagerfactory.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlNetworkAccessManagerFactory `
    ///
    /// ` parent: QObject `
    ///
    pub fn create(self: QQmlNetworkAccessManagerFactory, parent: anytype) QNetworkAccessManager {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QQmlNetworkAccessManagerFactory_Create(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlnetworkaccessmanagerfactory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlNetworkAccessManagerFactory `
    ///
    /// ` param1: QQmlNetworkAccessManagerFactory `
    ///
    pub fn operatorAssign(self: QQmlNetworkAccessManagerFactory, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlNetworkAccessManagerFactory;
        qtc.QQmlNetworkAccessManagerFactory_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlnetworkaccessmanagerfactory.html#dtor.QQmlNetworkAccessManagerFactory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlNetworkAccessManagerFactory `
    ///
    pub fn delete(self: QQmlNetworkAccessManagerFactory) void {
        qtc.QQmlNetworkAccessManagerFactory_Delete(@ptrCast(self.ptr));
    }
};
