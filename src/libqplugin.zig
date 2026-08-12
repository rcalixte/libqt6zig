const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QJsonObject = @import("libqt6").QJsonObject;
const QObject = @import("libqt6").QObject;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html)
pub const QStaticPlugin = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStaticPlugin,

    pub const _is_QStaticPlugin = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStaticPlugin object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStaticPlugin `
    ///
    pub fn new(other: anytype) QStaticPlugin {
        comptime _ = @TypeOf(other)._is_QStaticPlugin;
        return .{ .ptr = qtc.QStaticPlugin_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStaticPlugin object and invalidate the source QStaticPlugin object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStaticPlugin `
    ///
    pub fn new2(other: anytype) QStaticPlugin {
        comptime _ = @TypeOf(other)._is_QStaticPlugin;
        return .{ .ptr = qtc.QStaticPlugin_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QStaticPlugin object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QStaticPlugin `
    ///
    pub fn new3(param1: anytype) QStaticPlugin {
        comptime _ = @TypeOf(param1)._is_QStaticPlugin;
        return .{ .ptr = qtc.QStaticPlugin_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QStaticPlugin `
    ///
    /// ` other: QStaticPlugin `
    ///
    pub fn copyAssign(self: QStaticPlugin, other: QStaticPlugin) void {
        qtc.QStaticPlugin_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QStaticPlugin `
    ///
    /// ` other: QStaticPlugin `
    ///
    pub fn moveAssign(self: QStaticPlugin, other: QStaticPlugin) void {
        qtc.QStaticPlugin_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `instance` instead
    ///
    pub const Instance = instance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html#instance-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticPlugin `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn () callconv(.c) QObject `
    ///
    pub fn instance(self: QStaticPlugin) ?*const fn () callconv(.c) QObject {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QStaticPlugin_Instance(@ptrCast(self.ptr)))));
    }

    /// ### DEPRECATED: Use `setInstance` instead
    ///
    pub const SetInstance = setInstance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html#instance-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticPlugin `
    ///
    /// ` _instance: *const fn () callconv(.c) QObject `
    ///
    pub fn setInstance(self: QStaticPlugin, _instance: *const fn () callconv(.c) QObject) void {
        qtc.QStaticPlugin_SetInstance(@ptrCast(self.ptr), @bitCast(@intFromPtr(_instance)));
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticPlugin `
    ///
    pub fn metaData(self: QStaticPlugin) QJsonObject {
        return .{ .ptr = qtc.QStaticPlugin_MetaData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html#dtor.QStaticPlugin)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStaticPlugin `
    ///
    pub fn delete(self: QStaticPlugin) void {
        qtc.QStaticPlugin_Delete(@ptrCast(self.ptr));
    }
};
