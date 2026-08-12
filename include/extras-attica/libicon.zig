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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Icon object in C++ memory
    ///
    pub fn new() Attica__Icon {
        return .{ .ptr = qtc.Attica__Icon_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Icon object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Icon `
    ///
    pub fn new2(other: anytype) Attica__Icon {
        comptime _ = @TypeOf(other)._is_Attica__Icon;
        return .{ .ptr = qtc.Attica__Icon_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Icon `
    ///
    /// ` other: Attica__Icon `
    ///
    pub fn operatorAssign(self: Attica__Icon, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Icon;
        qtc.Attica__Icon_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Icon `
    ///
    pub fn url(self: Attica__Icon) QUrl {
        return .{ .ptr = qtc.Attica__Icon_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Icon `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: Attica__Icon, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.Attica__Icon_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Icon `
    ///
    pub fn width(self: Attica__Icon) u32 {
        return qtc.Attica__Icon_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Icon `
    ///
    /// ` _width: u32 `
    ///
    pub fn setWidth(self: Attica__Icon, _width: u32) void {
        qtc.Attica__Icon_SetWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Icon `
    ///
    pub fn height(self: Attica__Icon) u32 {
        return qtc.Attica__Icon_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// ### [Upstream resources](https://api.kde.org/attica-icon.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Icon `
    ///
    /// ` _height: u32 `
    ///
    pub fn setHeight(self: Attica__Icon, _height: u32) void {
        qtc.Attica__Icon_SetHeight(@ptrCast(self.ptr), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Icon `
    ///
    pub fn delete(self: Attica__Icon) void {
        qtc.Attica__Icon_Delete(@ptrCast(self.ptr));
    }
};
