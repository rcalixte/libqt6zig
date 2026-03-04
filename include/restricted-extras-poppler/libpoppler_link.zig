const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const poppler_link_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
pub const poppler__linkdestination = struct {
    /// New constructs a new Poppler::LinkDestination object.
    ///
    /// ## Parameter(s):
    ///
    /// ` description: []const u8 `
    ///
    pub fn New(description: []const u8) QtC.Poppler__LinkDestination {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };

        return qtc.Poppler__LinkDestination_new(description_str);
    }

    /// New2 constructs a new Poppler::LinkDestination object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Poppler__LinkDestination `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Poppler__LinkDestination {
        return qtc.Poppler__LinkDestination_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkDestination `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.Kind `
    ///
    pub fn Kind(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkDestination_Kind(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkDestination `
    ///
    pub fn PageNumber(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkDestination_PageNumber(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkDestination `
    ///
    pub fn Left(self: ?*anyopaque) f64 {
        return qtc.Poppler__LinkDestination_Left(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkDestination `
    ///
    pub fn Bottom(self: ?*anyopaque) f64 {
        return qtc.Poppler__LinkDestination_Bottom(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkDestination `
    ///
    pub fn Right(self: ?*anyopaque) f64 {
        return qtc.Poppler__LinkDestination_Right(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkDestination `
    ///
    pub fn Top(self: ?*anyopaque) f64 {
        return qtc.Poppler__LinkDestination_Top(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkDestination `
    ///
    pub fn Zoom(self: ?*anyopaque) f64 {
        return qtc.Poppler__LinkDestination_Zoom(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkDestination `
    ///
    pub fn IsChangeLeft(self: ?*anyopaque) bool {
        return qtc.Poppler__LinkDestination_IsChangeLeft(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkDestination `
    ///
    pub fn IsChangeTop(self: ?*anyopaque) bool {
        return qtc.Poppler__LinkDestination_IsChangeTop(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkDestination `
    ///
    pub fn IsChangeZoom(self: ?*anyopaque) bool {
        return qtc.Poppler__LinkDestination_IsChangeZoom(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkDestination `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkDestination_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkdestination.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkDestination `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DestinationName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkDestination_DestinationName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkdestination.DestinationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkDestination `
    ///
    /// ` other: QtC.Poppler__LinkDestination `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Poppler__LinkDestination_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__LinkDestination `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LinkDestination_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
pub const poppler__link = struct {
    /// New constructs a new Poppler::Link object.
    ///
    /// ## Parameter(s):
    ///
    /// ` linkArea: QtC.QRectF `
    ///
    pub fn New(linkArea: ?*anyopaque) QtC.Poppler__Link {
        return qtc.Poppler__Link_new(@ptrCast(linkArea));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Link `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Link_LinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__Link `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLinkType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__Link_OnLinkType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLinkType` instead
    ///
    pub const QBaseLinkType = SuperLinkType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Link `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn SuperLinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__Link_SuperLinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Link `
    ///
    pub fn LinkArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Link_LinkArea(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__Link `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Link, _arr.len) catch @panic("poppler__link.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__Link `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__Link_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
pub const poppler__linkgoto = struct {
    /// New constructs a new Poppler::LinkGoto object.
    ///
    /// ## Parameter(s):
    ///
    /// ` linkArea: QtC.QRectF `
    ///
    /// ` extFileName: []const u8 `
    ///
    /// ` destination: QtC.Poppler__LinkDestination `
    ///
    pub fn New(linkArea: ?*anyopaque, extFileName: []const u8, destination: ?*anyopaque) QtC.Poppler__LinkGoto {
        const extFileName_str = qtc.libqt_string{
            .len = extFileName.len,
            .data = extFileName.ptr,
        };

        return qtc.Poppler__LinkGoto_new(@ptrCast(linkArea), extFileName_str, @ptrCast(destination));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkGoto `
    ///
    pub fn IsExternal(self: ?*anyopaque) bool {
        return qtc.Poppler__LinkGoto_IsExternal(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkGoto `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkGoto_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkgoto.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkGoto `
    ///
    pub fn Destination(self: ?*anyopaque) QtC.Poppler__LinkDestination {
        return qtc.Poppler__LinkGoto_Destination(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkGoto `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkGoto_LinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__LinkGoto `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLinkType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LinkGoto_OnLinkType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLinkType` instead
    ///
    pub const QBaseLinkType = SuperLinkType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkGoto `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn SuperLinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkGoto_SuperLinkType(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkGoto `
    ///
    pub fn LinkArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Link_LinkArea(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkGoto `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Link, _arr.len) catch @panic("poppler__linkgoto.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__LinkGoto `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LinkGoto_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
pub const poppler__linkexecute = struct {
    /// New constructs a new Poppler::LinkExecute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` linkArea: QtC.QRectF `
    ///
    /// ` file: []const u8 `
    ///
    /// ` params: []const u8 `
    ///
    pub fn New(linkArea: ?*anyopaque, file: []const u8, params: []const u8) QtC.Poppler__LinkExecute {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        const params_str = qtc.libqt_string{
            .len = params.len,
            .data = params.ptr,
        };

        return qtc.Poppler__LinkExecute_new(@ptrCast(linkArea), file_str, params_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkExecute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkExecute_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkexecute.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkExecute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Parameters(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkExecute_Parameters(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkexecute.Parameters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkExecute `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkExecute_LinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__LinkExecute `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLinkType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LinkExecute_OnLinkType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLinkType` instead
    ///
    pub const QBaseLinkType = SuperLinkType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkExecute `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn SuperLinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkExecute_SuperLinkType(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkExecute `
    ///
    pub fn LinkArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Link_LinkArea(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkExecute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Link, _arr.len) catch @panic("poppler__linkexecute.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__LinkExecute `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LinkExecute_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
pub const poppler__linkbrowse = struct {
    /// New constructs a new Poppler::LinkBrowse object.
    ///
    /// ## Parameter(s):
    ///
    /// ` linkArea: QtC.QRectF `
    ///
    /// ` url: []const u8 `
    ///
    pub fn New(linkArea: ?*anyopaque, url: []const u8) QtC.Poppler__LinkBrowse {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };

        return qtc.Poppler__LinkBrowse_new(@ptrCast(linkArea), url_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkBrowse `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Url(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkBrowse_Url(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkbrowse.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkBrowse `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkBrowse_LinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__LinkBrowse `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLinkType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LinkBrowse_OnLinkType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLinkType` instead
    ///
    pub const QBaseLinkType = SuperLinkType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkBrowse `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn SuperLinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkBrowse_SuperLinkType(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkBrowse `
    ///
    pub fn LinkArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Link_LinkArea(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkBrowse `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Link, _arr.len) catch @panic("poppler__linkbrowse.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__LinkBrowse `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LinkBrowse_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
pub const poppler__linkaction = struct {
    /// New constructs a new Poppler::LinkAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` linkArea: QtC.QRectF `
    ///
    /// ` actionType: poppler_link_enums.ActionType `
    ///
    pub fn New(linkArea: ?*anyopaque, actionType: i32) QtC.Poppler__LinkAction {
        return qtc.Poppler__LinkAction_new(@ptrCast(linkArea), @bitCast(actionType));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAction `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.ActionType `
    ///
    pub fn ActionType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkAction_ActionType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAction `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkAction_LinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__LinkAction `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLinkType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LinkAction_OnLinkType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLinkType` instead
    ///
    pub const QBaseLinkType = SuperLinkType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAction `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn SuperLinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkAction_SuperLinkType(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAction `
    ///
    pub fn LinkArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Link_LinkArea(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Link, _arr.len) catch @panic("poppler__linkaction.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__LinkAction `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LinkAction_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
pub const poppler__linksound = struct {
    /// New constructs a new Poppler::LinkSound object.
    ///
    /// ## Parameter(s):
    ///
    /// ` linkArea: QtC.QRectF `
    ///
    /// ` volume: f64 `
    ///
    /// ` sync: bool `
    ///
    /// ` repeat: bool `
    ///
    /// ` mix: bool `
    ///
    /// ` sound: QtC.Poppler__SoundObject `
    ///
    pub fn New(linkArea: ?*anyopaque, volume: f64, sync: bool, repeat: bool, mix: bool, sound: ?*anyopaque) QtC.Poppler__LinkSound {
        return qtc.Poppler__LinkSound_new(@ptrCast(linkArea), @bitCast(volume), sync, repeat, mix, @ptrCast(sound));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSound `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkSound_LinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__LinkSound `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLinkType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LinkSound_OnLinkType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLinkType` instead
    ///
    pub const QBaseLinkType = SuperLinkType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSound `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn SuperLinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkSound_SuperLinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSound `
    ///
    pub fn Volume(self: ?*anyopaque) f64 {
        return qtc.Poppler__LinkSound_Volume(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSound `
    ///
    pub fn Synchronous(self: ?*anyopaque) bool {
        return qtc.Poppler__LinkSound_Synchronous(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSound `
    ///
    pub fn Repeat(self: ?*anyopaque) bool {
        return qtc.Poppler__LinkSound_Repeat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSound `
    ///
    pub fn Mix(self: ?*anyopaque) bool {
        return qtc.Poppler__LinkSound_Mix(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSound `
    ///
    pub fn Sound(self: ?*anyopaque) QtC.Poppler__SoundObject {
        return qtc.Poppler__LinkSound_Sound(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSound `
    ///
    pub fn LinkArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Link_LinkArea(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSound `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Link, _arr.len) catch @panic("poppler__linksound.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__LinkSound `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LinkSound_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
pub const poppler__linkrendition = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkRendition `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkRendition_LinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkRendition `
    ///
    pub fn Rendition(self: ?*anyopaque) QtC.Poppler__MediaRendition {
        return qtc.Poppler__LinkRendition_Rendition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkRendition `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.RenditionAction `
    ///
    pub fn Action(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkRendition_Action(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkRendition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Script(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkRendition_Script(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkrendition.Script: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkRendition `
    ///
    /// ` annotation: QtC.Poppler__ScreenAnnotation `
    ///
    pub fn IsReferencedAnnotation(self: ?*anyopaque, annotation: ?*anyopaque) bool {
        return qtc.Poppler__LinkRendition_IsReferencedAnnotation(@ptrCast(self), @ptrCast(annotation));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkRendition `
    ///
    pub fn LinkArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Link_LinkArea(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkRendition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Link, _arr.len) catch @panic("poppler__linkrendition.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__LinkRendition `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LinkRendition_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
pub const poppler__linkjavascript = struct {
    /// New constructs a new Poppler::LinkJavaScript object.
    ///
    /// ## Parameter(s):
    ///
    /// ` linkArea: QtC.QRectF `
    ///
    /// ` js: []const u8 `
    ///
    pub fn New(linkArea: ?*anyopaque, js: []const u8) QtC.Poppler__LinkJavaScript {
        const js_str = qtc.libqt_string{
            .len = js.len,
            .data = js.ptr,
        };

        return qtc.Poppler__LinkJavaScript_new(@ptrCast(linkArea), js_str);
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkJavaScript `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkJavaScript_LinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.Poppler__LinkJavaScript `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLinkType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LinkJavaScript_OnLinkType(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLinkType` instead
    ///
    pub const QBaseLinkType = SuperLinkType;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkJavaScript `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn SuperLinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkJavaScript_SuperLinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkJavaScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Script(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkJavaScript_Script(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkjavascript.Script: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkJavaScript `
    ///
    pub fn LinkArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Link_LinkArea(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkJavaScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Link, _arr.len) catch @panic("poppler__linkjavascript.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__LinkJavaScript `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LinkJavaScript_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
pub const poppler__linkmovie = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkMovie `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkMovie_LinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkMovie `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.Operation `
    ///
    pub fn Operation(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkMovie_Operation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkMovie `
    ///
    /// ` annotation: QtC.Poppler__MovieAnnotation `
    ///
    pub fn IsReferencedAnnotation(self: ?*anyopaque, annotation: ?*anyopaque) bool {
        return qtc.Poppler__LinkMovie_IsReferencedAnnotation(@ptrCast(self), @ptrCast(annotation));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkMovie `
    ///
    pub fn LinkArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Link_LinkArea(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkMovie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Link, _arr.len) catch @panic("poppler__linkmovie.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__LinkMovie `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LinkMovie_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)
pub const poppler__linkocgstate = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkOCGState `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkOCGState_LinkType(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkOCGState `
    ///
    pub fn LinkArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Link_LinkArea(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkOCGState `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Link, _arr.len) catch @panic("poppler__linkocgstate.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__LinkOCGState `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LinkOCGState_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
pub const poppler__linkhide = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkHide `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkHide_LinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkHide `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Targets(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Poppler__LinkHide_Targets(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("poppler__linkhide.Targets: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("poppler__linkhide.Targets: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkHide `
    ///
    pub fn IsShowAction(self: ?*anyopaque) bool {
        return qtc.Poppler__LinkHide_IsShowAction(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkHide `
    ///
    pub fn LinkArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Link_LinkArea(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkHide `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Link, _arr.len) catch @panic("poppler__linkhide.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__LinkHide `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LinkHide_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)
pub const poppler__linkresetform = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkResetForm `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkResetForm_LinkType(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkResetForm `
    ///
    pub fn LinkArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Link_LinkArea(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkResetForm `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Link, _arr.len) catch @panic("poppler__linkresetform.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__LinkResetForm `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LinkResetForm_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
pub const poppler__linksubmitform = struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSubmitForm `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkSubmitForm_LinkType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSubmitForm `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetFieldIds(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.Poppler__LinkSubmitForm_GetFieldIds(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("poppler__linksubmitform.GetFieldIds: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSubmitForm `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkSubmitForm_GetUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linksubmitform.GetUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSubmitForm `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_link_enums.SubmitFormFlag `
    ///
    pub fn GetFlags(self: ?*anyopaque) i32 {
        return qtc.Poppler__LinkSubmitForm_GetFlags(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSubmitForm `
    ///
    pub fn LinkArea(self: ?*anyopaque) QtC.QRectF {
        return qtc.Poppler__Link_LinkArea(@ptrCast(self));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__LinkSubmitForm `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Poppler__Link, _arr.len) catch @panic("poppler__linksubmitform.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Poppler__LinkSubmitForm `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__LinkSubmitForm_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
pub const enums = struct {
    pub const Kind = enum(i32) {
        pub const DestXYZ: i32 = 1;
        pub const DestFit: i32 = 2;
        pub const DestFitH: i32 = 3;
        pub const DestFitV: i32 = 4;
        pub const DestFitR: i32 = 5;
        pub const DestFitB: i32 = 6;
        pub const DestFitBH: i32 = 7;
        pub const DestFitBV: i32 = 8;
    };

    pub const LinkType = enum(i32) {
        pub const None: i32 = 0;
        pub const Goto: i32 = 1;
        pub const Execute: i32 = 2;
        pub const Browse: i32 = 3;
        pub const Action: i32 = 4;
        pub const Sound: i32 = 5;
        pub const Movie: i32 = 6;
        pub const Rendition: i32 = 7;
        pub const JavaScript: i32 = 8;
        pub const OCGState: i32 = 9;
        pub const Hide: i32 = 10;
        pub const ResetForm: i32 = 11;
        pub const SubmitForm: i32 = 12;
    };

    pub const ActionType = enum(i32) {
        pub const PageFirst: i32 = 1;
        pub const PagePrev: i32 = 2;
        pub const PageNext: i32 = 3;
        pub const PageLast: i32 = 4;
        pub const HistoryBack: i32 = 5;
        pub const HistoryForward: i32 = 6;
        pub const Quit: i32 = 7;
        pub const Presentation: i32 = 8;
        pub const EndPresentation: i32 = 9;
        pub const Find: i32 = 10;
        pub const GoToPage: i32 = 11;
        pub const Close: i32 = 12;
        pub const Print: i32 = 13;
        pub const SaveAs: i32 = 14;
    };

    pub const RenditionAction = enum(i32) {
        pub const NoRendition: i32 = 0;
        pub const PlayRendition: i32 = 1;
        pub const StopRendition: i32 = 2;
        pub const PauseRendition: i32 = 3;
        pub const ResumeRendition: i32 = 4;
    };

    pub const Operation = enum(i32) {
        pub const Play: i32 = 0;
        pub const Stop: i32 = 1;
        pub const Pause: i32 = 2;
        pub const Resume: i32 = 3;
    };

    pub const SubmitFormFlag = enum(i32) {
        pub const NoOpFlag: i32 = 0;
        pub const ExcludeFlag: i32 = 1;
        pub const IncludeNoValueFieldsFlag: i32 = 2;
        pub const ExportFormatFlag: i32 = 4;
        pub const GetMethodFlag: i32 = 8;
        pub const SubmitCoordinatesFlag: i32 = 16;
        pub const XFDFFlag: i32 = 32;
        pub const IncludeAppendSavesFlag: i32 = 64;
        pub const IncludeAnnotationsFlag: i32 = 128;
        pub const SubmitPDFFlag: i32 = 256;
        pub const CanonicalFormatFlag: i32 = 512;
        pub const ExclNonUserAnnotsFlag: i32 = 1024;
        pub const ExclFKeyFlag: i32 = 2048;
        pub const EmbedFormFlag: i32 = 8192;
    };
};
