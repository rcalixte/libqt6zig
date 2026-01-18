const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html)
pub const qdesignerwidgetdatabaseiteminterface = struct {
    /// New constructs a new QDesignerWidgetDataBaseItemInterface object.
    ///
    pub fn New() QtC.QDesignerWidgetDataBaseItemInterface {
        return qtc.QDesignerWidgetDataBaseItemInterface_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseiteminterface.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#name)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#name)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_QBaseName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseiteminterface.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseItemInterface, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn QBaseSetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_QBaseSetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_Group(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseiteminterface.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#group)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnGroup(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnGroup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#group)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseGroup(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_QBaseGroup(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseiteminterface.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` group: []const u8 `
    ///
    pub fn SetGroup(self: ?*anyopaque, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetGroup(@ptrCast(self), group_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseItemInterface, group: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetGroup(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetGroup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setGroup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` group: []const u8 `
    ///
    pub fn QBaseSetGroup(self: ?*anyopaque, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_QBaseSetGroup(@ptrCast(self), group_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseiteminterface.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#toolTip)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnToolTip(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnToolTip(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#toolTip)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_QBaseToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseiteminterface.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setToolTip)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseItemInterface, toolTip: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetToolTip(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetToolTip(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setToolTip)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn QBaseSetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_QBaseSetToolTip(@ptrCast(self), toolTip_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseiteminterface.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#whatsThis)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnWhatsThis(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnWhatsThis(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#whatsThis)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseWhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_QBaseWhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseiteminterface.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setWhatsThis)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseItemInterface, whatsThis: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetWhatsThis(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetWhatsThis(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setWhatsThis)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn QBaseSetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_QBaseSetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#includeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IncludeFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_IncludeFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseiteminterface.IncludeFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#includeFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnIncludeFile(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnIncludeFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#includeFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseIncludeFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_QBaseIncludeFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseiteminterface.IncludeFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIncludeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` includeFile: []const u8 `
    ///
    pub fn SetIncludeFile(self: ?*anyopaque, includeFile: []const u8) void {
        const includeFile_str = qtc.libqt_string{
            .len = includeFile.len,
            .data = includeFile.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetIncludeFile(@ptrCast(self), includeFile_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIncludeFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseItemInterface, includeFile: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetIncludeFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetIncludeFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIncludeFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` includeFile: []const u8 `
    ///
    pub fn QBaseSetIncludeFile(self: ?*anyopaque, includeFile: []const u8) void {
        const includeFile_str = qtc.libqt_string{
            .len = includeFile.len,
            .data = includeFile.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_QBaseSetIncludeFile(@ptrCast(self), includeFile_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QDesignerWidgetDataBaseItemInterface_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#icon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QIcon `
    ///
    pub fn OnIcon(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QIcon) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnIcon(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#icon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn QBaseIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QDesignerWidgetDataBaseItemInterface_QBaseIcon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseItemInterface_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIcon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseItemInterface, icon: QtC.QIcon) callconv(.c) void `
    ///
    pub fn OnSetIcon(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetIcon(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setIcon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` icon: QtC.QIcon `
    ///
    pub fn QBaseSetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseItemInterface_QBaseSetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCompat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn IsCompat(self: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_IsCompat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCompat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsCompat(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnIsCompat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCompat)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn QBaseIsCompat(self: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_QBaseIsCompat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCompat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` compat: bool `
    ///
    pub fn SetCompat(self: ?*anyopaque, compat: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_SetCompat(@ptrCast(self), compat);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCompat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseItemInterface, compat: bool) callconv(.c) void `
    ///
    pub fn OnSetCompat(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetCompat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCompat)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` compat: bool `
    ///
    pub fn QBaseSetCompat(self: ?*anyopaque, compat: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_QBaseSetCompat(@ptrCast(self), compat);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn IsContainer(self: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_IsContainer(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isContainer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsContainer(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnIsContainer(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isContainer)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn QBaseIsContainer(self: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_QBaseIsContainer(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` container: bool `
    ///
    pub fn SetContainer(self: ?*anyopaque, container: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_SetContainer(@ptrCast(self), container);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setContainer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseItemInterface, container: bool) callconv(.c) void `
    ///
    pub fn OnSetContainer(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetContainer(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setContainer)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` container: bool `
    ///
    pub fn QBaseSetContainer(self: ?*anyopaque, container: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_QBaseSetContainer(@ptrCast(self), container);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCustom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn IsCustom(self: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_IsCustom(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCustom)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsCustom(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnIsCustom(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isCustom)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn QBaseIsCustom(self: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_QBaseIsCustom(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCustom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` custom: bool `
    ///
    pub fn SetCustom(self: ?*anyopaque, custom: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_SetCustom(@ptrCast(self), custom);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCustom)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseItemInterface, custom: bool) callconv(.c) void `
    ///
    pub fn OnSetCustom(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetCustom(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setCustom)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` custom: bool `
    ///
    pub fn QBaseSetCustom(self: ?*anyopaque, custom: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_QBaseSetCustom(@ptrCast(self), custom);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#pluginPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PluginPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_PluginPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseiteminterface.PluginPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#pluginPath)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnPluginPath(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnPluginPath(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#pluginPath)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBasePluginPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_QBasePluginPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseiteminterface.PluginPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPluginPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetPluginPath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetPluginPath(@ptrCast(self), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPluginPath)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseItemInterface, path: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetPluginPath(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetPluginPath(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPluginPath)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` path: []const u8 `
    ///
    pub fn QBaseSetPluginPath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_QBaseSetPluginPath(@ptrCast(self), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isPromoted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn IsPromoted(self: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_IsPromoted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isPromoted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsPromoted(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnIsPromoted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#isPromoted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn QBaseIsPromoted(self: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseItemInterface_QBaseIsPromoted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPromoted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` b: bool `
    ///
    pub fn SetPromoted(self: ?*anyopaque, b: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_SetPromoted(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPromoted)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseItemInterface, b: bool) callconv(.c) void `
    ///
    pub fn OnSetPromoted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetPromoted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setPromoted)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` b: bool `
    ///
    pub fn QBaseSetPromoted(self: ?*anyopaque, b: bool) void {
        qtc.QDesignerWidgetDataBaseItemInterface_QBaseSetPromoted(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#extends)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Extends(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_Extends(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseiteminterface.Extends: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#extends)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnExtends(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnExtends(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#extends)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseExtends(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerWidgetDataBaseItemInterface_QBaseExtends(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseiteminterface.Extends: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setExtends)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` s: []const u8 `
    ///
    pub fn SetExtends(self: ?*anyopaque, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetExtends(@ptrCast(self), s_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setExtends)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseItemInterface, s: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetExtends(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetExtends(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setExtends)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` s: []const u8 `
    ///
    pub fn QBaseSetExtends(self: ?*anyopaque, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QDesignerWidgetDataBaseItemInterface_QBaseSetExtends(@ptrCast(self), s_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setDefaultPropertyValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` list: []QtC.QVariant `
    ///
    pub fn SetDefaultPropertyValues(self: ?*anyopaque, list: []QtC.QVariant) void {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        qtc.QDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues(@ptrCast(self), list_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setDefaultPropertyValues)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseItemInterface, list: [*]QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetDefaultPropertyValues(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QVariant) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnSetDefaultPropertyValues(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#setDefaultPropertyValues)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` list: []QtC.QVariant `
    ///
    pub fn QBaseSetDefaultPropertyValues(self: ?*anyopaque, list: []QtC.QVariant) void {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        qtc.QDesignerWidgetDataBaseItemInterface_QBaseSetDefaultPropertyValues(@ptrCast(self), list_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#defaultPropertyValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultPropertyValues(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QVariant {
        const _arr: qtc.libqt_list = qtc.QDesignerWidgetDataBaseItemInterface_DefaultPropertyValues(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QVariant, _arr.len) catch @panic("qdesignerwidgetdatabaseiteminterface.DefaultPropertyValues: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#defaultPropertyValues)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:null]QtC.QVariant `
    ///
    pub fn OnDefaultPropertyValues(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:null]QtC.QVariant) void {
        qtc.QDesignerWidgetDataBaseItemInterface_OnDefaultPropertyValues(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#defaultPropertyValues)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseDefaultPropertyValues(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QVariant {
        const _arr: qtc.libqt_list = qtc.QDesignerWidgetDataBaseItemInterface_QBaseDefaultPropertyValues(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QVariant, _arr.len) catch @panic("qdesignerwidgetdatabaseiteminterface.DefaultPropertyValues: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseiteminterface.html#dtor.QDesignerWidgetDataBaseItemInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseItemInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html)
pub const qdesignerwidgetdatabaseinterface = struct {
    /// New constructs a new QDesignerWidgetDataBaseInterface object.
    ///
    pub fn New() QtC.QDesignerWidgetDataBaseInterface {
        return qtc.QDesignerWidgetDataBaseInterface_new();
    }

    /// New2 constructs a new QDesignerWidgetDataBaseInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QDesignerWidgetDataBaseInterface {
        return qtc.QDesignerWidgetDataBaseInterface_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QDesignerWidgetDataBaseInterface_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerWidgetDataBaseInterface_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerWidgetDataBaseInterface_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseinterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerWidgetDataBaseInterface_OnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_QBaseCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn Item(self: ?*anyopaque, index: i32) QtC.QDesignerWidgetDataBaseItemInterface {
        return qtc.QDesignerWidgetDataBaseInterface_Item(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#item)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, index: i32) callconv(.c) QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn OnItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QDesignerWidgetDataBaseItemInterface) void {
        qtc.QDesignerWidgetDataBaseInterface_OnItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#item)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn QBaseItem(self: ?*anyopaque, index: i32) QtC.QDesignerWidgetDataBaseItemInterface {
        return qtc.QDesignerWidgetDataBaseInterface_QBaseItem(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` item: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn IndexOf(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_IndexOf(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, item: QtC.QDesignerWidgetDataBaseItemInterface) callconv(.c) i32 `
    ///
    pub fn OnIndexOf(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerWidgetDataBaseInterface_OnIndexOf(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` item: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn QBaseIndexOf(self: ?*anyopaque, item: ?*anyopaque) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_QBaseIndexOf(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` index: i32 `
    ///
    /// ` item: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn Insert(self: ?*anyopaque, index: i32, item: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_Insert(@ptrCast(self), @intCast(index), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#insert)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, index: i32, item: QtC.QDesignerWidgetDataBaseItemInterface) callconv(.c) void `
    ///
    pub fn OnInsert(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_OnInsert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#insert)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` index: i32 `
    ///
    /// ` item: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn QBaseInsert(self: ?*anyopaque, index: i32, item: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_QBaseInsert(@ptrCast(self), @intCast(index), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` item: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn Append(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_Append(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#append)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, item: QtC.QDesignerWidgetDataBaseItemInterface) callconv(.c) void `
    ///
    pub fn OnAppend(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_OnAppend(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#append)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` item: QtC.QDesignerWidgetDataBaseItemInterface `
    ///
    pub fn QBaseAppend(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_QBaseAppend(@ptrCast(self), @ptrCast(item));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` resolveName: bool `
    ///
    pub fn IndexOfObject(self: ?*anyopaque, object: ?*anyopaque, resolveName: bool) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_IndexOfObject(@ptrCast(self), @ptrCast(object), resolveName);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, object: QtC.QObject, resolveName: bool) callconv(.c) i32 `
    ///
    pub fn OnIndexOfObject(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) i32) void {
        qtc.QDesignerWidgetDataBaseInterface_OnIndexOfObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` resolveName: bool `
    ///
    pub fn QBaseIndexOfObject(self: ?*anyopaque, object: ?*anyopaque, resolveName: bool) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_QBaseIndexOfObject(@ptrCast(self), @ptrCast(object), resolveName);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfClassName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` className: []const u8 `
    ///
    /// ` resolveName: bool `
    ///
    pub fn IndexOfClassName(self: ?*anyopaque, className: []const u8, resolveName: bool) i32 {
        const className_str = qtc.libqt_string{
            .len = className.len,
            .data = className.ptr,
        };
        return qtc.QDesignerWidgetDataBaseInterface_IndexOfClassName(@ptrCast(self), className_str, resolveName);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfClassName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, className: [*:0]const u8, resolveName: bool) callconv(.c) i32 `
    ///
    pub fn OnIndexOfClassName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, bool) callconv(.c) i32) void {
        qtc.QDesignerWidgetDataBaseInterface_OnIndexOfClassName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#indexOfClassName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` className: []const u8 `
    ///
    /// ` resolveName: bool `
    ///
    pub fn QBaseIndexOfClassName(self: ?*anyopaque, className: []const u8, resolveName: bool) i32 {
        const className_str = qtc.libqt_string{
            .len = className.len,
            .data = className.ptr,
        };
        return qtc.QDesignerWidgetDataBaseInterface_QBaseIndexOfClassName(@ptrCast(self), className_str, resolveName);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn Core(self: ?*anyopaque) QtC.QDesignerFormEditorInterface {
        return qtc.QDesignerWidgetDataBaseInterface_Core(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#core)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QDesignerFormEditorInterface `
    ///
    pub fn OnCore(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QDesignerFormEditorInterface) void {
        qtc.QDesignerWidgetDataBaseInterface_OnCore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#core)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn QBaseCore(self: ?*anyopaque) QtC.QDesignerFormEditorInterface {
        return qtc.QDesignerWidgetDataBaseInterface_QBaseCore(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` object: QtC.QObject `
    ///
    pub fn IsContainer(self: ?*anyopaque, object: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseInterface_IsContainer(@ptrCast(self), @ptrCast(object));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isCustom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` object: QtC.QObject `
    ///
    pub fn IsCustom(self: ?*anyopaque, object: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseInterface_IsCustom(@ptrCast(self), @ptrCast(object));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn Changed(self: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_Changed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface) callconv(.c) void `
    ///
    pub fn OnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_Connect_Changed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseinterface.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseinterface.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` resolveName: bool `
    ///
    pub fn IsContainer2(self: ?*anyopaque, object: ?*anyopaque, resolveName: bool) bool {
        return qtc.QDesignerWidgetDataBaseInterface_IsContainer2(@ptrCast(self), @ptrCast(object), resolveName);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#isCustom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` resolveName: bool `
    ///
    pub fn IsCustom2(self: ?*anyopaque, object: ?*anyopaque, resolveName: bool) bool {
        return qtc.QDesignerWidgetDataBaseInterface_IsCustom2(@ptrCast(self), @ptrCast(object), resolveName);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerwidgetdatabaseinterface.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qdesignerwidgetdatabaseinterface.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdesignerwidgetdatabaseinterface.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignerwidgetdatabaseinterface.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` thread: QtC.QThread `
    ///
    /// ` param2: QtC.Disambiguated_t `
    ///
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseInterface_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseInterface_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerWidgetDataBaseInterface_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseInterface_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseInterface_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerWidgetDataBaseInterface_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerWidgetDataBaseInterface_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDesignerWidgetDataBaseInterface_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDesignerWidgetDataBaseInterface_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QDesignerWidgetDataBaseInterface_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerWidgetDataBaseInterface_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerWidgetDataBaseInterface_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerWidgetDataBaseInterface_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerWidgetDataBaseInterface_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerWidgetDataBaseInterface_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseInterface_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDesignerWidgetDataBaseInterface_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerWidgetDataBaseInterface_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerWidgetDataBaseInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetdatabaseinterface.html#dtor.QDesignerWidgetDataBaseInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerWidgetDataBaseInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerWidgetDataBaseInterface_Delete(@ptrCast(self));
    }
};
