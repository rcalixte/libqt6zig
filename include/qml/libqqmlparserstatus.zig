const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html)
pub const QQmlParserStatus = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlParserStatus,

    pub const _is_QQmlParserStatus = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlParserStatus object in C++ memory
    ///
    pub fn new() QQmlParserStatus {
        return .{ .ptr = qtc.QQmlParserStatus_new() };
    }

    /// ### DEPRECATED: Use `classBegin` instead
    ///
    pub const ClassBegin = classBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#classBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlParserStatus `
    ///
    pub fn classBegin(self: QQmlParserStatus) void {
        qtc.QQmlParserStatus_ClassBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClassBegin` instead
    ///
    pub const OnClassBegin = onClassBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#classBegin)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlParserStatus `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClassBegin(self: QQmlParserStatus, callback: *const fn () callconv(.c) void) void {
        qtc.QQmlParserStatus_OnClassBegin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClassBegin` instead
    ///
    pub const SuperClassBegin = superClassBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#classBegin)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlParserStatus `
    ///
    pub fn superClassBegin(self: QQmlParserStatus) void {
        qtc.QQmlParserStatus_SuperClassBegin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `componentComplete` instead
    ///
    pub const ComponentComplete = componentComplete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#componentComplete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlParserStatus `
    ///
    pub fn componentComplete(self: QQmlParserStatus) void {
        qtc.QQmlParserStatus_ComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onComponentComplete` instead
    ///
    pub const OnComponentComplete = onComponentComplete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#componentComplete)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlParserStatus `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onComponentComplete(self: QQmlParserStatus, callback: *const fn () callconv(.c) void) void {
        qtc.QQmlParserStatus_OnComponentComplete(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superComponentComplete` instead
    ///
    pub const SuperComponentComplete = superComponentComplete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#componentComplete)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlParserStatus `
    ///
    pub fn superComponentComplete(self: QQmlParserStatus) void {
        qtc.QQmlParserStatus_SuperComponentComplete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlParserStatus `
    ///
    /// ` param1: QQmlParserStatus `
    ///
    pub fn operatorAssign(self: QQmlParserStatus, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlParserStatus;
        const param1_ = if (@hasDecl(@TypeOf(param1), "asQQmlParserStatus")) param1.asQQmlParserStatus() else param1;
        qtc.QQmlParserStatus_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1_.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#dtor.QQmlParserStatus)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlParserStatus `
    ///
    pub fn delete(self: QQmlParserStatus) void {
        qtc.QQmlParserStatus_Delete(@ptrCast(self.ptr));
    }
};
