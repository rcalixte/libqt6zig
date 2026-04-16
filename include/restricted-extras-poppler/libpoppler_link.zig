const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Poppler__MediaRendition = @import("libqt6").Poppler__MediaRendition;
const Poppler__MovieAnnotation = @import("libqt6").Poppler__MovieAnnotation;
const Poppler__ScreenAnnotation = @import("libqt6").Poppler__ScreenAnnotation;
const Poppler__SoundObject = @import("libqt6").Poppler__SoundObject;
const QRectF = @import("libqt6").QRectF;
const poppler_link_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
pub const Poppler__LinkDestination = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LinkDestination,

    pub const _is_Poppler__LinkDestination = {};

    /// New constructs a new Poppler::LinkDestination object.
    ///
    /// ## Parameter(s):
    ///
    /// ` description: []const u8 `
    ///
    pub fn New(description: []const u8) Poppler__LinkDestination {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        return .{ .ptr = qtc.Poppler__LinkDestination_new(description_str) };
    }

    /// New2 constructs a new Poppler::LinkDestination object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Poppler__LinkDestination `
    ///
    pub fn New2(other: anytype) Poppler__LinkDestination {
        comptime _ = @TypeOf(other)._is_Poppler__LinkDestination;
        return .{ .ptr = qtc.Poppler__LinkDestination_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkDestination `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.Kind `
    ///
    pub fn Kind(self: Poppler__LinkDestination) i32 {
        return qtc.Poppler__LinkDestination_Kind(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkDestination `
    ///
    pub fn PageNumber(self: Poppler__LinkDestination) i32 {
        return qtc.Poppler__LinkDestination_PageNumber(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkDestination `
    ///
    pub fn Left(self: Poppler__LinkDestination) f64 {
        return qtc.Poppler__LinkDestination_Left(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkDestination `
    ///
    pub fn Bottom(self: Poppler__LinkDestination) f64 {
        return qtc.Poppler__LinkDestination_Bottom(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkDestination `
    ///
    pub fn Right(self: Poppler__LinkDestination) f64 {
        return qtc.Poppler__LinkDestination_Right(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkDestination `
    ///
    pub fn Top(self: Poppler__LinkDestination) f64 {
        return qtc.Poppler__LinkDestination_Top(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkDestination `
    ///
    pub fn Zoom(self: Poppler__LinkDestination) f64 {
        return qtc.Poppler__LinkDestination_Zoom(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkDestination `
    ///
    pub fn IsChangeLeft(self: Poppler__LinkDestination) bool {
        return qtc.Poppler__LinkDestination_IsChangeLeft(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkDestination `
    ///
    pub fn IsChangeTop(self: Poppler__LinkDestination) bool {
        return qtc.Poppler__LinkDestination_IsChangeTop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkDestination `
    ///
    pub fn IsChangeZoom(self: Poppler__LinkDestination) bool {
        return qtc.Poppler__LinkDestination_IsChangeZoom(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkDestination `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: Poppler__LinkDestination, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkDestination_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkdestination.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkDestination `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DestinationName(self: Poppler__LinkDestination, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkDestination_DestinationName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkdestination.DestinationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkDestination.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkDestination `
    ///
    /// ` other: Poppler__LinkDestination `
    ///
    pub fn OperatorAssign(self: Poppler__LinkDestination, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Poppler__LinkDestination;
        qtc.Poppler__LinkDestination_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
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
    /// ` self: Poppler__LinkDestination `
    ///
    pub fn Delete(self: Poppler__LinkDestination) void {
        qtc.Poppler__LinkDestination_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
pub const Poppler__Link = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__Link,

    pub const _is_Poppler__Link = {};

    /// New constructs a new Poppler::Link object.
    ///
    /// ## Parameter(s):
    ///
    /// ` linkArea: QRectF `
    ///
    pub fn New(linkArea: anytype) Poppler__Link {
        comptime _ = @TypeOf(linkArea)._is_QRectF;
        return .{ .ptr = qtc.Poppler__Link_new(@ptrCast(linkArea.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Link `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: Poppler__Link) i32 {
        return qtc.Poppler__Link_LinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__Link `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLinkType(self: Poppler__Link, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__Link_OnLinkType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Poppler__Link `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn SuperLinkType(self: Poppler__Link) i32 {
        return qtc.Poppler__Link_SuperLinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Link `
    ///
    pub fn LinkArea(self: Poppler__Link) QRectF {
        return .{ .ptr = qtc.Poppler__Link_LinkArea(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Link.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__Link `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: Poppler__Link, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("poppler__link.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__Link `
    ///
    pub fn Delete(self: Poppler__Link) void {
        qtc.Poppler__Link_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
pub const Poppler__LinkGoto = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LinkGoto,

    pub const _is_Poppler__LinkGoto = {};
    pub const _is_Poppler__Link = {};

    /// New constructs a new Poppler::LinkGoto object.
    ///
    /// ## Parameter(s):
    ///
    /// ` linkArea: QRectF `
    ///
    /// ` extFileName: []const u8 `
    ///
    /// ` destination: Poppler__LinkDestination `
    ///
    pub fn New(linkArea: anytype, extFileName: []const u8, destination: anytype) Poppler__LinkGoto {
        comptime _ = @TypeOf(linkArea)._is_QRectF;
        const extFileName_str = qtc.libqt_string{
            .len = extFileName.len,
            .data = extFileName.ptr,
        };
        comptime _ = @TypeOf(destination)._is_Poppler__LinkDestination;
        return .{ .ptr = qtc.Poppler__LinkGoto_new(@ptrCast(linkArea.ptr), extFileName_str, @ptrCast(destination.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkGoto `
    ///
    pub fn IsExternal(self: Poppler__LinkGoto) bool {
        return qtc.Poppler__LinkGoto_IsExternal(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkGoto `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: Poppler__LinkGoto, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkGoto_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkgoto.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkGoto `
    ///
    pub fn Destination(self: Poppler__LinkGoto) Poppler__LinkDestination {
        return .{ .ptr = qtc.Poppler__LinkGoto_Destination(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkGoto `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: Poppler__LinkGoto) i32 {
        return qtc.Poppler__LinkGoto_LinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__LinkGoto `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLinkType(self: Poppler__LinkGoto, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LinkGoto_OnLinkType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Poppler__LinkGoto `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn SuperLinkType(self: Poppler__LinkGoto) i32 {
        return qtc.Poppler__LinkGoto_SuperLinkType(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkGoto `
    ///
    pub fn LinkArea(self: Poppler__LinkGoto) QRectF {
        return .{ .ptr = qtc.Poppler__Link_LinkArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkGoto.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkGoto `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: Poppler__LinkGoto, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("poppler__linkgoto.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__LinkGoto `
    ///
    pub fn Delete(self: Poppler__LinkGoto) void {
        qtc.Poppler__LinkGoto_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
pub const Poppler__LinkExecute = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LinkExecute,

    pub const _is_Poppler__LinkExecute = {};
    pub const _is_Poppler__Link = {};

    /// New constructs a new Poppler::LinkExecute object.
    ///
    /// ## Parameter(s):
    ///
    /// ` linkArea: QRectF `
    ///
    /// ` file: []const u8 `
    ///
    /// ` params: []const u8 `
    ///
    pub fn New(linkArea: anytype, file: []const u8, params: []const u8) Poppler__LinkExecute {
        comptime _ = @TypeOf(linkArea)._is_QRectF;
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        const params_str = qtc.libqt_string{
            .len = params.len,
            .data = params.ptr,
        };
        return .{ .ptr = qtc.Poppler__LinkExecute_new(@ptrCast(linkArea.ptr), file_str, params_str) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkExecute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: Poppler__LinkExecute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkExecute_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkexecute.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkExecute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Parameters(self: Poppler__LinkExecute, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkExecute_Parameters(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkexecute.Parameters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkExecute `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: Poppler__LinkExecute) i32 {
        return qtc.Poppler__LinkExecute_LinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__LinkExecute `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLinkType(self: Poppler__LinkExecute, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LinkExecute_OnLinkType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Poppler__LinkExecute `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn SuperLinkType(self: Poppler__LinkExecute) i32 {
        return qtc.Poppler__LinkExecute_SuperLinkType(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkExecute `
    ///
    pub fn LinkArea(self: Poppler__LinkExecute) QRectF {
        return .{ .ptr = qtc.Poppler__Link_LinkArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkExecute.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkExecute `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: Poppler__LinkExecute, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("poppler__linkexecute.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__LinkExecute `
    ///
    pub fn Delete(self: Poppler__LinkExecute) void {
        qtc.Poppler__LinkExecute_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
pub const Poppler__LinkBrowse = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LinkBrowse,

    pub const _is_Poppler__LinkBrowse = {};
    pub const _is_Poppler__Link = {};

    /// New constructs a new Poppler::LinkBrowse object.
    ///
    /// ## Parameter(s):
    ///
    /// ` linkArea: QRectF `
    ///
    /// ` url: []const u8 `
    ///
    pub fn New(linkArea: anytype, url: []const u8) Poppler__LinkBrowse {
        comptime _ = @TypeOf(linkArea)._is_QRectF;
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        return .{ .ptr = qtc.Poppler__LinkBrowse_new(@ptrCast(linkArea.ptr), url_str) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkBrowse `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Url(self: Poppler__LinkBrowse, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkBrowse_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkbrowse.Url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkBrowse `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: Poppler__LinkBrowse) i32 {
        return qtc.Poppler__LinkBrowse_LinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__LinkBrowse `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLinkType(self: Poppler__LinkBrowse, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LinkBrowse_OnLinkType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Poppler__LinkBrowse `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn SuperLinkType(self: Poppler__LinkBrowse) i32 {
        return qtc.Poppler__LinkBrowse_SuperLinkType(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkBrowse `
    ///
    pub fn LinkArea(self: Poppler__LinkBrowse) QRectF {
        return .{ .ptr = qtc.Poppler__Link_LinkArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkBrowse.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkBrowse `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: Poppler__LinkBrowse, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("poppler__linkbrowse.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__LinkBrowse `
    ///
    pub fn Delete(self: Poppler__LinkBrowse) void {
        qtc.Poppler__LinkBrowse_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
pub const Poppler__LinkAction = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LinkAction,

    pub const _is_Poppler__LinkAction = {};
    pub const _is_Poppler__Link = {};

    /// New constructs a new Poppler::LinkAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` linkArea: QRectF `
    ///
    /// ` actionType: poppler_link_enums.ActionType `
    ///
    pub fn New(linkArea: anytype, actionType: i32) Poppler__LinkAction {
        comptime _ = @TypeOf(linkArea)._is_QRectF;
        return .{ .ptr = qtc.Poppler__LinkAction_new(@ptrCast(linkArea.ptr), @bitCast(actionType)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAction `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.ActionType `
    ///
    pub fn ActionType(self: Poppler__LinkAction) i32 {
        return qtc.Poppler__LinkAction_ActionType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAction `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: Poppler__LinkAction) i32 {
        return qtc.Poppler__LinkAction_LinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__LinkAction `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLinkType(self: Poppler__LinkAction, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LinkAction_OnLinkType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Poppler__LinkAction `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn SuperLinkType(self: Poppler__LinkAction) i32 {
        return qtc.Poppler__LinkAction_SuperLinkType(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAction `
    ///
    pub fn LinkArea(self: Poppler__LinkAction) QRectF {
        return .{ .ptr = qtc.Poppler__Link_LinkArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: Poppler__LinkAction, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("poppler__linkaction.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__LinkAction `
    ///
    pub fn Delete(self: Poppler__LinkAction) void {
        qtc.Poppler__LinkAction_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
pub const Poppler__LinkSound = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LinkSound,

    pub const _is_Poppler__LinkSound = {};
    pub const _is_Poppler__Link = {};

    /// New constructs a new Poppler::LinkSound object.
    ///
    /// ## Parameter(s):
    ///
    /// ` linkArea: QRectF `
    ///
    /// ` volume: f64 `
    ///
    /// ` sync: bool `
    ///
    /// ` repeat: bool `
    ///
    /// ` mix: bool `
    ///
    /// ` sound: Poppler__SoundObject `
    ///
    pub fn New(linkArea: anytype, volume: f64, sync: bool, repeat: bool, mix: bool, sound: anytype) Poppler__LinkSound {
        comptime _ = @TypeOf(linkArea)._is_QRectF;
        comptime _ = @TypeOf(sound)._is_Poppler__SoundObject;
        return .{ .ptr = qtc.Poppler__LinkSound_new(@ptrCast(linkArea.ptr), @bitCast(volume), sync, repeat, mix, @ptrCast(sound.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkSound `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: Poppler__LinkSound) i32 {
        return qtc.Poppler__LinkSound_LinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__LinkSound `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLinkType(self: Poppler__LinkSound, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LinkSound_OnLinkType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Poppler__LinkSound `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn SuperLinkType(self: Poppler__LinkSound) i32 {
        return qtc.Poppler__LinkSound_SuperLinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkSound `
    ///
    pub fn Volume(self: Poppler__LinkSound) f64 {
        return qtc.Poppler__LinkSound_Volume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkSound `
    ///
    pub fn Synchronous(self: Poppler__LinkSound) bool {
        return qtc.Poppler__LinkSound_Synchronous(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkSound `
    ///
    pub fn Repeat(self: Poppler__LinkSound) bool {
        return qtc.Poppler__LinkSound_Repeat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkSound `
    ///
    pub fn Mix(self: Poppler__LinkSound) bool {
        return qtc.Poppler__LinkSound_Mix(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkSound `
    ///
    pub fn Sound(self: Poppler__LinkSound) Poppler__SoundObject {
        return .{ .ptr = qtc.Poppler__LinkSound_Sound(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkSound `
    ///
    pub fn LinkArea(self: Poppler__LinkSound) QRectF {
        return .{ .ptr = qtc.Poppler__Link_LinkArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSound.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkSound `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: Poppler__LinkSound, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("poppler__linksound.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__LinkSound `
    ///
    pub fn Delete(self: Poppler__LinkSound) void {
        qtc.Poppler__LinkSound_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
pub const Poppler__LinkRendition = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LinkRendition,

    pub const _is_Poppler__LinkRendition = {};
    pub const _is_Poppler__Link = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkRendition `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: Poppler__LinkRendition) i32 {
        return qtc.Poppler__LinkRendition_LinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkRendition `
    ///
    pub fn Rendition(self: Poppler__LinkRendition) Poppler__MediaRendition {
        return .{ .ptr = qtc.Poppler__LinkRendition_Rendition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkRendition `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.RenditionAction `
    ///
    pub fn Action(self: Poppler__LinkRendition) i32 {
        return qtc.Poppler__LinkRendition_Action(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkRendition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Script(self: Poppler__LinkRendition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkRendition_Script(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linkrendition.Script: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkRendition `
    ///
    /// ` annotation: Poppler__ScreenAnnotation `
    ///
    pub fn IsReferencedAnnotation(self: Poppler__LinkRendition, annotation: anytype) bool {
        comptime _ = @TypeOf(annotation)._is_Poppler__ScreenAnnotation;
        return qtc.Poppler__LinkRendition_IsReferencedAnnotation(@ptrCast(self.ptr), @ptrCast(annotation.ptr));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkRendition `
    ///
    pub fn LinkArea(self: Poppler__LinkRendition) QRectF {
        return .{ .ptr = qtc.Poppler__Link_LinkArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkRendition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkRendition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: Poppler__LinkRendition, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("poppler__linkrendition.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__LinkRendition `
    ///
    pub fn Delete(self: Poppler__LinkRendition) void {
        qtc.Poppler__LinkRendition_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
pub const Poppler__LinkJavaScript = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LinkJavaScript,

    pub const _is_Poppler__LinkJavaScript = {};
    pub const _is_Poppler__Link = {};

    /// New constructs a new Poppler::LinkJavaScript object.
    ///
    /// ## Parameter(s):
    ///
    /// ` linkArea: QRectF `
    ///
    /// ` js: []const u8 `
    ///
    pub fn New(linkArea: anytype, js: []const u8) Poppler__LinkJavaScript {
        comptime _ = @TypeOf(linkArea)._is_QRectF;
        const js_str = qtc.libqt_string{
            .len = js.len,
            .data = js.ptr,
        };
        return .{ .ptr = qtc.Poppler__LinkJavaScript_new(@ptrCast(linkArea.ptr), js_str) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkJavaScript `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: Poppler__LinkJavaScript) i32 {
        return qtc.Poppler__LinkJavaScript_LinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Poppler__LinkJavaScript `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnLinkType(self: Poppler__LinkJavaScript, callback: *const fn () callconv(.c) i32) void {
        qtc.Poppler__LinkJavaScript_OnLinkType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Poppler__LinkJavaScript `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn SuperLinkType(self: Poppler__LinkJavaScript) i32 {
        return qtc.Poppler__LinkJavaScript_SuperLinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkJavaScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Script(self: Poppler__LinkJavaScript, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkJavaScript_Script(@ptrCast(self.ptr));
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
    /// ` self: Poppler__LinkJavaScript `
    ///
    pub fn LinkArea(self: Poppler__LinkJavaScript) QRectF {
        return .{ .ptr = qtc.Poppler__Link_LinkArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkJavaScript.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkJavaScript `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: Poppler__LinkJavaScript, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("poppler__linkjavascript.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__LinkJavaScript `
    ///
    pub fn Delete(self: Poppler__LinkJavaScript) void {
        qtc.Poppler__LinkJavaScript_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
pub const Poppler__LinkMovie = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LinkMovie,

    pub const _is_Poppler__LinkMovie = {};
    pub const _is_Poppler__Link = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkMovie `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: Poppler__LinkMovie) i32 {
        return qtc.Poppler__LinkMovie_LinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkMovie `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.Operation `
    ///
    pub fn Operation(self: Poppler__LinkMovie) i32 {
        return qtc.Poppler__LinkMovie_Operation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkMovie `
    ///
    /// ` annotation: Poppler__MovieAnnotation `
    ///
    pub fn IsReferencedAnnotation(self: Poppler__LinkMovie, annotation: anytype) bool {
        comptime _ = @TypeOf(annotation)._is_Poppler__MovieAnnotation;
        return qtc.Poppler__LinkMovie_IsReferencedAnnotation(@ptrCast(self.ptr), @ptrCast(annotation.ptr));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkMovie `
    ///
    pub fn LinkArea(self: Poppler__LinkMovie) QRectF {
        return .{ .ptr = qtc.Poppler__Link_LinkArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkMovie.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkMovie `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: Poppler__LinkMovie, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("poppler__linkmovie.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__LinkMovie `
    ///
    pub fn Delete(self: Poppler__LinkMovie) void {
        qtc.Poppler__LinkMovie_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)
pub const Poppler__LinkOCGState = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LinkOCGState,

    pub const _is_Poppler__LinkOCGState = {};
    pub const _is_Poppler__Link = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkOCGState `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: Poppler__LinkOCGState) i32 {
        return qtc.Poppler__LinkOCGState_LinkType(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkOCGState `
    ///
    pub fn LinkArea(self: Poppler__LinkOCGState) QRectF {
        return .{ .ptr = qtc.Poppler__Link_LinkArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkOCGState.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkOCGState `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: Poppler__LinkOCGState, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("poppler__linkocgstate.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__LinkOCGState `
    ///
    pub fn Delete(self: Poppler__LinkOCGState) void {
        qtc.Poppler__LinkOCGState_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
pub const Poppler__LinkHide = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LinkHide,

    pub const _is_Poppler__LinkHide = {};
    pub const _is_Poppler__Link = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkHide `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: Poppler__LinkHide) i32 {
        return qtc.Poppler__LinkHide_LinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkHide `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Targets(self: Poppler__LinkHide, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Poppler__LinkHide_Targets(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: Poppler__LinkHide `
    ///
    pub fn IsShowAction(self: Poppler__LinkHide) bool {
        return qtc.Poppler__LinkHide_IsShowAction(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkHide `
    ///
    pub fn LinkArea(self: Poppler__LinkHide) QRectF {
        return .{ .ptr = qtc.Poppler__Link_LinkArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkHide.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkHide `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: Poppler__LinkHide, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("poppler__linkhide.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__LinkHide `
    ///
    pub fn Delete(self: Poppler__LinkHide) void {
        qtc.Poppler__LinkHide_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)
pub const Poppler__LinkResetForm = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LinkResetForm,

    pub const _is_Poppler__LinkResetForm = {};
    pub const _is_Poppler__Link = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkResetForm `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: Poppler__LinkResetForm) i32 {
        return qtc.Poppler__LinkResetForm_LinkType(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkResetForm `
    ///
    pub fn LinkArea(self: Poppler__LinkResetForm) QRectF {
        return .{ .ptr = qtc.Poppler__Link_LinkArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkResetForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkResetForm `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: Poppler__LinkResetForm, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("poppler__linkresetform.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__LinkResetForm `
    ///
    pub fn Delete(self: Poppler__LinkResetForm) void {
        qtc.Poppler__LinkResetForm_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
pub const Poppler__LinkSubmitForm = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__LinkSubmitForm,

    pub const _is_Poppler__LinkSubmitForm = {};
    pub const _is_Poppler__Link = {};

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkSubmitForm `
    ///
    /// ## Returns:
    ///
    /// ` poppler_link_enums.LinkType `
    ///
    pub fn LinkType(self: Poppler__LinkSubmitForm) i32 {
        return qtc.Poppler__LinkSubmitForm_LinkType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkSubmitForm `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetFieldIds(self: Poppler__LinkSubmitForm, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.Poppler__LinkSubmitForm_GetFieldIds(@ptrCast(self.ptr));
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
    /// ` self: Poppler__LinkSubmitForm `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetUrl(self: Poppler__LinkSubmitForm, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Poppler__LinkSubmitForm_GetUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("poppler__linksubmitform.GetUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkSubmitForm `
    ///
    /// ## Returns:
    ///
    /// ` flag of poppler_link_enums.SubmitFormFlag `
    ///
    pub fn GetFlags(self: Poppler__LinkSubmitForm) i32 {
        return qtc.Poppler__LinkSubmitForm_GetFlags(@ptrCast(self.ptr));
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkSubmitForm `
    ///
    pub fn LinkArea(self: Poppler__LinkSubmitForm) QRectF {
        return .{ .ptr = qtc.Poppler__Link_LinkArea(@ptrCast(self.ptr)) };
    }

    /// Inherited from Poppler::Link
    ///
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkSubmitForm.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__LinkSubmitForm `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextLinks(self: Poppler__LinkSubmitForm, allocator: std.mem.Allocator) []Poppler__Link {
        const _arr: qtc.libqt_list = qtc.Poppler__Link_NextLinks(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Poppler__Link, _arr.len) catch @panic("poppler__linksubmitform.NextLinks: Memory allocation failed");
        const _data: [*]QtC.Poppler__Link = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    /// ` self: Poppler__LinkSubmitForm `
    ///
    pub fn Delete(self: Poppler__LinkSubmitForm) void {
        qtc.Poppler__LinkSubmitForm_Delete(@ptrCast(self.ptr));
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
