const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html)
pub const Kirigami__Platform__StyleSelector = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Kirigami__Platform__StyleSelector,

    pub const _is_Kirigami__Platform__StyleSelector = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Kirigami::Platform::StyleSelector object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Kirigami__Platform__StyleSelector `
    ///
    pub fn new(other: anytype) Kirigami__Platform__StyleSelector {
        comptime _ = @TypeOf(other)._is_Kirigami__Platform__StyleSelector;
        return .{ .ptr = qtc.Kirigami__Platform__StyleSelector_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Kirigami::Platform::StyleSelector object and invalidate the source Kirigami::Platform::StyleSelector object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Kirigami__Platform__StyleSelector `
    ///
    pub fn new2(other: anytype) Kirigami__Platform__StyleSelector {
        comptime _ = @TypeOf(other)._is_Kirigami__Platform__StyleSelector;
        return .{ .ptr = qtc.Kirigami__Platform__StyleSelector_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__StyleSelector `
    ///
    /// ` other: Kirigami__Platform__StyleSelector `
    ///
    pub fn copyAssign(self: Kirigami__Platform__StyleSelector, other: Kirigami__Platform__StyleSelector) void {
        qtc.Kirigami__Platform__StyleSelector_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__StyleSelector `
    ///
    /// ` other: Kirigami__Platform__StyleSelector `
    ///
    pub fn moveAssign(self: Kirigami__Platform__StyleSelector, other: Kirigami__Platform__StyleSelector) void {
        qtc.Kirigami__Platform__StyleSelector_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn style(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Kirigami__Platform__StyleSelector_Style();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__StyleSelector.style: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `styleChain` instead
    ///
    pub const StyleChain = styleChain;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html#styleChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleChain(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Kirigami__Platform__StyleSelector_StyleChain();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Kirigami__Platform__StyleSelector.styleChain: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Kirigami__Platform__StyleSelector.styleChain: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `componentUrl` instead
    ///
    pub const ComponentUrl = componentUrl;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html#componentUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn componentUrl(fileName: []const u8) QUrl {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.Kirigami__Platform__StyleSelector_ComponentUrl(fileName_str) };
    }

    /// ### DEPRECATED: Use `setBaseUrl` instead
    ///
    pub const SetBaseUrl = setBaseUrl;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html#setBaseUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` baseUrl: QUrl `
    ///
    pub fn setBaseUrl(baseUrl: anytype) void {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        qtc.Kirigami__Platform__StyleSelector_SetBaseUrl(@ptrCast(baseUrl.ptr));
    }

    /// ### DEPRECATED: Use `resolveFilePath` instead
    ///
    pub const ResolveFilePath = resolveFilePath;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html#resolveFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    pub fn resolveFilePath(allocator: std.mem.Allocator, path: []const u8) []const u8 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        var _str = qtc.Kirigami__Platform__StyleSelector_ResolveFilePath(path_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__StyleSelector.resolveFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `resolveFileUrl` instead
    ///
    pub const ResolveFileUrl = resolveFileUrl;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-styleselector.html#resolveFileUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` path: []const u8 `
    ///
    pub fn resolveFileUrl(allocator: std.mem.Allocator, path: []const u8) []const u8 {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        var _str = qtc.Kirigami__Platform__StyleSelector_ResolveFileUrl(path_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__StyleSelector.resolveFileUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Kirigami__Platform__StyleSelector `
    ///
    pub fn delete(self: Kirigami__Platform__StyleSelector) void {
        qtc.Kirigami__Platform__StyleSelector_Delete(@ptrCast(self.ptr));
    }
};
