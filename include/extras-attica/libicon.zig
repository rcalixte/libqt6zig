const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;

/// ### [Upstream resources](https://api.kde.org/attica-icon.html)
pub const Attica__Icon = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-icon.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Icon,

    pub const _is_Attica__Icon = {};

    /// New constructs a new Attica::Icon object.
    ///
    pub fn New() Attica__Icon {
        return .{ .ptr = qtc.Attica__Icon_new() };
    }

    /// New2 constructs a new Attica::Icon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Icon `
    ///
    pub fn New2(other: anytype) Attica__Icon {
        comptime _ = @TypeOf(other)._is_Attica__Icon;
        return .{ .ptr = qtc.Attica__Icon_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Icon `
    ///
    /// ` other: Attica__Icon `
    ///
    pub fn OperatorAssign(self: Attica__Icon, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Icon;
        qtc.Attica__Icon_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Icon `
    ///
    pub fn Url(self: Attica__Icon) QUrl {
        return .{ .ptr = qtc.Attica__Icon_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Icon `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: Attica__Icon, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__Icon_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Icon `
    ///
    pub fn Width(self: Attica__Icon) u32 {
        return qtc.Attica__Icon_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Icon `
    ///
    /// ` width: u32 `
    ///
    pub fn SetWidth(self: Attica__Icon, width: u32) void {
        qtc.Attica__Icon_SetWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Icon `
    ///
    pub fn Height(self: Attica__Icon) u32 {
        return qtc.Attica__Icon_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Icon `
    ///
    /// ` height: u32 `
    ///
    pub fn SetHeight(self: Attica__Icon, height: u32) void {
        qtc.Attica__Icon_SetHeight(@ptrCast(self.ptr), @bitCast(height));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Icon `
    ///
    pub fn Delete(self: Attica__Icon) void {
        qtc.Attica__Icon_Delete(@ptrCast(self.ptr));
    }
};
