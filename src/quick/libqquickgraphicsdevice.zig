const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QOpenGLContext = @import("libqt6").QOpenGLContext;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsdevice.html)
pub const QQuickGraphicsDevice = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsdevice.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickGraphicsDevice,

    pub const _is_QQuickGraphicsDevice = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQuickGraphicsDevice object in C++ memory
    ///
    pub fn new() QQuickGraphicsDevice {
        return .{ .ptr = qtc.QQuickGraphicsDevice_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQuickGraphicsDevice object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QQuickGraphicsDevice `
    ///
    pub fn new2(other: anytype) QQuickGraphicsDevice {
        comptime _ = @TypeOf(other)._is_QQuickGraphicsDevice;
        return .{ .ptr = qtc.QQuickGraphicsDevice_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsdevice.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsDevice `
    ///
    /// ` other: QQuickGraphicsDevice `
    ///
    pub fn operatorAssign(self: QQuickGraphicsDevice, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QQuickGraphicsDevice;
        qtc.QQuickGraphicsDevice_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsdevice.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickGraphicsDevice `
    ///
    pub fn isNull(self: QQuickGraphicsDevice) bool {
        return qtc.QQuickGraphicsDevice_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromOpenGLContext` instead
    ///
    pub const FromOpenGLContext = fromOpenGLContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsdevice.html#fromOpenGLContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` context: QOpenGLContext `
    ///
    pub fn fromOpenGLContext(context: anytype) QQuickGraphicsDevice {
        comptime _ = @TypeOf(context)._is_QOpenGLContext;
        return .{ .ptr = qtc.QQuickGraphicsDevice_FromOpenGLContext(@ptrCast(context.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickgraphicsdevice.html#dtor.QQuickGraphicsDevice)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickGraphicsDevice `
    ///
    pub fn delete(self: QQuickGraphicsDevice) void {
        qtc.QQuickGraphicsDevice_Delete(@ptrCast(self.ptr));
    }
};
