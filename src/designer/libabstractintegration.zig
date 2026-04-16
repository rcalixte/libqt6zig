const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDesignerFormEditorInterface = @import("libqt6").QDesignerFormEditorInterface;
const QDesignerFormWindowInterface = @import("libqt6").QDesignerFormWindowInterface;
const QDesignerResourceBrowserInterface = @import("libqt6").QDesignerResourceBrowserInterface;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const abstractintegration_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html)
pub const QDesignerIntegrationInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerIntegrationInterface,

    pub const _is_QDesignerIntegrationInterface = {};
    pub const _is_QObject = {};

    /// New constructs a new QDesignerIntegrationInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    pub fn New(core: anytype) QDesignerIntegrationInterface {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        return .{ .ptr = qtc.QDesignerIntegrationInterface_new(@ptrCast(core.ptr)) };
    }

    /// New2 constructs a new QDesignerIntegrationInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(core: anytype, parent: anytype) QDesignerIntegrationInterface {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerIntegrationInterface_new2(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn MetaObject(self: QDesignerIntegrationInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerIntegrationInterface_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDesignerIntegrationInterface_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn SuperMetaObject(self: QDesignerIntegrationInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerIntegrationInterface_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDesignerIntegrationInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerIntegrationInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QDesignerIntegrationInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerIntegrationInterface_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QDesignerIntegrationInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerIntegrationInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QDesignerIntegrationInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerIntegrationInterface_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
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
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn Core(self: QDesignerIntegrationInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerIntegrationInterface_Core(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#containerWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` widget: QWidget `
    ///
    pub fn ContainerWindow(self: QDesignerIntegrationInterface, widget: anytype) QWidget {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegrationInterface_ContainerWindow(@ptrCast(self.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#containerWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, widget: QWidget) callconv(.c) QWidget `
    ///
    pub fn OnContainerWindow(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QWidget) callconv(.c) QWidget) void {
        qtc.QDesignerIntegrationInterface_OnContainerWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContainerWindow` instead
    ///
    pub const QBaseContainerWindow = SuperContainerWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#containerWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperContainerWindow(self: QDesignerIntegrationInterface, widget: anytype) QWidget {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegrationInterface_SuperContainerWindow(@ptrCast(self.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#createResourceBrowser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateResourceBrowser(self: QDesignerIntegrationInterface, parent: anytype) QDesignerResourceBrowserInterface {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegrationInterface_CreateResourceBrowser(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#createResourceBrowser)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, parent: QWidget) callconv(.c) QDesignerResourceBrowserInterface `
    ///
    pub fn OnCreateResourceBrowser(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QWidget) callconv(.c) QDesignerResourceBrowserInterface) void {
        qtc.QDesignerIntegrationInterface_OnCreateResourceBrowser(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateResourceBrowser` instead
    ///
    pub const QBaseCreateResourceBrowser = SuperCreateResourceBrowser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#createResourceBrowser)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SuperCreateResourceBrowser(self: QDesignerIntegrationInterface, parent: anytype) QDesignerResourceBrowserInterface {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegrationInterface_SuperCreateResourceBrowser(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#headerSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HeaderSuffix(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegrationInterface_HeaderSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegrationinterface.HeaderSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#headerSuffix)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnHeaderSuffix(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerIntegrationInterface_OnHeaderSuffix(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHeaderSuffix` instead
    ///
    pub const QBaseHeaderSuffix = SuperHeaderSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#headerSuffix)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperHeaderSuffix(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegrationInterface_SuperHeaderSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegrationinterface.HeaderSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` headerSuffix: []const u8 `
    ///
    pub fn SetHeaderSuffix(self: QDesignerIntegrationInterface, headerSuffix: []const u8) void {
        const headerSuffix_str = qtc.libqt_string{
            .len = headerSuffix.len,
            .data = headerSuffix.ptr,
        };
        qtc.QDesignerIntegrationInterface_SetHeaderSuffix(@ptrCast(self.ptr), headerSuffix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderSuffix)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, headerSuffix: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetHeaderSuffix(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetHeaderSuffix(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetHeaderSuffix` instead
    ///
    pub const QBaseSetHeaderSuffix = SuperSetHeaderSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderSuffix)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` headerSuffix: []const u8 `
    ///
    pub fn SuperSetHeaderSuffix(self: QDesignerIntegrationInterface, headerSuffix: []const u8) void {
        const headerSuffix_str = qtc.libqt_string{
            .len = headerSuffix.len,
            .data = headerSuffix.ptr,
        };
        qtc.QDesignerIntegrationInterface_SuperSetHeaderSuffix(@ptrCast(self.ptr), headerSuffix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#isHeaderLowercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn IsHeaderLowercase(self: QDesignerIntegrationInterface) bool {
        return qtc.QDesignerIntegrationInterface_IsHeaderLowercase(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#isHeaderLowercase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsHeaderLowercase(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerIntegrationInterface_OnIsHeaderLowercase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsHeaderLowercase` instead
    ///
    pub const QBaseIsHeaderLowercase = SuperIsHeaderLowercase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#isHeaderLowercase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn SuperIsHeaderLowercase(self: QDesignerIntegrationInterface) bool {
        return qtc.QDesignerIntegrationInterface_SuperIsHeaderLowercase(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderLowercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` headerLowerCase: bool `
    ///
    pub fn SetHeaderLowercase(self: QDesignerIntegrationInterface, headerLowerCase: bool) void {
        qtc.QDesignerIntegrationInterface_SetHeaderLowercase(@ptrCast(self.ptr), headerLowerCase);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderLowercase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, headerLowerCase: bool) callconv(.c) void `
    ///
    pub fn OnSetHeaderLowercase(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, bool) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetHeaderLowercase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetHeaderLowercase` instead
    ///
    pub const QBaseSetHeaderLowercase = SuperSetHeaderLowercase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderLowercase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` headerLowerCase: bool `
    ///
    pub fn SuperSetHeaderLowercase(self: QDesignerIntegrationInterface, headerLowerCase: bool) void {
        qtc.QDesignerIntegrationInterface_SuperSetHeaderLowercase(@ptrCast(self.ptr), headerLowerCase);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#features)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ## Returns:
    ///
    /// ` flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn Features(self: QDesignerIntegrationInterface) i32 {
        return qtc.QDesignerIntegrationInterface_Features(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#features)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFeatures(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnFeatures(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFeatures` instead
    ///
    pub const QBaseFeatures = SuperFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#features)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ## Returns:
    ///
    /// ` flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn SuperFeatures(self: QDesignerIntegrationInterface) i32 {
        return qtc.QDesignerIntegrationInterface_SuperFeatures(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#hasFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn HasFeature(self: QDesignerIntegrationInterface, f: i32) bool {
        return qtc.QDesignerIntegrationInterface_HasFeature(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resourceFileWatcherBehaviour)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ## Returns:
    ///
    /// ` abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn ResourceFileWatcherBehaviour(self: QDesignerIntegrationInterface) i32 {
        return qtc.QDesignerIntegrationInterface_ResourceFileWatcherBehaviour(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resourceFileWatcherBehaviour)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnResourceFileWatcherBehaviour(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResourceFileWatcherBehaviour` instead
    ///
    pub const QBaseResourceFileWatcherBehaviour = SuperResourceFileWatcherBehaviour;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resourceFileWatcherBehaviour)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ## Returns:
    ///
    /// ` abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn SuperResourceFileWatcherBehaviour(self: QDesignerIntegrationInterface) i32 {
        return qtc.QDesignerIntegrationInterface_SuperResourceFileWatcherBehaviour(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setResourceFileWatcherBehaviour)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` behaviour: abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn SetResourceFileWatcherBehaviour(self: QDesignerIntegrationInterface, behaviour: i32) void {
        qtc.QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(behaviour));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setResourceFileWatcherBehaviour)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, behaviour: abstractintegration_enums.ResourceFileWatcherBehaviour) callconv(.c) void `
    ///
    pub fn OnSetResourceFileWatcherBehaviour(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, i32) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetResourceFileWatcherBehaviour` instead
    ///
    pub const QBaseSetResourceFileWatcherBehaviour = SuperSetResourceFileWatcherBehaviour;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setResourceFileWatcherBehaviour)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` behaviour: abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn SuperSetResourceFileWatcherBehaviour(self: QDesignerIntegrationInterface, behaviour: i32) void {
        qtc.QDesignerIntegrationInterface_SuperSetResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(behaviour));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#contextHelpId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContextHelpId(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegrationInterface_ContextHelpId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegrationinterface.ContextHelpId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#contextHelpId)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnContextHelpId(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerIntegrationInterface_OnContextHelpId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContextHelpId` instead
    ///
    pub const QBaseContextHelpId = SuperContextHelpId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#contextHelpId)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperContextHelpId(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegrationInterface_SuperContextHelpId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegrationinterface.ContextHelpId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitObjectNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    /// ` object: QObject `
    ///
    /// ` newName: []const u8 `
    ///
    /// ` oldName: []const u8 `
    ///
    pub fn EmitObjectNameChanged(self: QDesignerIntegrationInterface, formWindow: anytype, object: anytype, newName: []const u8, oldName: []const u8) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        comptime _ = @TypeOf(object)._is_QObject;
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        const oldName_str = qtc.libqt_string{
            .len = oldName.len,
            .data = oldName.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitObjectNameChanged(@ptrCast(self.ptr), @ptrCast(formWindow.ptr), @ptrCast(object.ptr), newName_str, oldName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitNavigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` objectName: []const u8 `
    ///
    /// ` signalSignature: []const u8 `
    ///
    /// ` parameterNames: []const []const u8 `
    ///
    pub fn EmitNavigateToSlot(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator, objectName: []const u8, signalSignature: []const u8, parameterNames: []const []const u8) void {
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
        for (parameterNames, 0..parameterNames.len) |item, i|
            parameterNames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const parameterNames_list = qtc.libqt_list{
            .len = parameterNames.len,
            .data = parameterNames_arr.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitNavigateToSlot(@ptrCast(self.ptr), objectName_str, signalSignature_str, parameterNames_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitNavigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` slotSignature: []const u8 `
    ///
    pub fn EmitNavigateToSlot2(self: QDesignerIntegrationInterface, slotSignature: []const u8) void {
        const slotSignature_str = qtc.libqt_string{
            .len = slotSignature.len,
            .data = slotSignature.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitNavigateToSlot2(@ptrCast(self.ptr), slotSignature_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitHelpRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` manual: []const u8 `
    ///
    /// ` document: []const u8 `
    ///
    pub fn EmitHelpRequested(self: QDesignerIntegrationInterface, manual: []const u8, document: []const u8) void {
        const manual_str = qtc.libqt_string{
            .len = manual.len,
            .data = manual.ptr,
        };
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitHelpRequested(@ptrCast(self.ptr), manual_str, document_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#propertyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn PropertyChanged(self: QDesignerIntegrationInterface, formWindow: anytype, name: []const u8, value: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_PropertyChanged(@ptrCast(self.ptr), @ptrCast(formWindow.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#objectNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    /// ` object: QObject `
    ///
    /// ` newName: []const u8 `
    ///
    /// ` oldName: []const u8 `
    ///
    pub fn ObjectNameChanged(self: QDesignerIntegrationInterface, formWindow: anytype, object: anytype, newName: []const u8, oldName: []const u8) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        comptime _ = @TypeOf(object)._is_QObject;
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        const oldName_str = qtc.libqt_string{
            .len = oldName.len,
            .data = oldName.ptr,
        };
        qtc.QDesignerIntegrationInterface_ObjectNameChanged(@ptrCast(self.ptr), @ptrCast(formWindow.ptr), @ptrCast(object.ptr), newName_str, oldName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#helpRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` manual: []const u8 `
    ///
    /// ` document: []const u8 `
    ///
    pub fn HelpRequested(self: QDesignerIntegrationInterface, manual: []const u8, document: []const u8) void {
        const manual_str = qtc.libqt_string{
            .len = manual.len,
            .data = manual.ptr,
        };
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.QDesignerIntegrationInterface_HelpRequested(@ptrCast(self.ptr), manual_str, document_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#navigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` objectName: []const u8 `
    ///
    /// ` signalSignature: []const u8 `
    ///
    /// ` parameterNames: []const []const u8 `
    ///
    pub fn NavigateToSlot(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator, objectName: []const u8, signalSignature: []const u8, parameterNames: []const []const u8) void {
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
        for (parameterNames, 0..parameterNames.len) |item, i|
            parameterNames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const parameterNames_list = qtc.libqt_list{
            .len = parameterNames.len,
            .data = parameterNames_arr.ptr,
        };
        qtc.QDesignerIntegrationInterface_NavigateToSlot(@ptrCast(self.ptr), objectName_str, signalSignature_str, parameterNames_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#navigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` slotSignature: []const u8 `
    ///
    pub fn NavigateToSlot2(self: QDesignerIntegrationInterface, slotSignature: []const u8) void {
        const slotSignature_str = qtc.libqt_string{
            .len = slotSignature.len,
            .data = slotSignature.ptr,
        };
        qtc.QDesignerIntegrationInterface_NavigateToSlot2(@ptrCast(self.ptr), slotSignature_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn SetFeatures(self: QDesignerIntegrationInterface, f: i32) void {
        qtc.QDesignerIntegrationInterface_SetFeatures(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setFeatures)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, f: flag of abstractintegration_enums.FeatureFlag) callconv(.c) void `
    ///
    pub fn OnSetFeatures(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, i32) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetFeatures(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFeatures` instead
    ///
    pub const QBaseSetFeatures = SuperSetFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setFeatures)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn SuperSetFeatures(self: QDesignerIntegrationInterface, f: i32) void {
        qtc.QDesignerIntegrationInterface_SuperSetFeatures(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    /// ` enableSubPropertyHandling: bool `
    ///
    pub fn UpdateProperty(self: QDesignerIntegrationInterface, name: []const u8, value: anytype, enableSubPropertyHandling: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_UpdateProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr), enableSubPropertyHandling);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, name: [*:0]const u8, value: QVariant, enableSubPropertyHandling: bool) callconv(.c) void `
    ///
    pub fn OnUpdateProperty(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8, QVariant, bool) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateProperty` instead
    ///
    pub const QBaseUpdateProperty = SuperUpdateProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    /// ` enableSubPropertyHandling: bool `
    ///
    pub fn SuperUpdateProperty(self: QDesignerIntegrationInterface, name: []const u8, value: anytype, enableSubPropertyHandling: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_SuperUpdateProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr), enableSubPropertyHandling);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn UpdateProperty2(self: QDesignerIntegrationInterface, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_UpdateProperty2(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, name: [*:0]const u8, value: QVariant) callconv(.c) void `
    ///
    pub fn OnUpdateProperty2(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateProperty2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateProperty2` instead
    ///
    pub const QBaseUpdateProperty2 = SuperUpdateProperty2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperUpdateProperty2(self: QDesignerIntegrationInterface, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_SuperUpdateProperty2(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resetProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ResetProperty(self: QDesignerIntegrationInterface, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_ResetProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resetProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnResetProperty(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnResetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResetProperty` instead
    ///
    pub const QBaseResetProperty = SuperResetProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resetProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperResetProperty(self: QDesignerIntegrationInterface, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_SuperResetProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#addDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn AddDynamicProperty(self: QDesignerIntegrationInterface, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_AddDynamicProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#addDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, name: [*:0]const u8, value: QVariant) callconv(.c) void `
    ///
    pub fn OnAddDynamicProperty(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnAddDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddDynamicProperty` instead
    ///
    pub const QBaseAddDynamicProperty = SuperAddDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#addDynamicProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperAddDynamicProperty(self: QDesignerIntegrationInterface, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_SuperAddDynamicProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#removeDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn RemoveDynamicProperty(self: QDesignerIntegrationInterface, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_RemoveDynamicProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#removeDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnRemoveDynamicProperty(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnRemoveDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveDynamicProperty` instead
    ///
    pub const QBaseRemoveDynamicProperty = SuperRemoveDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#removeDynamicProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperRemoveDynamicProperty(self: QDesignerIntegrationInterface, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_SuperRemoveDynamicProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateActiveFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn UpdateActiveFormWindow(self: QDesignerIntegrationInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegrationInterface_UpdateActiveFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateActiveFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, formWindow: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnUpdateActiveFormWindow(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateActiveFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateActiveFormWindow` instead
    ///
    pub const QBaseUpdateActiveFormWindow = SuperUpdateActiveFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateActiveFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn SuperUpdateActiveFormWindow(self: QDesignerIntegrationInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegrationInterface_SuperUpdateActiveFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setupFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn SetupFormWindow(self: QDesignerIntegrationInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegrationInterface_SetupFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setupFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, formWindow: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnSetupFormWindow(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetupFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetupFormWindow` instead
    ///
    pub const QBaseSetupFormWindow = SuperSetupFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setupFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn SuperSetupFormWindow(self: QDesignerIntegrationInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegrationInterface_SuperSetupFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn UpdateSelection(self: QDesignerIntegrationInterface) void {
        qtc.QDesignerIntegrationInterface_UpdateSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateSelection(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateSelection` instead
    ///
    pub const QBaseUpdateSelection = SuperUpdateSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn SuperUpdateSelection(self: QDesignerIntegrationInterface) void {
        qtc.QDesignerIntegrationInterface_SuperUpdateSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateCustomWidgetPlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn UpdateCustomWidgetPlugins(self: QDesignerIntegrationInterface) void {
        qtc.QDesignerIntegrationInterface_UpdateCustomWidgetPlugins(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateCustomWidgetPlugins)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateCustomWidgetPlugins(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateCustomWidgetPlugins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateCustomWidgetPlugins` instead
    ///
    pub const QBaseUpdateCustomWidgetPlugins = SuperUpdateCustomWidgetPlugins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateCustomWidgetPlugins)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn SuperUpdateCustomWidgetPlugins(self: QDesignerIntegrationInterface) void {
        qtc.QDesignerIntegrationInterface_SuperUpdateCustomWidgetPlugins(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
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
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
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
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QDesignerIntegrationInterface, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn IsWidgetType(self: QDesignerIntegrationInterface) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn IsWindowType(self: QDesignerIntegrationInterface) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn IsQuickItemType(self: QDesignerIntegrationInterface) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn SignalsBlocked(self: QDesignerIntegrationInterface) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QDesignerIntegrationInterface, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn Thread(self: QDesignerIntegrationInterface) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDesignerIntegrationInterface, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QDesignerIntegrationInterface, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QDesignerIntegrationInterface, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QDesignerIntegrationInterface, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QDesignerIntegrationInterface, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdesignerintegrationinterface.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QDesignerIntegrationInterface, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QDesignerIntegrationInterface, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QDesignerIntegrationInterface, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDesignerIntegrationInterface, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn Disconnect3(self: QDesignerIntegrationInterface) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QDesignerIntegrationInterface, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn DumpObjectTree(self: QDesignerIntegrationInterface) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn DumpObjectInfo(self: QDesignerIntegrationInterface) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QDesignerIntegrationInterface, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDesignerIntegrationInterface, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn BindingStorage(self: QDesignerIntegrationInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn BindingStorage2(self: QDesignerIntegrationInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn Destroyed(self: QDesignerIntegrationInterface) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn Parent(self: QDesignerIntegrationInterface) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QDesignerIntegrationInterface, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn DeleteLater(self: QDesignerIntegrationInterface) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QDesignerIntegrationInterface, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QDesignerIntegrationInterface, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDesignerIntegrationInterface, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDesignerIntegrationInterface, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QDesignerIntegrationInterface, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDesignerIntegrationInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDesignerIntegrationInterface, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDesignerIntegrationInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDesignerIntegrationInterface, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerIntegrationInterface_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QDesignerIntegrationInterface, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerIntegrationInterface_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QEvent) callconv(.c) bool) void {
        qtc.QDesignerIntegrationInterface_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDesignerIntegrationInterface, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerIntegrationInterface_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QDesignerIntegrationInterface, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerIntegrationInterface_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDesignerIntegrationInterface_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QDesignerIntegrationInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDesignerIntegrationInterface_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QDesignerIntegrationInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDesignerIntegrationInterface_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QTimerEvent) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QDesignerIntegrationInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDesignerIntegrationInterface_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QDesignerIntegrationInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDesignerIntegrationInterface_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QChildEvent) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QDesignerIntegrationInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDesignerIntegrationInterface_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QDesignerIntegrationInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDesignerIntegrationInterface_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QEvent) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QDesignerIntegrationInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegrationInterface_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QDesignerIntegrationInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegrationInterface_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QDesignerIntegrationInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegrationInterface_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QDesignerIntegrationInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegrationInterface_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn Sender(self: QDesignerIntegrationInterface) QObject {
        return .{ .ptr = qtc.QDesignerIntegrationInterface_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn SuperSender(self: QDesignerIntegrationInterface) QObject {
        return .{ .ptr = qtc.QDesignerIntegrationInterface_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDesignerIntegrationInterface_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn SenderSignalIndex(self: QDesignerIntegrationInterface) i32 {
        return qtc.QDesignerIntegrationInterface_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn SuperSenderSignalIndex(self: QDesignerIntegrationInterface) i32 {
        return qtc.QDesignerIntegrationInterface_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QDesignerIntegrationInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerIntegrationInterface_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QDesignerIntegrationInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerIntegrationInterface_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QDesignerIntegrationInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerIntegrationInterface_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QDesignerIntegrationInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerIntegrationInterface_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface`
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QMetaMethod) callconv(.c) bool) void {
        qtc.QDesignerIntegrationInterface_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#dtor.QDesignerIntegrationInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn Delete(self: QDesignerIntegrationInterface) void {
        qtc.QDesignerIntegrationInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html)
pub const QDesignerIntegration = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerIntegration,

    pub const _is_QDesignerIntegration = {};
    pub const _is_QDesignerIntegrationInterface = {};
    pub const _is_QObject = {};

    /// New constructs a new QDesignerIntegration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    pub fn New(core: anytype) QDesignerIntegration {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        return .{ .ptr = qtc.QDesignerIntegration_new(@ptrCast(core.ptr)) };
    }

    /// New2 constructs a new QDesignerIntegration object.
    ///
    /// ## Parameter(s):
    ///
    /// ` core: QDesignerFormEditorInterface `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(core: anytype, parent: anytype) QDesignerIntegration {
        comptime _ = @TypeOf(core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerIntegration_new2(@ptrCast(core.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn MetaObject(self: QDesignerIntegration) QMetaObject {
        return .{ .ptr = qtc.QDesignerIntegration_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QDesignerIntegration, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDesignerIntegration_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn SuperMetaObject(self: QDesignerIntegration) QMetaObject {
        return .{ .ptr = qtc.QDesignerIntegration_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDesignerIntegration, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerIntegration_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerIntegration_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QDesignerIntegration, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerIntegration_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QDesignerIntegration, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerIntegration_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QDesignerIntegration, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerIntegration_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
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
    /// ` self: QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HeaderSuffix(self: QDesignerIntegration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegration_HeaderSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegration.HeaderSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#headerSuffix)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnHeaderSuffix(self: QDesignerIntegration, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerIntegration_OnHeaderSuffix(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHeaderSuffix` instead
    ///
    pub const QBaseHeaderSuffix = SuperHeaderSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#headerSuffix)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperHeaderSuffix(self: QDesignerIntegration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegration_SuperHeaderSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegration.HeaderSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` headerSuffix: []const u8 `
    ///
    pub fn SetHeaderSuffix(self: QDesignerIntegration, headerSuffix: []const u8) void {
        const headerSuffix_str = qtc.libqt_string{
            .len = headerSuffix.len,
            .data = headerSuffix.ptr,
        };
        qtc.QDesignerIntegration_SetHeaderSuffix(@ptrCast(self.ptr), headerSuffix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderSuffix)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, headerSuffix: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetHeaderSuffix(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetHeaderSuffix(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetHeaderSuffix` instead
    ///
    pub const QBaseSetHeaderSuffix = SuperSetHeaderSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderSuffix)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` headerSuffix: []const u8 `
    ///
    pub fn SuperSetHeaderSuffix(self: QDesignerIntegration, headerSuffix: []const u8) void {
        const headerSuffix_str = qtc.libqt_string{
            .len = headerSuffix.len,
            .data = headerSuffix.ptr,
        };
        qtc.QDesignerIntegration_SuperSetHeaderSuffix(@ptrCast(self.ptr), headerSuffix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#isHeaderLowercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn IsHeaderLowercase(self: QDesignerIntegration) bool {
        return qtc.QDesignerIntegration_IsHeaderLowercase(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#isHeaderLowercase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsHeaderLowercase(self: QDesignerIntegration, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerIntegration_OnIsHeaderLowercase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsHeaderLowercase` instead
    ///
    pub const QBaseIsHeaderLowercase = SuperIsHeaderLowercase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#isHeaderLowercase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn SuperIsHeaderLowercase(self: QDesignerIntegration) bool {
        return qtc.QDesignerIntegration_SuperIsHeaderLowercase(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderLowercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` headerLowerCase: bool `
    ///
    pub fn SetHeaderLowercase(self: QDesignerIntegration, headerLowerCase: bool) void {
        qtc.QDesignerIntegration_SetHeaderLowercase(@ptrCast(self.ptr), headerLowerCase);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderLowercase)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, headerLowerCase: bool) callconv(.c) void `
    ///
    pub fn OnSetHeaderLowercase(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, bool) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetHeaderLowercase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetHeaderLowercase` instead
    ///
    pub const QBaseSetHeaderLowercase = SuperSetHeaderLowercase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderLowercase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` headerLowerCase: bool `
    ///
    pub fn SuperSetHeaderLowercase(self: QDesignerIntegration, headerLowerCase: bool) void {
        qtc.QDesignerIntegration_SuperSetHeaderLowercase(@ptrCast(self.ptr), headerLowerCase);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#features)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ## Returns:
    ///
    /// ` flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn Features(self: QDesignerIntegration) i32 {
        return qtc.QDesignerIntegration_Features(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#features)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnFeatures(self: QDesignerIntegration, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnFeatures(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFeatures` instead
    ///
    pub const QBaseFeatures = SuperFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#features)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ## Returns:
    ///
    /// ` flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn SuperFeatures(self: QDesignerIntegration) i32 {
        return qtc.QDesignerIntegration_SuperFeatures(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn SetFeatures(self: QDesignerIntegration, f: i32) void {
        qtc.QDesignerIntegration_SetFeatures(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setFeatures)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, f: flag of abstractintegration_enums.FeatureFlag) callconv(.c) void `
    ///
    pub fn OnSetFeatures(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, i32) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetFeatures(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFeatures` instead
    ///
    pub const QBaseSetFeatures = SuperSetFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setFeatures)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn SuperSetFeatures(self: QDesignerIntegration, f: i32) void {
        qtc.QDesignerIntegration_SuperSetFeatures(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resourceFileWatcherBehaviour)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ## Returns:
    ///
    /// ` abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn ResourceFileWatcherBehaviour(self: QDesignerIntegration) i32 {
        return qtc.QDesignerIntegration_ResourceFileWatcherBehaviour(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resourceFileWatcherBehaviour)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnResourceFileWatcherBehaviour(self: QDesignerIntegration, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResourceFileWatcherBehaviour` instead
    ///
    pub const QBaseResourceFileWatcherBehaviour = SuperResourceFileWatcherBehaviour;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resourceFileWatcherBehaviour)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ## Returns:
    ///
    /// ` abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn SuperResourceFileWatcherBehaviour(self: QDesignerIntegration) i32 {
        return qtc.QDesignerIntegration_SuperResourceFileWatcherBehaviour(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setResourceFileWatcherBehaviour)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` behaviour: abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn SetResourceFileWatcherBehaviour(self: QDesignerIntegration, behaviour: i32) void {
        qtc.QDesignerIntegration_SetResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(behaviour));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setResourceFileWatcherBehaviour)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, behaviour: abstractintegration_enums.ResourceFileWatcherBehaviour) callconv(.c) void `
    ///
    pub fn OnSetResourceFileWatcherBehaviour(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, i32) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetResourceFileWatcherBehaviour` instead
    ///
    pub const QBaseSetResourceFileWatcherBehaviour = SuperSetResourceFileWatcherBehaviour;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setResourceFileWatcherBehaviour)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` behaviour: abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn SuperSetResourceFileWatcherBehaviour(self: QDesignerIntegration, behaviour: i32) void {
        qtc.QDesignerIntegration_SuperSetResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(behaviour));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#containerWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` widget: QWidget `
    ///
    pub fn ContainerWindow(self: QDesignerIntegration, widget: anytype) QWidget {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegration_ContainerWindow(@ptrCast(self.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#containerWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, widget: QWidget) callconv(.c) QWidget `
    ///
    pub fn OnContainerWindow(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QWidget) callconv(.c) QWidget) void {
        qtc.QDesignerIntegration_OnContainerWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContainerWindow` instead
    ///
    pub const QBaseContainerWindow = SuperContainerWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#containerWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperContainerWindow(self: QDesignerIntegration, widget: anytype) QWidget {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegration_SuperContainerWindow(@ptrCast(self.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#initializePlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` formEditor: QDesignerFormEditorInterface `
    ///
    pub fn InitializePlugins(formEditor: anytype) void {
        comptime _ = @TypeOf(formEditor)._is_QDesignerFormEditorInterface;
        qtc.QDesignerIntegration_InitializePlugins(@ptrCast(formEditor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#createResourceBrowser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateResourceBrowser(self: QDesignerIntegration, parent: anytype) QDesignerResourceBrowserInterface {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegration_CreateResourceBrowser(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#createResourceBrowser)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, parent: QWidget) callconv(.c) QDesignerResourceBrowserInterface `
    ///
    pub fn OnCreateResourceBrowser(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QWidget) callconv(.c) QDesignerResourceBrowserInterface) void {
        qtc.QDesignerIntegration_OnCreateResourceBrowser(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateResourceBrowser` instead
    ///
    pub const QBaseCreateResourceBrowser = SuperCreateResourceBrowser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#createResourceBrowser)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SuperCreateResourceBrowser(self: QDesignerIntegration, parent: anytype) QDesignerResourceBrowserInterface {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegration_SuperCreateResourceBrowser(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#contextHelpId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContextHelpId(self: QDesignerIntegration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegration_ContextHelpId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegration.ContextHelpId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#contextHelpId)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnContextHelpId(self: QDesignerIntegration, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerIntegration_OnContextHelpId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContextHelpId` instead
    ///
    pub const QBaseContextHelpId = SuperContextHelpId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#contextHelpId)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperContextHelpId(self: QDesignerIntegration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegration_SuperContextHelpId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdesignerintegration.ContextHelpId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    /// ` enableSubPropertyHandling: bool `
    ///
    pub fn UpdateProperty(self: QDesignerIntegration, name: []const u8, value: anytype, enableSubPropertyHandling: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegration_UpdateProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr), enableSubPropertyHandling);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, name: [*:0]const u8, value: QVariant, enableSubPropertyHandling: bool) callconv(.c) void `
    ///
    pub fn OnUpdateProperty(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8, QVariant, bool) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateProperty` instead
    ///
    pub const QBaseUpdateProperty = SuperUpdateProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    /// ` enableSubPropertyHandling: bool `
    ///
    pub fn SuperUpdateProperty(self: QDesignerIntegration, name: []const u8, value: anytype, enableSubPropertyHandling: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegration_SuperUpdateProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr), enableSubPropertyHandling);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn UpdateProperty2(self: QDesignerIntegration, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegration_UpdateProperty2(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, name: [*:0]const u8, value: QVariant) callconv(.c) void `
    ///
    pub fn OnUpdateProperty2(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateProperty2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateProperty2` instead
    ///
    pub const QBaseUpdateProperty2 = SuperUpdateProperty2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperUpdateProperty2(self: QDesignerIntegration, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegration_SuperUpdateProperty2(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resetProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ResetProperty(self: QDesignerIntegration, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_ResetProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resetProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnResetProperty(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnResetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResetProperty` instead
    ///
    pub const QBaseResetProperty = SuperResetProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resetProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperResetProperty(self: QDesignerIntegration, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_SuperResetProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#addDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn AddDynamicProperty(self: QDesignerIntegration, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegration_AddDynamicProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#addDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, name: [*:0]const u8, value: QVariant) callconv(.c) void `
    ///
    pub fn OnAddDynamicProperty(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnAddDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddDynamicProperty` instead
    ///
    pub const QBaseAddDynamicProperty = SuperAddDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#addDynamicProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperAddDynamicProperty(self: QDesignerIntegration, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegration_SuperAddDynamicProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#removeDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    pub fn RemoveDynamicProperty(self: QDesignerIntegration, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_RemoveDynamicProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#removeDynamicProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnRemoveDynamicProperty(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnRemoveDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveDynamicProperty` instead
    ///
    pub const QBaseRemoveDynamicProperty = SuperRemoveDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#removeDynamicProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperRemoveDynamicProperty(self: QDesignerIntegration, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_SuperRemoveDynamicProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateActiveFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn UpdateActiveFormWindow(self: QDesignerIntegration, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegration_UpdateActiveFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateActiveFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, formWindow: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnUpdateActiveFormWindow(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateActiveFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateActiveFormWindow` instead
    ///
    pub const QBaseUpdateActiveFormWindow = SuperUpdateActiveFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateActiveFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn SuperUpdateActiveFormWindow(self: QDesignerIntegration, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegration_SuperUpdateActiveFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setupFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn SetupFormWindow(self: QDesignerIntegration, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegration_SetupFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setupFormWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, formWindow: QDesignerFormWindowInterface) callconv(.c) void `
    ///
    pub fn OnSetupFormWindow(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetupFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetupFormWindow` instead
    ///
    pub const QBaseSetupFormWindow = SuperSetupFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setupFormWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn SuperSetupFormWindow(self: QDesignerIntegration, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegration_SuperSetupFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn UpdateSelection(self: QDesignerIntegration) void {
        qtc.QDesignerIntegration_UpdateSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateSelection(self: QDesignerIntegration, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateSelection` instead
    ///
    pub const QBaseUpdateSelection = SuperUpdateSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn SuperUpdateSelection(self: QDesignerIntegration) void {
        qtc.QDesignerIntegration_SuperUpdateSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateCustomWidgetPlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn UpdateCustomWidgetPlugins(self: QDesignerIntegration) void {
        qtc.QDesignerIntegration_UpdateCustomWidgetPlugins(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateCustomWidgetPlugins)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateCustomWidgetPlugins(self: QDesignerIntegration, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateCustomWidgetPlugins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateCustomWidgetPlugins` instead
    ///
    pub const QBaseUpdateCustomWidgetPlugins = SuperUpdateCustomWidgetPlugins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateCustomWidgetPlugins)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn SuperUpdateCustomWidgetPlugins(self: QDesignerIntegration) void {
        qtc.QDesignerIntegration_SuperUpdateCustomWidgetPlugins(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
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
    /// ` self: QDesignerIntegration `
    ///
    pub fn Core(self: QDesignerIntegration) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerIntegrationInterface_Core(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#hasFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn HasFeature(self: QDesignerIntegration, f: i32) bool {
        return qtc.QDesignerIntegrationInterface_HasFeature(@ptrCast(self.ptr), @bitCast(f));
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitObjectNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    /// ` object: QObject `
    ///
    /// ` newName: []const u8 `
    ///
    /// ` oldName: []const u8 `
    ///
    pub fn EmitObjectNameChanged(self: QDesignerIntegration, formWindow: anytype, object: anytype, newName: []const u8, oldName: []const u8) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        comptime _ = @TypeOf(object)._is_QObject;
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        const oldName_str = qtc.libqt_string{
            .len = oldName.len,
            .data = oldName.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitObjectNameChanged(@ptrCast(self.ptr), @ptrCast(formWindow.ptr), @ptrCast(object.ptr), newName_str, oldName_str);
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitNavigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` objectName: []const u8 `
    ///
    /// ` signalSignature: []const u8 `
    ///
    /// ` parameterNames: []const []const u8 `
    ///
    pub fn EmitNavigateToSlot(self: QDesignerIntegration, allocator: std.mem.Allocator, objectName: []const u8, signalSignature: []const u8, parameterNames: []const []const u8) void {
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
        for (parameterNames, 0..parameterNames.len) |item, i|
            parameterNames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const parameterNames_list = qtc.libqt_list{
            .len = parameterNames.len,
            .data = parameterNames_arr.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitNavigateToSlot(@ptrCast(self.ptr), objectName_str, signalSignature_str, parameterNames_list);
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitNavigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` slotSignature: []const u8 `
    ///
    pub fn EmitNavigateToSlot2(self: QDesignerIntegration, slotSignature: []const u8) void {
        const slotSignature_str = qtc.libqt_string{
            .len = slotSignature.len,
            .data = slotSignature.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitNavigateToSlot2(@ptrCast(self.ptr), slotSignature_str);
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitHelpRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` manual: []const u8 `
    ///
    /// ` document: []const u8 `
    ///
    pub fn EmitHelpRequested(self: QDesignerIntegration, manual: []const u8, document: []const u8) void {
        const manual_str = qtc.libqt_string{
            .len = manual.len,
            .data = manual.ptr,
        };
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitHelpRequested(@ptrCast(self.ptr), manual_str, document_str);
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#propertyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn PropertyChanged(self: QDesignerIntegration, formWindow: anytype, name: []const u8, value: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_PropertyChanged(@ptrCast(self.ptr), @ptrCast(formWindow.ptr), name_str, @ptrCast(value.ptr));
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#objectNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    /// ` object: QObject `
    ///
    /// ` newName: []const u8 `
    ///
    /// ` oldName: []const u8 `
    ///
    pub fn ObjectNameChanged(self: QDesignerIntegration, formWindow: anytype, object: anytype, newName: []const u8, oldName: []const u8) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        comptime _ = @TypeOf(object)._is_QObject;
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        const oldName_str = qtc.libqt_string{
            .len = oldName.len,
            .data = oldName.ptr,
        };
        qtc.QDesignerIntegrationInterface_ObjectNameChanged(@ptrCast(self.ptr), @ptrCast(formWindow.ptr), @ptrCast(object.ptr), newName_str, oldName_str);
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#helpRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` manual: []const u8 `
    ///
    /// ` document: []const u8 `
    ///
    pub fn HelpRequested(self: QDesignerIntegration, manual: []const u8, document: []const u8) void {
        const manual_str = qtc.libqt_string{
            .len = manual.len,
            .data = manual.ptr,
        };
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.QDesignerIntegrationInterface_HelpRequested(@ptrCast(self.ptr), manual_str, document_str);
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#navigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` objectName: []const u8 `
    ///
    /// ` signalSignature: []const u8 `
    ///
    /// ` parameterNames: []const []const u8 `
    ///
    pub fn NavigateToSlot(self: QDesignerIntegration, allocator: std.mem.Allocator, objectName: []const u8, signalSignature: []const u8, parameterNames: []const []const u8) void {
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
        for (parameterNames, 0..parameterNames.len) |item, i|
            parameterNames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const parameterNames_list = qtc.libqt_list{
            .len = parameterNames.len,
            .data = parameterNames_arr.ptr,
        };
        qtc.QDesignerIntegrationInterface_NavigateToSlot(@ptrCast(self.ptr), objectName_str, signalSignature_str, parameterNames_list);
    }

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#navigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` slotSignature: []const u8 `
    ///
    pub fn NavigateToSlot2(self: QDesignerIntegration, slotSignature: []const u8) void {
        const slotSignature_str = qtc.libqt_string{
            .len = slotSignature.len,
            .data = slotSignature.ptr,
        };
        qtc.QDesignerIntegrationInterface_NavigateToSlot2(@ptrCast(self.ptr), slotSignature_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QDesignerIntegration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
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
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QDesignerIntegration, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn IsWidgetType(self: QDesignerIntegration) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn IsWindowType(self: QDesignerIntegration) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn IsQuickItemType(self: QDesignerIntegration) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn SignalsBlocked(self: QDesignerIntegration) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QDesignerIntegration, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn Thread(self: QDesignerIntegration) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDesignerIntegration, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QDesignerIntegration, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QDesignerIntegration, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QDesignerIntegration, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QDesignerIntegration, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QDesignerIntegration, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdesignerintegration.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QDesignerIntegration, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QDesignerIntegration, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QDesignerIntegration, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDesignerIntegration, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn Disconnect3(self: QDesignerIntegration) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QDesignerIntegration, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn DumpObjectTree(self: QDesignerIntegration) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn DumpObjectInfo(self: QDesignerIntegration) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QDesignerIntegration, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDesignerIntegration, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QDesignerIntegration, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QDesignerIntegration `
    ///
    pub fn BindingStorage(self: QDesignerIntegration) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn BindingStorage2(self: QDesignerIntegration) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn Destroyed(self: QDesignerIntegration) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn Parent(self: QDesignerIntegration) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QDesignerIntegration, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn DeleteLater(self: QDesignerIntegration) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QDesignerIntegration, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QDesignerIntegration, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDesignerIntegration, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDesignerIntegration, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QDesignerIntegration, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDesignerIntegration, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDesignerIntegration, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDesignerIntegration, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDesignerIntegration, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerIntegration_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QDesignerIntegration, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerIntegration_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QEvent) callconv(.c) bool) void {
        qtc.QDesignerIntegration_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDesignerIntegration, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerIntegration_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QDesignerIntegration, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDesignerIntegration_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDesignerIntegration_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QDesignerIntegration, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDesignerIntegration_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QDesignerIntegration, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDesignerIntegration_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QTimerEvent) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QDesignerIntegration, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDesignerIntegration_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QDesignerIntegration, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDesignerIntegration_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QChildEvent) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QDesignerIntegration, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDesignerIntegration_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QDesignerIntegration, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDesignerIntegration_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QEvent) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QDesignerIntegration, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegration_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QDesignerIntegration, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegration_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QDesignerIntegration, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegration_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QDesignerIntegration, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegration_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn Sender(self: QDesignerIntegration) QObject {
        return .{ .ptr = qtc.QDesignerIntegration_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn SuperSender(self: QDesignerIntegration) QObject {
        return .{ .ptr = qtc.QDesignerIntegration_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QDesignerIntegration, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDesignerIntegration_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn SenderSignalIndex(self: QDesignerIntegration) i32 {
        return qtc.QDesignerIntegration_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn SuperSenderSignalIndex(self: QDesignerIntegration) i32 {
        return qtc.QDesignerIntegration_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QDesignerIntegration, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QDesignerIntegration, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerIntegration_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QDesignerIntegration, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerIntegration_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QDesignerIntegration, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerIntegration_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QDesignerIntegration, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerIntegration_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration`
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QMetaMethod) callconv(.c) bool) void {
        qtc.QDesignerIntegration_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#dtor.QDesignerIntegration)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn Delete(self: QDesignerIntegration) void {
        qtc.QDesignerIntegration_Delete(@ptrCast(self.ptr));
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
