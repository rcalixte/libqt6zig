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

    /// New constructs a new QStaticPlugin object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStaticPlugin `
    ///
    pub fn New(other: anytype) QStaticPlugin {
        comptime _ = @TypeOf(other)._is_QStaticPlugin;
        return .{ .ptr = qtc.QStaticPlugin_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QStaticPlugin object and invalidates the source QStaticPlugin object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStaticPlugin `
    ///
    pub fn New2(other: anytype) QStaticPlugin {
        comptime _ = @TypeOf(other)._is_QStaticPlugin;
        return .{ .ptr = qtc.QStaticPlugin_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QStaticPlugin object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QStaticPlugin `
    ///
    pub fn New3(param1: anytype) QStaticPlugin {
        comptime _ = @TypeOf(param1)._is_QStaticPlugin;
        return .{ .ptr = qtc.QStaticPlugin_new3(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QStaticPlugin `
    ///
    /// ` other: QStaticPlugin `
    ///
    pub fn CopyAssign(self: QStaticPlugin, other: QStaticPlugin) void {
        qtc.QStaticPlugin_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QStaticPlugin `
    ///
    /// ` other: QStaticPlugin `
    ///
    pub fn MoveAssign(self: QStaticPlugin, other: QStaticPlugin) void {
        qtc.QStaticPlugin_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

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
    pub fn Instance(self: QStaticPlugin) ?*const fn () callconv(.c) QObject {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QStaticPlugin_Instance(@ptrCast(self.ptr)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html#instance-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticPlugin `
    ///
    /// ` instance: *const fn () callconv(.c) QObject `
    ///
    pub fn SetInstance(self: QStaticPlugin, instance: *const fn () callconv(.c) QObject) void {
        qtc.QStaticPlugin_SetInstance(@ptrCast(self.ptr), @bitCast(@intFromPtr(instance)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStaticPlugin `
    ///
    pub fn MetaData(self: QStaticPlugin) QJsonObject {
        return .{ .ptr = qtc.QStaticPlugin_MetaData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html#dtor.QStaticPlugin)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStaticPlugin `
    ///
    pub fn Delete(self: QStaticPlugin) void {
        qtc.QStaticPlugin_Delete(@ptrCast(self.ptr));
    }
};
