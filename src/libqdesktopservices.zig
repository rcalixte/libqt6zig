const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/qdesktopservices.html
pub const qdesktopservices = struct {
    /// New constructs a new QDesktopServices object.
    ///
    /// ``` other: QtC.QDesktopServices ```
    pub fn New(other: ?*anyopaque) QtC.QDesktopServices {
        return qtc.QDesktopServices_new(@ptrCast(other));
    }

    /// New2 constructs a new QDesktopServices object and invalidates the source QDesktopServices object.
    ///
    /// ``` other: QtC.QDesktopServices ```
    pub fn New2(other: ?*anyopaque) QtC.QDesktopServices {
        return qtc.QDesktopServices_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QDesktopServices, other: QtC.QDesktopServices ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDesktopServices_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QDesktopServices, other: QtC.QDesktopServices ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDesktopServices_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdesktopservices.html#openUrl)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn OpenUrl(url: ?*anyopaque) bool {
        return qtc.QDesktopServices_OpenUrl(@ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdesktopservices.html#setUrlHandler)
    ///
    /// ``` scheme: []const u8, receiver: QtC.QObject, method: []const u8 ```
    pub fn SetUrlHandler(scheme: []const u8, receiver: ?*anyopaque, method: []const u8) void {
        const scheme_str = qtc.struct_libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        const method_Cstring = method.ptr;
        qtc.QDesktopServices_SetUrlHandler(scheme_str, @ptrCast(receiver), method_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdesktopservices.html#unsetUrlHandler)
    ///
    /// ``` scheme: []const u8 ```
    pub fn UnsetUrlHandler(scheme: []const u8) void {
        const scheme_str = qtc.struct_libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        qtc.QDesktopServices_UnsetUrlHandler(scheme_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdesktopservices.html#dtor.QDesktopServices)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDesktopServices ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesktopServices_Delete(@ptrCast(self));
    }
};
