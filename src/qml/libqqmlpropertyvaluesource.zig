const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QQmlProperty = @import("libqt6").QQmlProperty;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertyvaluesource.html)
pub const QQmlPropertyValueSource = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertyvaluesource.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlPropertyValueSource,

    pub const _is_QQmlPropertyValueSource = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlPropertyValueSource object in C++ memory
    ///
    pub fn new() QQmlPropertyValueSource {
        return .{ .ptr = qtc.QQmlPropertyValueSource_new() };
    }

    /// ### DEPRECATED: Use `setTarget` instead
    ///
    pub const SetTarget = setTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertyvaluesource.html#setTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyValueSource `
    ///
    /// ` target: QQmlProperty `
    ///
    pub fn setTarget(self: QQmlPropertyValueSource, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QQmlProperty;
        qtc.QQmlPropertyValueSource_SetTarget(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// ### DEPRECATED: Use `onSetTarget` instead
    ///
    pub const OnSetTarget = onSetTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertyvaluesource.html#setTarget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlPropertyValueSource `
    ///
    /// ` callback: *const fn (self: QQmlPropertyValueSource, target: QQmlProperty) callconv(.c) void `
    ///
    pub fn onSetTarget(self: QQmlPropertyValueSource, callback: *const fn (QQmlPropertyValueSource, QQmlProperty) callconv(.c) void) void {
        qtc.QQmlPropertyValueSource_OnSetTarget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTarget` instead
    ///
    pub const SuperSetTarget = superSetTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertyvaluesource.html#setTarget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyValueSource `
    ///
    /// ` target: QQmlProperty `
    ///
    pub fn superSetTarget(self: QQmlPropertyValueSource, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QQmlProperty;
        qtc.QQmlPropertyValueSource_SuperSetTarget(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertyvaluesource.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyValueSource `
    ///
    /// ` param1: QQmlPropertyValueSource `
    ///
    pub fn operatorAssign(self: QQmlPropertyValueSource, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlPropertyValueSource;
        qtc.QQmlPropertyValueSource_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertyvaluesource.html#dtor.QQmlPropertyValueSource)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlPropertyValueSource `
    ///
    pub fn delete(self: QQmlPropertyValueSource) void {
        qtc.QQmlPropertyValueSource_Delete(@ptrCast(self.ptr));
    }
};
