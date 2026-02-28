const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html)
pub const qstaticplugin = struct {
    /// New constructs a new QStaticPlugin object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStaticPlugin `
    ///
    pub fn New(other: ?*anyopaque) QtC.QStaticPlugin {
        return qtc.QStaticPlugin_new(@ptrCast(other));
    }

    /// New2 constructs a new QStaticPlugin object and invalidates the source QStaticPlugin object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QStaticPlugin `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QStaticPlugin {
        return qtc.QStaticPlugin_new2(@ptrCast(other));
    }

    /// New3 constructs a new QStaticPlugin object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QStaticPlugin `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QStaticPlugin {
        return qtc.QStaticPlugin_new3(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStaticPlugin `
    ///
    /// ` other: QtC.QStaticPlugin `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStaticPlugin_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStaticPlugin `
    ///
    /// ` other: QtC.QStaticPlugin `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStaticPlugin_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html#instance-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticPlugin `
    ///
    /// ## Returns:
    ///
    /// ` ?*const fn () callconv(.c) QtC.QObject `
    ///
    pub fn Instance(self: ?*anyopaque) ?*const fn () callconv(.c) QtC.QObject {
        return @ptrFromInt(@as(usize, @bitCast(qtc.QStaticPlugin_Instance(@ptrCast(self)))));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html#instance-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticPlugin `
    ///
    /// ` instance: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn SetInstance(self: ?*anyopaque, instance: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QStaticPlugin_SetInstance(@ptrCast(self), @bitCast(@intFromPtr(instance)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstaticplugin.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStaticPlugin `
    ///
    pub fn MetaData(self: ?*anyopaque) QtC.QJsonObject {
        return qtc.QStaticPlugin_MetaData(@ptrCast(self));
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
    /// ` self: QtC.QStaticPlugin `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QStaticPlugin_Delete(@ptrCast(self));
    }
};
