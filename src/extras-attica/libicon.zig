const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/attica-icon.html)
pub const attica__icon = struct {
    /// New constructs a new Attica::Icon object.
    ///
    pub fn New() QtC.Attica__Icon {
        return qtc.Attica__Icon_new();
    }

    /// New2 constructs a new Attica::Icon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Attica__Icon `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Attica__Icon {
        return qtc.Attica__Icon_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Icon `
    ///
    /// ` other: QtC.Attica__Icon `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Icon_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Icon `
    ///
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__Icon_Url(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Icon `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.Attica__Icon_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Icon `
    ///
    pub fn Width(self: ?*anyopaque) u32 {
        return qtc.Attica__Icon_Width(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Icon `
    ///
    /// ` width: u32 `
    ///
    pub fn SetWidth(self: ?*anyopaque, width: u32) void {
        qtc.Attica__Icon_SetWidth(@ptrCast(self), @bitCast(width));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Icon `
    ///
    pub fn Height(self: ?*anyopaque) u32 {
        return qtc.Attica__Icon_Height(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Icon `
    ///
    /// ` height: u32 `
    ///
    pub fn SetHeight(self: ?*anyopaque, height: u32) void {
        qtc.Attica__Icon_SetHeight(@ptrCast(self), @bitCast(height));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Attica__Icon `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Attica__Icon_Delete(@ptrCast(self));
    }
};
