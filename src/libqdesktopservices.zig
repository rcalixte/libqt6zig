const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QObject = @import("libqt6").QObject;
const QUrl = @import("libqt6").QUrl;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesktopservices.html)
pub const QDesktopServices = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesktopservices.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesktopServices,

    pub const _is_QDesktopServices = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesktopServices object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDesktopServices `
    ///
    pub fn new(other: anytype) QDesktopServices {
        comptime _ = @TypeOf(other)._is_QDesktopServices;
        return .{ .ptr = qtc.QDesktopServices_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDesktopServices object and invalidate the source QDesktopServices object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDesktopServices `
    ///
    pub fn new2(other: anytype) QDesktopServices {
        comptime _ = @TypeOf(other)._is_QDesktopServices;
        return .{ .ptr = qtc.QDesktopServices_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesktopServices `
    ///
    /// ` other: QDesktopServices `
    ///
    pub fn copyAssign(self: QDesktopServices, other: QDesktopServices) void {
        qtc.QDesktopServices_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesktopServices `
    ///
    /// ` other: QDesktopServices `
    ///
    pub fn moveAssign(self: QDesktopServices, other: QDesktopServices) void {
        qtc.QDesktopServices_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `openUrl` instead
    ///
    pub const OpenUrl = openUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesktopservices.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn openUrl(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QDesktopServices_OpenUrl(@ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `setUrlHandler` instead
    ///
    pub const SetUrlHandler = setUrlHandler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesktopservices.html#setUrlHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` scheme: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: [:0]const u8 `
    ///
    pub fn setUrlHandler(scheme: []const u8, receiver: anytype, method: [:0]const u8) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const method_Cstring = method.ptr;
        qtc.QDesktopServices_SetUrlHandler(scheme_str, @ptrCast(receiver.ptr), method_Cstring);
    }

    /// ### DEPRECATED: Use `unsetUrlHandler` instead
    ///
    pub const UnsetUrlHandler = unsetUrlHandler;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesktopservices.html#unsetUrlHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` scheme: []const u8 `
    ///
    pub fn unsetUrlHandler(scheme: []const u8) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        qtc.QDesktopServices_UnsetUrlHandler(scheme_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesktopservices.html#dtor.QDesktopServices)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesktopServices `
    ///
    pub fn delete(self: QDesktopServices) void {
        qtc.QDesktopServices_Delete(@ptrCast(self.ptr));
    }
};
