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

    /// New constructs a new QDesktopServices object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDesktopServices `
    ///
    pub fn New(other: anytype) QDesktopServices {
        comptime _ = @TypeOf(other)._is_QDesktopServices;
        return .{ .ptr = qtc.QDesktopServices_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QDesktopServices object and invalidates the source QDesktopServices object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDesktopServices `
    ///
    pub fn New2(other: anytype) QDesktopServices {
        comptime _ = @TypeOf(other)._is_QDesktopServices;
        return .{ .ptr = qtc.QDesktopServices_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesktopServices `
    ///
    /// ` other: QDesktopServices `
    ///
    pub fn CopyAssign(self: QDesktopServices, other: QDesktopServices) void {
        qtc.QDesktopServices_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesktopServices `
    ///
    /// ` other: QDesktopServices `
    ///
    pub fn MoveAssign(self: QDesktopServices, other: QDesktopServices) void {
        qtc.QDesktopServices_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesktopservices.html#openUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn OpenUrl(url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QDesktopServices_OpenUrl(@ptrCast(url.ptr));
    }

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
    pub fn SetUrlHandler(scheme: []const u8, receiver: anytype, method: [:0]const u8) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const method_Cstring = method.ptr;
        qtc.QDesktopServices_SetUrlHandler(scheme_str, @ptrCast(receiver.ptr), method_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesktopservices.html#unsetUrlHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` scheme: []const u8 `
    ///
    pub fn UnsetUrlHandler(scheme: []const u8) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        qtc.QDesktopServices_UnsetUrlHandler(scheme_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesktopservices.html#dtor.QDesktopServices)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesktopServices `
    ///
    pub fn Delete(self: QDesktopServices) void {
        qtc.QDesktopServices_Delete(@ptrCast(self.ptr));
    }
};
