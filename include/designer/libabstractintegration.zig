const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const abstractintegration_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html)
pub const qdesignerintegrationinterface = struct {
    /// New constructs a new QDesignerIntegrationInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    pub fn New(core: ?*anyopaque) QtC.QDesignerIntegrationInterface {
        return qtc.QDesignerIntegrationInterface_new(@ptrCast(core));
    }

    /// New2 constructs a new QDesignerIntegrationInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(core: ?*anyopaque, parent: ?*anyopaque) QtC.QDesignerIntegrationInterface {
        return qtc.QDesignerIntegrationInterface_new2(@ptrCast(core), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QDesignerIntegrationInterface_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QDesignerIntegrationInterface_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QDesignerIntegrationInterface_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerIntegrationInterface_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerIntegrationInterface_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerIntegrationInterface_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerIntegrationInterface_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegrationinterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn Core(self: ?*anyopaque) QtC.QDesignerFormEditorInterface {
        return qtc.QDesignerIntegrationInterface_Core(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#containerWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn ContainerWindow(self: ?*anyopaque, widget: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerIntegrationInterface_ContainerWindow(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#containerWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, widget: QtC.QWidget) callconv(.c) QtC.QWidget `
    ///
    pub fn OnContainerWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QDesignerIntegrationInterface_OnContainerWindow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#containerWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn QBaseContainerWindow(self: ?*anyopaque, widget: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerIntegrationInterface_QBaseContainerWindow(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#createResourceBrowser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn CreateResourceBrowser(self: ?*anyopaque, parent: ?*anyopaque) QtC.QDesignerResourceBrowserInterface {
        return qtc.QDesignerIntegrationInterface_CreateResourceBrowser(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#createResourceBrowser)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, parent: QtC.QWidget) callconv(.c) QtC.QDesignerResourceBrowserInterface `
    ///
    pub fn OnCreateResourceBrowser(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QDesignerResourceBrowserInterface) void {
        qtc.QDesignerIntegrationInterface_OnCreateResourceBrowser(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#createResourceBrowser)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn QBaseCreateResourceBrowser(self: ?*anyopaque, parent: ?*anyopaque) QtC.QDesignerResourceBrowserInterface {
        return qtc.QDesignerIntegrationInterface_QBaseCreateResourceBrowser(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#headerSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HeaderSuffix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegrationInterface_HeaderSuffix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegrationinterface.HeaderSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#headerSuffix)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnHeaderSuffix(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerIntegrationInterface_OnHeaderSuffix(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#headerSuffix)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseHeaderSuffix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegrationInterface_QBaseHeaderSuffix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegrationinterface.HeaderSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` headerSuffix: []const u8 `
    ///
    pub fn SetHeaderSuffix(self: ?*anyopaque, headerSuffix: []const u8) void {
        const headerSuffix_str = qtc.libqt_string{
            .len = headerSuffix.len,
            .data = headerSuffix.ptr,
        };
        qtc.QDesignerIntegrationInterface_SetHeaderSuffix(@ptrCast(self), headerSuffix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderSuffix)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, headerSuffix: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetHeaderSuffix(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetHeaderSuffix(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderSuffix)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` headerSuffix: []const u8 `
    ///
    pub fn QBaseSetHeaderSuffix(self: ?*anyopaque, headerSuffix: []const u8) void {
        const headerSuffix_str = qtc.libqt_string{
            .len = headerSuffix.len,
            .data = headerSuffix.ptr,
        };
        qtc.QDesignerIntegrationInterface_QBaseSetHeaderSuffix(@ptrCast(self), headerSuffix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#isHeaderLowercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn IsHeaderLowercase(self: ?*anyopaque) bool {
        return qtc.QDesignerIntegrationInterface_IsHeaderLowercase(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#isHeaderLowercase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsHeaderLowercase(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerIntegrationInterface_OnIsHeaderLowercase(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#isHeaderLowercase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn QBaseIsHeaderLowercase(self: ?*anyopaque) bool {
        return qtc.QDesignerIntegrationInterface_QBaseIsHeaderLowercase(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderLowercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` headerLowerCase: bool `
    ///
    pub fn SetHeaderLowercase(self: ?*anyopaque, headerLowerCase: bool) void {
        qtc.QDesignerIntegrationInterface_SetHeaderLowercase(@ptrCast(self), headerLowerCase);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderLowercase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, headerLowerCase: bool) callconv(.c) void `
    ///
    pub fn OnSetHeaderLowercase(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetHeaderLowercase(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderLowercase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` headerLowerCase: bool `
    ///
    pub fn QBaseSetHeaderLowercase(self: ?*anyopaque, headerLowerCase: bool) void {
        qtc.QDesignerIntegrationInterface_QBaseSetHeaderLowercase(@ptrCast(self), headerLowerCase);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#features)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ## Returns:
    ///
    /// ` flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn Features(self: ?*anyopaque) i32 {
        return qtc.QDesignerIntegrationInterface_Features(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#features)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFeatures(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnFeatures(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#features)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ## Returns:
    ///
    /// ` flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn QBaseFeatures(self: ?*anyopaque) i32 {
        return qtc.QDesignerIntegrationInterface_QBaseFeatures(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#hasFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn HasFeature(self: ?*anyopaque, f: i32) bool {
        return qtc.QDesignerIntegrationInterface_HasFeature(@ptrCast(self), @intCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resourceFileWatcherBehaviour)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ## Returns:
    ///
    /// ` abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn ResourceFileWatcherBehaviour(self: ?*anyopaque) i32 {
        return qtc.QDesignerIntegrationInterface_ResourceFileWatcherBehaviour(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resourceFileWatcherBehaviour)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnResourceFileWatcherBehaviour(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnResourceFileWatcherBehaviour(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resourceFileWatcherBehaviour)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ## Returns:
    ///
    /// ` abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn QBaseResourceFileWatcherBehaviour(self: ?*anyopaque) i32 {
        return qtc.QDesignerIntegrationInterface_QBaseResourceFileWatcherBehaviour(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setResourceFileWatcherBehaviour)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` behaviour: abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn SetResourceFileWatcherBehaviour(self: ?*anyopaque, behaviour: i32) void {
        qtc.QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour(@ptrCast(self), @intCast(behaviour));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setResourceFileWatcherBehaviour)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, behaviour: abstractintegration_enums.ResourceFileWatcherBehaviour) callconv(.c) void `
    ///
    pub fn OnSetResourceFileWatcherBehaviour(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetResourceFileWatcherBehaviour(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setResourceFileWatcherBehaviour)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` behaviour: abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn QBaseSetResourceFileWatcherBehaviour(self: ?*anyopaque, behaviour: i32) void {
        qtc.QDesignerIntegrationInterface_QBaseSetResourceFileWatcherBehaviour(@ptrCast(self), @intCast(behaviour));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#contextHelpId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContextHelpId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegrationInterface_ContextHelpId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegrationinterface.ContextHelpId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#contextHelpId)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnContextHelpId(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerIntegrationInterface_OnContextHelpId(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#contextHelpId)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseContextHelpId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegrationInterface_QBaseContextHelpId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegrationinterface.ContextHelpId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitObjectNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` newName: []const u8 `
    ///
    /// ` oldName: []const u8 `
    ///
    pub fn EmitObjectNameChanged(self: ?*anyopaque, formWindow: ?*anyopaque, object: ?*anyopaque, newName: []const u8, oldName: []const u8) void {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        const oldName_str = qtc.libqt_string{
            .len = oldName.len,
            .data = oldName.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitObjectNameChanged(@ptrCast(self), @ptrCast(formWindow), @ptrCast(object), newName_str, oldName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitNavigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` objectName: []const u8 `
    ///
    /// ` signalSignature: []const u8 `
    ///
    /// ` parameterNames: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EmitNavigateToSlot(self: ?*anyopaque, objectName: []const u8, signalSignature: []const u8, parameterNames: []const []const u8, allocator: std.mem.Allocator) void {
        const objectName_str = qtc.libqt_string{
            .len = objectName.len,
            .data = objectName.ptr,
        };
        const signalSignature_str = qtc.libqt_string{
            .len = signalSignature.len,
            .data = signalSignature.ptr,
        };
        const parameterNames_arr = allocator.alloc(qtc.libqt_string, parameterNames.len) catch @panic("qdesignerintegrationinterface.EmitNavigateToSlot: Memory allocation failed");
        defer allocator.free(parameterNames_arr);
        for (parameterNames, 0..parameterNames.len) |item, i| {
            parameterNames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const parameterNames_list = qtc.libqt_list{
            .len = parameterNames.len,
            .data = parameterNames_arr.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitNavigateToSlot(@ptrCast(self), objectName_str, signalSignature_str, parameterNames_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitNavigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` slotSignature: []const u8 `
    ///
    pub fn EmitNavigateToSlot2(self: ?*anyopaque, slotSignature: []const u8) void {
        const slotSignature_str = qtc.libqt_string{
            .len = slotSignature.len,
            .data = slotSignature.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitNavigateToSlot2(@ptrCast(self), slotSignature_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitHelpRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` manual: []const u8 `
    ///
    /// ` document: []const u8 `
    ///
    pub fn EmitHelpRequested(self: ?*anyopaque, manual: []const u8, document: []const u8) void {
        const manual_str = qtc.libqt_string{
            .len = manual.len,
            .data = manual.ptr,
        };
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitHelpRequested(@ptrCast(self), manual_str, document_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#propertyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn PropertyChanged(self: ?*anyopaque, formWindow: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_PropertyChanged(@ptrCast(self), @ptrCast(formWindow), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#objectNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` newName: []const u8 `
    ///
    /// ` oldName: []const u8 `
    ///
    pub fn ObjectNameChanged(self: ?*anyopaque, formWindow: ?*anyopaque, object: ?*anyopaque, newName: []const u8, oldName: []const u8) void {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        const oldName_str = qtc.libqt_string{
            .len = oldName.len,
            .data = oldName.ptr,
        };
        qtc.QDesignerIntegrationInterface_ObjectNameChanged(@ptrCast(self), @ptrCast(formWindow), @ptrCast(object), newName_str, oldName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#helpRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` manual: []const u8 `
    ///
    /// ` document: []const u8 `
    ///
    pub fn HelpRequested(self: ?*anyopaque, manual: []const u8, document: []const u8) void {
        const manual_str = qtc.libqt_string{
            .len = manual.len,
            .data = manual.ptr,
        };
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.QDesignerIntegrationInterface_HelpRequested(@ptrCast(self), manual_str, document_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#navigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` objectName: []const u8 `
    ///
    /// ` signalSignature: []const u8 `
    ///
    /// ` parameterNames: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NavigateToSlot(self: ?*anyopaque, objectName: []const u8, signalSignature: []const u8, parameterNames: []const []const u8, allocator: std.mem.Allocator) void {
        const objectName_str = qtc.libqt_string{
            .len = objectName.len,
            .data = objectName.ptr,
        };
        const signalSignature_str = qtc.libqt_string{
            .len = signalSignature.len,
            .data = signalSignature.ptr,
        };
        const parameterNames_arr = allocator.alloc(qtc.libqt_string, parameterNames.len) catch @panic("qdesignerintegrationinterface.NavigateToSlot: Memory allocation failed");
        defer allocator.free(parameterNames_arr);
        for (parameterNames, 0..parameterNames.len) |item, i| {
            parameterNames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const parameterNames_list = qtc.libqt_list{
            .len = parameterNames.len,
            .data = parameterNames_arr.ptr,
        };
        qtc.QDesignerIntegrationInterface_NavigateToSlot(@ptrCast(self), objectName_str, signalSignature_str, parameterNames_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#navigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` slotSignature: []const u8 `
    ///
    pub fn NavigateToSlot2(self: ?*anyopaque, slotSignature: []const u8) void {
        const slotSignature_str = qtc.libqt_string{
            .len = slotSignature.len,
            .data = slotSignature.ptr,
        };
        qtc.QDesignerIntegrationInterface_NavigateToSlot2(@ptrCast(self), slotSignature_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn SetFeatures(self: ?*anyopaque, f: i32) void {
        qtc.QDesignerIntegrationInterface_SetFeatures(@ptrCast(self), @intCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setFeatures)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, f: flag of abstractintegration_enums.FeatureFlag) callconv(.c) void `
    ///
    pub fn OnSetFeatures(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetFeatures(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setFeatures)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn QBaseSetFeatures(self: ?*anyopaque, f: i32) void {
        qtc.QDesignerIntegrationInterface_QBaseSetFeatures(@ptrCast(self), @intCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` enableSubPropertyHandling: bool `
    ///
    pub fn UpdateProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque, enableSubPropertyHandling: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_UpdateProperty(@ptrCast(self), name_str, @ptrCast(value), enableSubPropertyHandling);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, name: [*:0]const u8, value: QtC.QVariant, enableSubPropertyHandling: bool) callconv(.c) void `
    ///
    pub fn OnUpdateProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` enableSubPropertyHandling: bool `
    ///
    pub fn QBaseUpdateProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque, enableSubPropertyHandling: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_QBaseUpdateProperty(@ptrCast(self), name_str, @ptrCast(value), enableSubPropertyHandling);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn UpdateProperty2(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_UpdateProperty2(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, name: [*:0]const u8, value: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnUpdateProperty2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateProperty2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn QBaseUpdateProperty2(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_QBaseUpdateProperty2(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resetProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ResetProperty(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_ResetProperty(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resetProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnResetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnResetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resetProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn QBaseResetProperty(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_QBaseResetProperty(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#addDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn AddDynamicProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_AddDynamicProperty(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#addDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, name: [*:0]const u8, value: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnAddDynamicProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnAddDynamicProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#addDynamicProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn QBaseAddDynamicProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_QBaseAddDynamicProperty(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#removeDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn RemoveDynamicProperty(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_RemoveDynamicProperty(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#removeDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnRemoveDynamicProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnRemoveDynamicProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#removeDynamicProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn QBaseRemoveDynamicProperty(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_QBaseRemoveDynamicProperty(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateActiveFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn UpdateActiveFormWindow(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_UpdateActiveFormWindow(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateActiveFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, formWindow: QtC.QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnUpdateActiveFormWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateActiveFormWindow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateActiveFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn QBaseUpdateActiveFormWindow(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_QBaseUpdateActiveFormWindow(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setupFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn SetupFormWindow(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_SetupFormWindow(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setupFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, formWindow: QtC.QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnSetupFormWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetupFormWindow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setupFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn QBaseSetupFormWindow(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_QBaseSetupFormWindow(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn UpdateSelection(self: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_UpdateSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateSelection(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn QBaseUpdateSelection(self: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_QBaseUpdateSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateCustomWidgetPlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn UpdateCustomWidgetPlugins(self: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_UpdateCustomWidgetPlugins(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateCustomWidgetPlugins)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateCustomWidgetPlugins(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateCustomWidgetPlugins(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateCustomWidgetPlugins)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn QBaseUpdateCustomWidgetPlugins(self: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_QBaseUpdateCustomWidgetPlugins(@ptrCast(self));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegrationinterface.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegrationinterface.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegrationinterface.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qdesignerintegrationinterface.Children: Memory allocation failed");
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
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
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
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
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdesignerintegrationinterface.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignerintegrationinterface.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface) callconv(.c) void `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @intCast(param5));
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
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, param1: QtC.QObject) callconv(.c) void `
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
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerIntegrationInterface_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerIntegrationInterface_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerIntegrationInterface_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerIntegrationInterface_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerIntegrationInterface_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerIntegrationInterface_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDesignerIntegrationInterface_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDesignerIntegrationInterface_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QDesignerIntegrationInterface_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerIntegrationInterface_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerIntegrationInterface_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerIntegrationInterface_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerIntegrationInterface_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDesignerIntegrationInterface_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDesignerIntegrationInterface_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegrationInterface, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerIntegrationInterface_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#dtor.QDesignerIntegrationInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerIntegrationInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html)
pub const qdesignerintegration = struct {
    /// New constructs a new QDesignerIntegration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    pub fn New(core: ?*anyopaque) QtC.QDesignerIntegration {
        return qtc.QDesignerIntegration_new(@ptrCast(core));
    }

    /// New2 constructs a new QDesignerIntegration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QtC.QDesignerFormEditorInterface `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(core: ?*anyopaque, parent: ?*anyopaque) QtC.QDesignerIntegration {
        return qtc.QDesignerIntegration_new2(@ptrCast(core), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QDesignerIntegration_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QDesignerIntegration_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QDesignerIntegration_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerIntegration_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerIntegration_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerIntegration_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerIntegration_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerIntegration_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegration.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#headerSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HeaderSuffix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegration_HeaderSuffix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegration.HeaderSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#headerSuffix)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnHeaderSuffix(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerIntegration_OnHeaderSuffix(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#headerSuffix)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseHeaderSuffix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegration_QBaseHeaderSuffix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegration.HeaderSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` headerSuffix: []const u8 `
    ///
    pub fn SetHeaderSuffix(self: ?*anyopaque, headerSuffix: []const u8) void {
        const headerSuffix_str = qtc.libqt_string{
            .len = headerSuffix.len,
            .data = headerSuffix.ptr,
        };
        qtc.QDesignerIntegration_SetHeaderSuffix(@ptrCast(self), headerSuffix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderSuffix)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, headerSuffix: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetHeaderSuffix(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetHeaderSuffix(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderSuffix)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` headerSuffix: []const u8 `
    ///
    pub fn QBaseSetHeaderSuffix(self: ?*anyopaque, headerSuffix: []const u8) void {
        const headerSuffix_str = qtc.libqt_string{
            .len = headerSuffix.len,
            .data = headerSuffix.ptr,
        };
        qtc.QDesignerIntegration_QBaseSetHeaderSuffix(@ptrCast(self), headerSuffix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#isHeaderLowercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn IsHeaderLowercase(self: ?*anyopaque) bool {
        return qtc.QDesignerIntegration_IsHeaderLowercase(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#isHeaderLowercase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsHeaderLowercase(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerIntegration_OnIsHeaderLowercase(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#isHeaderLowercase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn QBaseIsHeaderLowercase(self: ?*anyopaque) bool {
        return qtc.QDesignerIntegration_QBaseIsHeaderLowercase(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderLowercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` headerLowerCase: bool `
    ///
    pub fn SetHeaderLowercase(self: ?*anyopaque, headerLowerCase: bool) void {
        qtc.QDesignerIntegration_SetHeaderLowercase(@ptrCast(self), headerLowerCase);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderLowercase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, headerLowerCase: bool) callconv(.c) void `
    ///
    pub fn OnSetHeaderLowercase(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetHeaderLowercase(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderLowercase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` headerLowerCase: bool `
    ///
    pub fn QBaseSetHeaderLowercase(self: ?*anyopaque, headerLowerCase: bool) void {
        qtc.QDesignerIntegration_QBaseSetHeaderLowercase(@ptrCast(self), headerLowerCase);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#features)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ## Returns:
    ///
    /// ` flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn Features(self: ?*anyopaque) i32 {
        return qtc.QDesignerIntegration_Features(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#features)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFeatures(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnFeatures(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#features)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ## Returns:
    ///
    /// ` flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn QBaseFeatures(self: ?*anyopaque) i32 {
        return qtc.QDesignerIntegration_QBaseFeatures(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn SetFeatures(self: ?*anyopaque, f: i32) void {
        qtc.QDesignerIntegration_SetFeatures(@ptrCast(self), @intCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setFeatures)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, f: flag of abstractintegration_enums.FeatureFlag) callconv(.c) void `
    ///
    pub fn OnSetFeatures(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetFeatures(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setFeatures)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn QBaseSetFeatures(self: ?*anyopaque, f: i32) void {
        qtc.QDesignerIntegration_QBaseSetFeatures(@ptrCast(self), @intCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resourceFileWatcherBehaviour)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ## Returns:
    ///
    /// ` abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn ResourceFileWatcherBehaviour(self: ?*anyopaque) i32 {
        return qtc.QDesignerIntegration_ResourceFileWatcherBehaviour(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resourceFileWatcherBehaviour)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnResourceFileWatcherBehaviour(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnResourceFileWatcherBehaviour(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resourceFileWatcherBehaviour)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ## Returns:
    ///
    /// ` abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn QBaseResourceFileWatcherBehaviour(self: ?*anyopaque) i32 {
        return qtc.QDesignerIntegration_QBaseResourceFileWatcherBehaviour(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setResourceFileWatcherBehaviour)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` behaviour: abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn SetResourceFileWatcherBehaviour(self: ?*anyopaque, behaviour: i32) void {
        qtc.QDesignerIntegration_SetResourceFileWatcherBehaviour(@ptrCast(self), @intCast(behaviour));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setResourceFileWatcherBehaviour)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, behaviour: abstractintegration_enums.ResourceFileWatcherBehaviour) callconv(.c) void `
    ///
    pub fn OnSetResourceFileWatcherBehaviour(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetResourceFileWatcherBehaviour(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setResourceFileWatcherBehaviour)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` behaviour: abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn QBaseSetResourceFileWatcherBehaviour(self: ?*anyopaque, behaviour: i32) void {
        qtc.QDesignerIntegration_QBaseSetResourceFileWatcherBehaviour(@ptrCast(self), @intCast(behaviour));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#containerWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn ContainerWindow(self: ?*anyopaque, widget: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerIntegration_ContainerWindow(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#containerWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, widget: QtC.QWidget) callconv(.c) QtC.QWidget `
    ///
    pub fn OnContainerWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QDesignerIntegration_OnContainerWindow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#containerWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn QBaseContainerWindow(self: ?*anyopaque, widget: ?*anyopaque) QtC.QWidget {
        return qtc.QDesignerIntegration_QBaseContainerWindow(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#initializePlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` formEditor: QtC.QDesignerFormEditorInterface `
    ///
    pub fn InitializePlugins(formEditor: ?*anyopaque) void {
        qtc.QDesignerIntegration_InitializePlugins(@ptrCast(formEditor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#createResourceBrowser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn CreateResourceBrowser(self: ?*anyopaque, parent: ?*anyopaque) QtC.QDesignerResourceBrowserInterface {
        return qtc.QDesignerIntegration_CreateResourceBrowser(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#createResourceBrowser)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, parent: QtC.QWidget) callconv(.c) QtC.QDesignerResourceBrowserInterface `
    ///
    pub fn OnCreateResourceBrowser(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QDesignerResourceBrowserInterface) void {
        qtc.QDesignerIntegration_OnCreateResourceBrowser(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#createResourceBrowser)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` parent: QtC.QWidget `
    ///
    pub fn QBaseCreateResourceBrowser(self: ?*anyopaque, parent: ?*anyopaque) QtC.QDesignerResourceBrowserInterface {
        return qtc.QDesignerIntegration_QBaseCreateResourceBrowser(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#contextHelpId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContextHelpId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegration_ContextHelpId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegration.ContextHelpId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#contextHelpId)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnContextHelpId(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerIntegration_OnContextHelpId(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#contextHelpId)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseContextHelpId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegration_QBaseContextHelpId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegration.ContextHelpId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` enableSubPropertyHandling: bool `
    ///
    pub fn UpdateProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque, enableSubPropertyHandling: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_UpdateProperty(@ptrCast(self), name_str, @ptrCast(value), enableSubPropertyHandling);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, name: [*:0]const u8, value: QtC.QVariant, enableSubPropertyHandling: bool) callconv(.c) void `
    ///
    pub fn OnUpdateProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` enableSubPropertyHandling: bool `
    ///
    pub fn QBaseUpdateProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque, enableSubPropertyHandling: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_QBaseUpdateProperty(@ptrCast(self), name_str, @ptrCast(value), enableSubPropertyHandling);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn UpdateProperty2(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_UpdateProperty2(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, name: [*:0]const u8, value: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnUpdateProperty2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateProperty2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn QBaseUpdateProperty2(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_QBaseUpdateProperty2(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resetProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ResetProperty(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_ResetProperty(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resetProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnResetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnResetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resetProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    pub fn QBaseResetProperty(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_QBaseResetProperty(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#addDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn AddDynamicProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_AddDynamicProperty(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#addDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, name: [*:0]const u8, value: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnAddDynamicProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnAddDynamicProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#addDynamicProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn QBaseAddDynamicProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_QBaseAddDynamicProperty(@ptrCast(self), name_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#removeDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    pub fn RemoveDynamicProperty(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_RemoveDynamicProperty(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#removeDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnRemoveDynamicProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnRemoveDynamicProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#removeDynamicProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    pub fn QBaseRemoveDynamicProperty(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_QBaseRemoveDynamicProperty(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateActiveFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn UpdateActiveFormWindow(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerIntegration_UpdateActiveFormWindow(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateActiveFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, formWindow: QtC.QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnUpdateActiveFormWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateActiveFormWindow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateActiveFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn QBaseUpdateActiveFormWindow(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerIntegration_QBaseUpdateActiveFormWindow(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setupFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn SetupFormWindow(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerIntegration_SetupFormWindow(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setupFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, formWindow: QtC.QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnSetupFormWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetupFormWindow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setupFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    pub fn QBaseSetupFormWindow(self: ?*anyopaque, formWindow: ?*anyopaque) void {
        qtc.QDesignerIntegration_QBaseSetupFormWindow(@ptrCast(self), @ptrCast(formWindow));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn UpdateSelection(self: ?*anyopaque) void {
        qtc.QDesignerIntegration_UpdateSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateSelection(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateSelection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn QBaseUpdateSelection(self: ?*anyopaque) void {
        qtc.QDesignerIntegration_QBaseUpdateSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateCustomWidgetPlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn UpdateCustomWidgetPlugins(self: ?*anyopaque) void {
        qtc.QDesignerIntegration_UpdateCustomWidgetPlugins(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateCustomWidgetPlugins)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateCustomWidgetPlugins(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateCustomWidgetPlugins(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateCustomWidgetPlugins)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn QBaseUpdateCustomWidgetPlugins(self: ?*anyopaque) void {
        qtc.QDesignerIntegration_QBaseUpdateCustomWidgetPlugins(@ptrCast(self));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegration.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegration.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn Core(self: ?*anyopaque) QtC.QDesignerFormEditorInterface {
        return qtc.QDesignerIntegrationInterface_Core(@ptrCast(self));
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#hasFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn HasFeature(self: ?*anyopaque, f: i32) bool {
        return qtc.QDesignerIntegrationInterface_HasFeature(@ptrCast(self), @intCast(f));
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitObjectNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` newName: []const u8 `
    ///
    /// ` oldName: []const u8 `
    ///
    pub fn EmitObjectNameChanged(self: ?*anyopaque, formWindow: ?*anyopaque, object: ?*anyopaque, newName: []const u8, oldName: []const u8) void {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        const oldName_str = qtc.libqt_string{
            .len = oldName.len,
            .data = oldName.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitObjectNameChanged(@ptrCast(self), @ptrCast(formWindow), @ptrCast(object), newName_str, oldName_str);
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitNavigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` objectName: []const u8 `
    ///
    /// ` signalSignature: []const u8 `
    ///
    /// ` parameterNames: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EmitNavigateToSlot(self: ?*anyopaque, objectName: []const u8, signalSignature: []const u8, parameterNames: []const []const u8, allocator: std.mem.Allocator) void {
        const objectName_str = qtc.libqt_string{
            .len = objectName.len,
            .data = objectName.ptr,
        };
        const signalSignature_str = qtc.libqt_string{
            .len = signalSignature.len,
            .data = signalSignature.ptr,
        };
        const parameterNames_arr = allocator.alloc(qtc.libqt_string, parameterNames.len) catch @panic("qdesignerintegration.EmitNavigateToSlot: Memory allocation failed");
        defer allocator.free(parameterNames_arr);
        for (parameterNames, 0..parameterNames.len) |item, i| {
            parameterNames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const parameterNames_list = qtc.libqt_list{
            .len = parameterNames.len,
            .data = parameterNames_arr.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitNavigateToSlot(@ptrCast(self), objectName_str, signalSignature_str, parameterNames_list);
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitNavigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` slotSignature: []const u8 `
    ///
    pub fn EmitNavigateToSlot2(self: ?*anyopaque, slotSignature: []const u8) void {
        const slotSignature_str = qtc.libqt_string{
            .len = slotSignature.len,
            .data = slotSignature.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitNavigateToSlot2(@ptrCast(self), slotSignature_str);
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitHelpRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` manual: []const u8 `
    ///
    /// ` document: []const u8 `
    ///
    pub fn EmitHelpRequested(self: ?*anyopaque, manual: []const u8, document: []const u8) void {
        const manual_str = qtc.libqt_string{
            .len = manual.len,
            .data = manual.ptr,
        };
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitHelpRequested(@ptrCast(self), manual_str, document_str);
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#propertyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn PropertyChanged(self: ?*anyopaque, formWindow: ?*anyopaque, name: []const u8, value: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_PropertyChanged(@ptrCast(self), @ptrCast(formWindow), name_str, @ptrCast(value));
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#objectNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` formWindow: QtC.QDesignerFormWindowInterface `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` newName: []const u8 `
    ///
    /// ` oldName: []const u8 `
    ///
    pub fn ObjectNameChanged(self: ?*anyopaque, formWindow: ?*anyopaque, object: ?*anyopaque, newName: []const u8, oldName: []const u8) void {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        const oldName_str = qtc.libqt_string{
            .len = oldName.len,
            .data = oldName.ptr,
        };
        qtc.QDesignerIntegrationInterface_ObjectNameChanged(@ptrCast(self), @ptrCast(formWindow), @ptrCast(object), newName_str, oldName_str);
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#helpRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` manual: []const u8 `
    ///
    /// ` document: []const u8 `
    ///
    pub fn HelpRequested(self: ?*anyopaque, manual: []const u8, document: []const u8) void {
        const manual_str = qtc.libqt_string{
            .len = manual.len,
            .data = manual.ptr,
        };
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.QDesignerIntegrationInterface_HelpRequested(@ptrCast(self), manual_str, document_str);
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#navigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` objectName: []const u8 `
    ///
    /// ` signalSignature: []const u8 `
    ///
    /// ` parameterNames: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NavigateToSlot(self: ?*anyopaque, objectName: []const u8, signalSignature: []const u8, parameterNames: []const []const u8, allocator: std.mem.Allocator) void {
        const objectName_str = qtc.libqt_string{
            .len = objectName.len,
            .data = objectName.ptr,
        };
        const signalSignature_str = qtc.libqt_string{
            .len = signalSignature.len,
            .data = signalSignature.ptr,
        };
        const parameterNames_arr = allocator.alloc(qtc.libqt_string, parameterNames.len) catch @panic("qdesignerintegration.NavigateToSlot: Memory allocation failed");
        defer allocator.free(parameterNames_arr);
        for (parameterNames, 0..parameterNames.len) |item, i| {
            parameterNames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const parameterNames_list = qtc.libqt_list{
            .len = parameterNames.len,
            .data = parameterNames_arr.ptr,
        };
        qtc.QDesignerIntegrationInterface_NavigateToSlot(@ptrCast(self), objectName_str, signalSignature_str, parameterNames_list);
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#navigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` slotSignature: []const u8 `
    ///
    pub fn NavigateToSlot2(self: ?*anyopaque, slotSignature: []const u8) void {
        const slotSignature_str = qtc.libqt_string{
            .len = slotSignature.len,
            .data = slotSignature.ptr,
        };
        qtc.QDesignerIntegrationInterface_NavigateToSlot2(@ptrCast(self), slotSignature_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegration.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qdesignerintegration.Children: Memory allocation failed");
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
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
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
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
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdesignerintegration.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdesignerintegration.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration) callconv(.c) void `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @intCast(param5));
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
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
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
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, param1: QtC.QObject) callconv(.c) void `
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
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerIntegration_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerIntegration_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerIntegration_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerIntegration_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QDesignerIntegration_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerIntegration_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerIntegration_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerIntegration_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerIntegration_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerIntegration_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerIntegration_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QDesignerIntegration_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerIntegration_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerIntegration_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerIntegration_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QDesignerIntegration_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDesignerIntegration_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QDesignerIntegration_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QDesignerIntegration_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerIntegration_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QDesignerIntegration_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerIntegration_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerIntegration_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDesignerIntegration_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QDesignerIntegration_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QtC.QDesignerIntegration, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QDesignerIntegration_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#dtor.QDesignerIntegration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerIntegration `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDesignerIntegration_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/abstractintegration.html#public-types)
pub const enums = struct {
    pub const ResourceFileWatcherBehaviour = enum(i32) {
        pub const NoResourceFileWatcher: i32 = 0;
        pub const ReloadResourceFileSilently: i32 = 1;
        pub const PromptToReloadResourceFile: i32 = 2;
    };

    pub const FeatureFlag = enum(i32) {
        pub const ResourceEditorFeature: i32 = 1;
        pub const SlotNavigationFeature: i32 = 2;
        pub const DefaultWidgetActionFeature: i32 = 4;
        pub const DefaultFeature: i32 = 5;
    };
};
