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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerIntegrationInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _core: QDesignerFormEditorInterface `
    ///
    pub fn new(_core: anytype) QDesignerIntegrationInterface {
        comptime _ = @TypeOf(_core)._is_QDesignerFormEditorInterface;
        return .{ .ptr = qtc.QDesignerIntegrationInterface_new(@ptrCast(_core.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDesignerIntegrationInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _core: QDesignerFormEditorInterface `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_core: anytype, _parent: anytype) QDesignerIntegrationInterface {
        comptime _ = @TypeOf(_core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerIntegrationInterface_new2(@ptrCast(_core.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn metaObject(self: QDesignerIntegrationInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerIntegrationInterface_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDesignerIntegrationInterface_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn superMetaObject(self: QDesignerIntegrationInterface) QMetaObject {
        return .{ .ptr = qtc.QDesignerIntegrationInterface_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDesignerIntegrationInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerIntegrationInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerIntegrationInterface_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDesignerIntegrationInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerIntegrationInterface_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QDesignerIntegrationInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerIntegrationInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn (self: QDesignerIntegrationInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QDesignerIntegrationInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerIntegrationInterface_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegrationInterface.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `core` instead
    ///
    pub const Core = core;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn core(self: QDesignerIntegrationInterface) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerIntegrationInterface_Core(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `containerWindow` instead
    ///
    pub const ContainerWindow = containerWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#containerWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` widget: QWidget `
    ///
    pub fn containerWindow(self: QDesignerIntegrationInterface, widget: anytype) QWidget {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegrationInterface_ContainerWindow(@ptrCast(self.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onContainerWindow` instead
    ///
    pub const OnContainerWindow = onContainerWindow;

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
    pub fn onContainerWindow(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QWidget) callconv(.c) QWidget) void {
        qtc.QDesignerIntegrationInterface_OnContainerWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContainerWindow` instead
    ///
    pub const SuperContainerWindow = superContainerWindow;

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
    pub fn superContainerWindow(self: QDesignerIntegrationInterface, widget: anytype) QWidget {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegrationInterface_SuperContainerWindow(@ptrCast(self.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `createResourceBrowser` instead
    ///
    pub const CreateResourceBrowser = createResourceBrowser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#createResourceBrowser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn createResourceBrowser(self: QDesignerIntegrationInterface, _parent: anytype) QDesignerResourceBrowserInterface {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegrationInterface_CreateResourceBrowser(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateResourceBrowser` instead
    ///
    pub const OnCreateResourceBrowser = onCreateResourceBrowser;

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
    pub fn onCreateResourceBrowser(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QWidget) callconv(.c) QDesignerResourceBrowserInterface) void {
        qtc.QDesignerIntegrationInterface_OnCreateResourceBrowser(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateResourceBrowser` instead
    ///
    pub const SuperCreateResourceBrowser = superCreateResourceBrowser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#createResourceBrowser)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn superCreateResourceBrowser(self: QDesignerIntegrationInterface, _parent: anytype) QDesignerResourceBrowserInterface {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegrationInterface_SuperCreateResourceBrowser(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `headerSuffix` instead
    ///
    pub const HeaderSuffix = headerSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#headerSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn headerSuffix(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegrationInterface_HeaderSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegrationInterface.headerSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onHeaderSuffix` instead
    ///
    pub const OnHeaderSuffix = onHeaderSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#headerSuffix)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onHeaderSuffix(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerIntegrationInterface_OnHeaderSuffix(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHeaderSuffix` instead
    ///
    pub const SuperHeaderSuffix = superHeaderSuffix;

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
    pub fn superHeaderSuffix(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegrationInterface_SuperHeaderSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegrationInterface.headerSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHeaderSuffix` instead
    ///
    pub const SetHeaderSuffix = setHeaderSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` _headerSuffix: []const u8 `
    ///
    pub fn setHeaderSuffix(self: QDesignerIntegrationInterface, _headerSuffix: []const u8) void {
        const headerSuffix_str = qtc.libqt_string{
            .len = _headerSuffix.len,
            .data = _headerSuffix.ptr,
        };
        qtc.QDesignerIntegrationInterface_SetHeaderSuffix(@ptrCast(self.ptr), headerSuffix_str);
    }

    /// ### DEPRECATED: Use `onSetHeaderSuffix` instead
    ///
    pub const OnSetHeaderSuffix = onSetHeaderSuffix;

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
    pub fn onSetHeaderSuffix(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetHeaderSuffix(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHeaderSuffix` instead
    ///
    pub const SuperSetHeaderSuffix = superSetHeaderSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderSuffix)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` _headerSuffix: []const u8 `
    ///
    pub fn superSetHeaderSuffix(self: QDesignerIntegrationInterface, _headerSuffix: []const u8) void {
        const headerSuffix_str = qtc.libqt_string{
            .len = _headerSuffix.len,
            .data = _headerSuffix.ptr,
        };
        qtc.QDesignerIntegrationInterface_SuperSetHeaderSuffix(@ptrCast(self.ptr), headerSuffix_str);
    }

    /// ### DEPRECATED: Use `isHeaderLowercase` instead
    ///
    pub const IsHeaderLowercase = isHeaderLowercase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#isHeaderLowercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn isHeaderLowercase(self: QDesignerIntegrationInterface) bool {
        return qtc.QDesignerIntegrationInterface_IsHeaderLowercase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsHeaderLowercase` instead
    ///
    pub const OnIsHeaderLowercase = onIsHeaderLowercase;

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
    pub fn onIsHeaderLowercase(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerIntegrationInterface_OnIsHeaderLowercase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsHeaderLowercase` instead
    ///
    pub const SuperIsHeaderLowercase = superIsHeaderLowercase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#isHeaderLowercase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn superIsHeaderLowercase(self: QDesignerIntegrationInterface) bool {
        return qtc.QDesignerIntegrationInterface_SuperIsHeaderLowercase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHeaderLowercase` instead
    ///
    pub const SetHeaderLowercase = setHeaderLowercase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setHeaderLowercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` headerLowerCase: bool `
    ///
    pub fn setHeaderLowercase(self: QDesignerIntegrationInterface, headerLowerCase: bool) void {
        qtc.QDesignerIntegrationInterface_SetHeaderLowercase(@ptrCast(self.ptr), headerLowerCase);
    }

    /// ### DEPRECATED: Use `onSetHeaderLowercase` instead
    ///
    pub const OnSetHeaderLowercase = onSetHeaderLowercase;

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
    pub fn onSetHeaderLowercase(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, bool) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetHeaderLowercase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHeaderLowercase` instead
    ///
    pub const SuperSetHeaderLowercase = superSetHeaderLowercase;

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
    pub fn superSetHeaderLowercase(self: QDesignerIntegrationInterface, headerLowerCase: bool) void {
        qtc.QDesignerIntegrationInterface_SuperSetHeaderLowercase(@ptrCast(self.ptr), headerLowerCase);
    }

    /// ### DEPRECATED: Use `features` instead
    ///
    pub const Features = features;

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
    pub fn features(self: QDesignerIntegrationInterface) i32 {
        return qtc.QDesignerIntegrationInterface_Features(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFeatures` instead
    ///
    pub const OnFeatures = onFeatures;

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
    pub fn onFeatures(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnFeatures(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFeatures` instead
    ///
    pub const SuperFeatures = superFeatures;

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
    pub fn superFeatures(self: QDesignerIntegrationInterface) i32 {
        return qtc.QDesignerIntegrationInterface_SuperFeatures(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasFeature` instead
    ///
    pub const HasFeature = hasFeature;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#hasFeature)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn hasFeature(self: QDesignerIntegrationInterface, f: i32) bool {
        return qtc.QDesignerIntegrationInterface_HasFeature(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `resourceFileWatcherBehaviour` instead
    ///
    pub const ResourceFileWatcherBehaviour = resourceFileWatcherBehaviour;

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
    pub fn resourceFileWatcherBehaviour(self: QDesignerIntegrationInterface) i32 {
        return qtc.QDesignerIntegrationInterface_ResourceFileWatcherBehaviour(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onResourceFileWatcherBehaviour` instead
    ///
    pub const OnResourceFileWatcherBehaviour = onResourceFileWatcherBehaviour;

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
    pub fn onResourceFileWatcherBehaviour(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResourceFileWatcherBehaviour` instead
    ///
    pub const SuperResourceFileWatcherBehaviour = superResourceFileWatcherBehaviour;

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
    pub fn superResourceFileWatcherBehaviour(self: QDesignerIntegrationInterface) i32 {
        return qtc.QDesignerIntegrationInterface_SuperResourceFileWatcherBehaviour(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setResourceFileWatcherBehaviour` instead
    ///
    pub const SetResourceFileWatcherBehaviour = setResourceFileWatcherBehaviour;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setResourceFileWatcherBehaviour)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` behaviour: abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn setResourceFileWatcherBehaviour(self: QDesignerIntegrationInterface, behaviour: i32) void {
        qtc.QDesignerIntegrationInterface_SetResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(behaviour));
    }

    /// ### DEPRECATED: Use `onSetResourceFileWatcherBehaviour` instead
    ///
    pub const OnSetResourceFileWatcherBehaviour = onSetResourceFileWatcherBehaviour;

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
    pub fn onSetResourceFileWatcherBehaviour(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, i32) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetResourceFileWatcherBehaviour` instead
    ///
    pub const SuperSetResourceFileWatcherBehaviour = superSetResourceFileWatcherBehaviour;

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
    pub fn superSetResourceFileWatcherBehaviour(self: QDesignerIntegrationInterface, behaviour: i32) void {
        qtc.QDesignerIntegrationInterface_SuperSetResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(behaviour));
    }

    /// ### DEPRECATED: Use `contextHelpId` instead
    ///
    pub const ContextHelpId = contextHelpId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#contextHelpId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contextHelpId(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegrationInterface_ContextHelpId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegrationInterface.contextHelpId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onContextHelpId` instead
    ///
    pub const OnContextHelpId = onContextHelpId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#contextHelpId)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onContextHelpId(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerIntegrationInterface_OnContextHelpId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContextHelpId` instead
    ///
    pub const SuperContextHelpId = superContextHelpId;

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
    pub fn superContextHelpId(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegrationInterface_SuperContextHelpId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegrationInterface.contextHelpId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `emitObjectNameChanged` instead
    ///
    pub const EmitObjectNameChanged = emitObjectNameChanged;

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
    pub fn emitObjectNameChanged(self: QDesignerIntegrationInterface, formWindow: anytype, object: anytype, newName: []const u8, oldName: []const u8) void {
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

    /// ### DEPRECATED: Use `emitNavigateToSlot` instead
    ///
    pub const EmitNavigateToSlot = emitNavigateToSlot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitNavigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _objectName: []const u8 `
    ///
    /// ` signalSignature: []const u8 `
    ///
    /// ` parameterNames: []const []const u8 `
    ///
    pub fn emitNavigateToSlot(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator, _objectName: []const u8, signalSignature: []const u8, parameterNames: []const []const u8) void {
        const objectName_str = qtc.libqt_string{
            .len = _objectName.len,
            .data = _objectName.ptr,
        };
        const signalSignature_str = qtc.libqt_string{
            .len = signalSignature.len,
            .data = signalSignature.ptr,
        };
        const parameterNames_arr = allocator.alloc(qtc.libqt_string, parameterNames.len) catch @panic("QDesignerIntegrationInterface.emitNavigateToSlot: Memory allocation failed");
        defer allocator.free(parameterNames_arr);
        for (parameterNames, 0..parameterNames.len) |str_item, i|
            parameterNames_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const parameterNames_list = qtc.libqt_list{
            .len = parameterNames.len,
            .data = parameterNames_arr.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitNavigateToSlot(@ptrCast(self.ptr), objectName_str, signalSignature_str, parameterNames_list);
    }

    /// ### DEPRECATED: Use `emitNavigateToSlot2` instead
    ///
    pub const EmitNavigateToSlot2 = emitNavigateToSlot2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#emitNavigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` slotSignature: []const u8 `
    ///
    pub fn emitNavigateToSlot2(self: QDesignerIntegrationInterface, slotSignature: []const u8) void {
        const slotSignature_str = qtc.libqt_string{
            .len = slotSignature.len,
            .data = slotSignature.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitNavigateToSlot2(@ptrCast(self.ptr), slotSignature_str);
    }

    /// ### DEPRECATED: Use `emitHelpRequested` instead
    ///
    pub const EmitHelpRequested = emitHelpRequested;

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
    pub fn emitHelpRequested(self: QDesignerIntegrationInterface, manual: []const u8, document: []const u8) void {
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

    /// ### DEPRECATED: Use `propertyChanged` instead
    ///
    pub const PropertyChanged = propertyChanged;

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
    pub fn propertyChanged(self: QDesignerIntegrationInterface, formWindow: anytype, name: []const u8, value: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_PropertyChanged(@ptrCast(self.ptr), @ptrCast(formWindow.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `objectNameChanged` instead
    ///
    pub const ObjectNameChanged = objectNameChanged;

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
    pub fn objectNameChanged(self: QDesignerIntegrationInterface, formWindow: anytype, object: anytype, newName: []const u8, oldName: []const u8) void {
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

    /// ### DEPRECATED: Use `helpRequested` instead
    ///
    pub const HelpRequested = helpRequested;

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
    pub fn helpRequested(self: QDesignerIntegrationInterface, manual: []const u8, document: []const u8) void {
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

    /// ### DEPRECATED: Use `navigateToSlot` instead
    ///
    pub const NavigateToSlot = navigateToSlot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#navigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _objectName: []const u8 `
    ///
    /// ` signalSignature: []const u8 `
    ///
    /// ` parameterNames: []const []const u8 `
    ///
    pub fn navigateToSlot(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator, _objectName: []const u8, signalSignature: []const u8, parameterNames: []const []const u8) void {
        const objectName_str = qtc.libqt_string{
            .len = _objectName.len,
            .data = _objectName.ptr,
        };
        const signalSignature_str = qtc.libqt_string{
            .len = signalSignature.len,
            .data = signalSignature.ptr,
        };
        const parameterNames_arr = allocator.alloc(qtc.libqt_string, parameterNames.len) catch @panic("QDesignerIntegrationInterface.navigateToSlot: Memory allocation failed");
        defer allocator.free(parameterNames_arr);
        for (parameterNames, 0..parameterNames.len) |str_item, i|
            parameterNames_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const parameterNames_list = qtc.libqt_list{
            .len = parameterNames.len,
            .data = parameterNames_arr.ptr,
        };
        qtc.QDesignerIntegrationInterface_NavigateToSlot(@ptrCast(self.ptr), objectName_str, signalSignature_str, parameterNames_list);
    }

    /// ### DEPRECATED: Use `navigateToSlot2` instead
    ///
    pub const NavigateToSlot2 = navigateToSlot2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#navigateToSlot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` slotSignature: []const u8 `
    ///
    pub fn navigateToSlot2(self: QDesignerIntegrationInterface, slotSignature: []const u8) void {
        const slotSignature_str = qtc.libqt_string{
            .len = slotSignature.len,
            .data = slotSignature.ptr,
        };
        qtc.QDesignerIntegrationInterface_NavigateToSlot2(@ptrCast(self.ptr), slotSignature_str);
    }

    /// ### DEPRECATED: Use `setFeatures` instead
    ///
    pub const SetFeatures = setFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn setFeatures(self: QDesignerIntegrationInterface, f: i32) void {
        qtc.QDesignerIntegrationInterface_SetFeatures(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `onSetFeatures` instead
    ///
    pub const OnSetFeatures = onSetFeatures;

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
    pub fn onSetFeatures(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, i32) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetFeatures(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFeatures` instead
    ///
    pub const SuperSetFeatures = superSetFeatures;

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
    pub fn superSetFeatures(self: QDesignerIntegrationInterface, f: i32) void {
        qtc.QDesignerIntegrationInterface_SuperSetFeatures(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `updateProperty` instead
    ///
    pub const UpdateProperty = updateProperty;

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
    pub fn updateProperty(self: QDesignerIntegrationInterface, name: []const u8, value: anytype, enableSubPropertyHandling: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_UpdateProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr), enableSubPropertyHandling);
    }

    /// ### DEPRECATED: Use `onUpdateProperty` instead
    ///
    pub const OnUpdateProperty = onUpdateProperty;

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
    pub fn onUpdateProperty(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8, QVariant, bool) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateProperty` instead
    ///
    pub const SuperUpdateProperty = superUpdateProperty;

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
    pub fn superUpdateProperty(self: QDesignerIntegrationInterface, name: []const u8, value: anytype, enableSubPropertyHandling: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_SuperUpdateProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr), enableSubPropertyHandling);
    }

    /// ### DEPRECATED: Use `updateProperty2` instead
    ///
    pub const UpdateProperty2 = updateProperty2;

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
    pub fn updateProperty2(self: QDesignerIntegrationInterface, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_UpdateProperty2(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateProperty2` instead
    ///
    pub const OnUpdateProperty2 = onUpdateProperty2;

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
    pub fn onUpdateProperty2(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateProperty2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateProperty2` instead
    ///
    pub const SuperUpdateProperty2 = superUpdateProperty2;

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
    pub fn superUpdateProperty2(self: QDesignerIntegrationInterface, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_SuperUpdateProperty2(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `resetProperty` instead
    ///
    pub const ResetProperty = resetProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#resetProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn resetProperty(self: QDesignerIntegrationInterface, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_ResetProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onResetProperty` instead
    ///
    pub const OnResetProperty = onResetProperty;

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
    pub fn onResetProperty(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnResetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResetProperty` instead
    ///
    pub const SuperResetProperty = superResetProperty;

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
    pub fn superResetProperty(self: QDesignerIntegrationInterface, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_SuperResetProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `addDynamicProperty` instead
    ///
    pub const AddDynamicProperty = addDynamicProperty;

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
    pub fn addDynamicProperty(self: QDesignerIntegrationInterface, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_AddDynamicProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onAddDynamicProperty` instead
    ///
    pub const OnAddDynamicProperty = onAddDynamicProperty;

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
    pub fn onAddDynamicProperty(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnAddDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAddDynamicProperty` instead
    ///
    pub const SuperAddDynamicProperty = superAddDynamicProperty;

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
    pub fn superAddDynamicProperty(self: QDesignerIntegrationInterface, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_SuperAddDynamicProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `removeDynamicProperty` instead
    ///
    pub const RemoveDynamicProperty = removeDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#removeDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn removeDynamicProperty(self: QDesignerIntegrationInterface, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_RemoveDynamicProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onRemoveDynamicProperty` instead
    ///
    pub const OnRemoveDynamicProperty = onRemoveDynamicProperty;

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
    pub fn onRemoveDynamicProperty(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnRemoveDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveDynamicProperty` instead
    ///
    pub const SuperRemoveDynamicProperty = superRemoveDynamicProperty;

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
    pub fn superRemoveDynamicProperty(self: QDesignerIntegrationInterface, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegrationInterface_SuperRemoveDynamicProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `updateActiveFormWindow` instead
    ///
    pub const UpdateActiveFormWindow = updateActiveFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateActiveFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn updateActiveFormWindow(self: QDesignerIntegrationInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegrationInterface_UpdateActiveFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateActiveFormWindow` instead
    ///
    pub const OnUpdateActiveFormWindow = onUpdateActiveFormWindow;

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
    pub fn onUpdateActiveFormWindow(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateActiveFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateActiveFormWindow` instead
    ///
    pub const SuperUpdateActiveFormWindow = superUpdateActiveFormWindow;

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
    pub fn superUpdateActiveFormWindow(self: QDesignerIntegrationInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegrationInterface_SuperUpdateActiveFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### DEPRECATED: Use `setupFormWindow` instead
    ///
    pub const SetupFormWindow = setupFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#setupFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn setupFormWindow(self: QDesignerIntegrationInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegrationInterface_SetupFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### DEPRECATED: Use `onSetupFormWindow` instead
    ///
    pub const OnSetupFormWindow = onSetupFormWindow;

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
    pub fn onSetupFormWindow(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnSetupFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetupFormWindow` instead
    ///
    pub const SuperSetupFormWindow = superSetupFormWindow;

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
    pub fn superSetupFormWindow(self: QDesignerIntegrationInterface, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegrationInterface_SuperSetupFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### DEPRECATED: Use `updateSelection` instead
    ///
    pub const UpdateSelection = updateSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn updateSelection(self: QDesignerIntegrationInterface) void {
        qtc.QDesignerIntegrationInterface_UpdateSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateSelection` instead
    ///
    pub const OnUpdateSelection = onUpdateSelection;

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
    pub fn onUpdateSelection(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateSelection` instead
    ///
    pub const SuperUpdateSelection = superUpdateSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn superUpdateSelection(self: QDesignerIntegrationInterface) void {
        qtc.QDesignerIntegrationInterface_SuperUpdateSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updateCustomWidgetPlugins` instead
    ///
    pub const UpdateCustomWidgetPlugins = updateCustomWidgetPlugins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateCustomWidgetPlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn updateCustomWidgetPlugins(self: QDesignerIntegrationInterface) void {
        qtc.QDesignerIntegrationInterface_UpdateCustomWidgetPlugins(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateCustomWidgetPlugins` instead
    ///
    pub const OnUpdateCustomWidgetPlugins = onUpdateCustomWidgetPlugins;

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
    pub fn onUpdateCustomWidgetPlugins(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnUpdateCustomWidgetPlugins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateCustomWidgetPlugins` instead
    ///
    pub const SuperUpdateCustomWidgetPlugins = superUpdateCustomWidgetPlugins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#updateCustomWidgetPlugins)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn superUpdateCustomWidgetPlugins(self: QDesignerIntegrationInterface) void {
        qtc.QDesignerIntegrationInterface_SuperUpdateCustomWidgetPlugins(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegrationInterface.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegrationInterface.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegrationInterface.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: QDesignerIntegrationInterface, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn isWidgetType(self: QDesignerIntegrationInterface) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn isWindowType(self: QDesignerIntegrationInterface) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn isQuickItemType(self: QDesignerIntegrationInterface) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn signalsBlocked(self: QDesignerIntegrationInterface) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QDesignerIntegrationInterface, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn thread(self: QDesignerIntegrationInterface) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDesignerIntegrationInterface, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QDesignerIntegrationInterface, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QDesignerIntegrationInterface, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QDesignerIntegrationInterface, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QDesignerIntegrationInterface, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDesignerIntegrationInterface.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDesignerIntegrationInterface, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QDesignerIntegrationInterface, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QDesignerIntegrationInterface, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDesignerIntegrationInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn disconnect3(self: QDesignerIntegrationInterface) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QDesignerIntegrationInterface, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn dumpObjectTree(self: QDesignerIntegrationInterface) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn dumpObjectInfo(self: QDesignerIntegrationInterface) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: QDesignerIntegrationInterface, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: QDesignerIntegrationInterface, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QDesignerIntegrationInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDesignerIntegrationInterface.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDesignerIntegrationInterface.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn bindingStorage(self: QDesignerIntegrationInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn bindingStorage2(self: QDesignerIntegrationInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn destroyed(self: QDesignerIntegrationInterface) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn parent(self: QDesignerIntegrationInterface) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QDesignerIntegrationInterface, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn deleteLater(self: QDesignerIntegrationInterface) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QDesignerIntegrationInterface, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QDesignerIntegrationInterface, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDesignerIntegrationInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QDesignerIntegrationInterface, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QDesignerIntegrationInterface, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QDesignerIntegrationInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QDesignerIntegrationInterface, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QDesignerIntegrationInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDesignerIntegrationInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerIntegrationInterface_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDesignerIntegrationInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerIntegrationInterface_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QEvent) callconv(.c) bool) void {
        qtc.QDesignerIntegrationInterface_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDesignerIntegrationInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerIntegrationInterface_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDesignerIntegrationInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerIntegrationInterface_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDesignerIntegrationInterface_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDesignerIntegrationInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDesignerIntegrationInterface_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDesignerIntegrationInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDesignerIntegrationInterface_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QTimerEvent) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDesignerIntegrationInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDesignerIntegrationInterface_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDesignerIntegrationInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDesignerIntegrationInterface_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QChildEvent) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDesignerIntegrationInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDesignerIntegrationInterface_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDesignerIntegrationInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDesignerIntegrationInterface_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QEvent) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QDesignerIntegrationInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegrationInterface_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QDesignerIntegrationInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegrationInterface_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QDesignerIntegrationInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegrationInterface_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QDesignerIntegrationInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegrationInterface_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerIntegrationInterface_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QDesignerIntegrationInterface) QObject {
        return .{ .ptr = qtc.QDesignerIntegrationInterface_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QDesignerIntegrationInterface) QObject {
        return .{ .ptr = qtc.QDesignerIntegrationInterface_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDesignerIntegrationInterface_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QDesignerIntegrationInterface) i32 {
        return qtc.QDesignerIntegrationInterface_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QDesignerIntegrationInterface) i32 {
        return qtc.QDesignerIntegrationInterface_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QDesignerIntegrationInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QDesignerIntegrationInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerIntegrationInterface_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QDesignerIntegrationInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerIntegrationInterface_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerIntegrationInterface_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QDesignerIntegrationInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerIntegrationInterface_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QDesignerIntegrationInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerIntegrationInterface_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QDesignerIntegrationInterface, callback: *const fn (QDesignerIntegrationInterface, QMetaMethod) callconv(.c) bool) void {
        qtc.QDesignerIntegrationInterface_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#dtor.QDesignerIntegrationInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerIntegrationInterface `
    ///
    pub fn delete(self: QDesignerIntegrationInterface) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerIntegration object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _core: QDesignerFormEditorInterface `
    ///
    pub fn new(_core: anytype) QDesignerIntegration {
        comptime _ = @TypeOf(_core)._is_QDesignerFormEditorInterface;
        return .{ .ptr = qtc.QDesignerIntegration_new(@ptrCast(_core.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDesignerIntegration object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _core: QDesignerFormEditorInterface `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_core: anytype, _parent: anytype) QDesignerIntegration {
        comptime _ = @TypeOf(_core)._is_QDesignerFormEditorInterface;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDesignerIntegration_new2(@ptrCast(_core.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn metaObject(self: QDesignerIntegration) QMetaObject {
        return .{ .ptr = qtc.QDesignerIntegration_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QDesignerIntegration, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDesignerIntegration_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn superMetaObject(self: QDesignerIntegration) QMetaObject {
        return .{ .ptr = qtc.QDesignerIntegration_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDesignerIntegration, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerIntegration_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDesignerIntegration_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDesignerIntegration, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDesignerIntegration_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QDesignerIntegration, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerIntegration_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn (self: QDesignerIntegration, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QDesignerIntegration, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDesignerIntegration_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegration.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `headerSuffix` instead
    ///
    pub const HeaderSuffix = headerSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#headerSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn headerSuffix(self: QDesignerIntegration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegration_HeaderSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegration.headerSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onHeaderSuffix` instead
    ///
    pub const OnHeaderSuffix = onHeaderSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#headerSuffix)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onHeaderSuffix(self: QDesignerIntegration, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerIntegration_OnHeaderSuffix(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHeaderSuffix` instead
    ///
    pub const SuperHeaderSuffix = superHeaderSuffix;

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
    pub fn superHeaderSuffix(self: QDesignerIntegration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegration_SuperHeaderSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegration.headerSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHeaderSuffix` instead
    ///
    pub const SetHeaderSuffix = setHeaderSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` _headerSuffix: []const u8 `
    ///
    pub fn setHeaderSuffix(self: QDesignerIntegration, _headerSuffix: []const u8) void {
        const headerSuffix_str = qtc.libqt_string{
            .len = _headerSuffix.len,
            .data = _headerSuffix.ptr,
        };
        qtc.QDesignerIntegration_SetHeaderSuffix(@ptrCast(self.ptr), headerSuffix_str);
    }

    /// ### DEPRECATED: Use `onSetHeaderSuffix` instead
    ///
    pub const OnSetHeaderSuffix = onSetHeaderSuffix;

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
    pub fn onSetHeaderSuffix(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetHeaderSuffix(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHeaderSuffix` instead
    ///
    pub const SuperSetHeaderSuffix = superSetHeaderSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderSuffix)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` _headerSuffix: []const u8 `
    ///
    pub fn superSetHeaderSuffix(self: QDesignerIntegration, _headerSuffix: []const u8) void {
        const headerSuffix_str = qtc.libqt_string{
            .len = _headerSuffix.len,
            .data = _headerSuffix.ptr,
        };
        qtc.QDesignerIntegration_SuperSetHeaderSuffix(@ptrCast(self.ptr), headerSuffix_str);
    }

    /// ### DEPRECATED: Use `isHeaderLowercase` instead
    ///
    pub const IsHeaderLowercase = isHeaderLowercase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#isHeaderLowercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn isHeaderLowercase(self: QDesignerIntegration) bool {
        return qtc.QDesignerIntegration_IsHeaderLowercase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsHeaderLowercase` instead
    ///
    pub const OnIsHeaderLowercase = onIsHeaderLowercase;

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
    pub fn onIsHeaderLowercase(self: QDesignerIntegration, callback: *const fn () callconv(.c) bool) void {
        qtc.QDesignerIntegration_OnIsHeaderLowercase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsHeaderLowercase` instead
    ///
    pub const SuperIsHeaderLowercase = superIsHeaderLowercase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#isHeaderLowercase)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn superIsHeaderLowercase(self: QDesignerIntegration) bool {
        return qtc.QDesignerIntegration_SuperIsHeaderLowercase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHeaderLowercase` instead
    ///
    pub const SetHeaderLowercase = setHeaderLowercase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setHeaderLowercase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` headerLowerCase: bool `
    ///
    pub fn setHeaderLowercase(self: QDesignerIntegration, headerLowerCase: bool) void {
        qtc.QDesignerIntegration_SetHeaderLowercase(@ptrCast(self.ptr), headerLowerCase);
    }

    /// ### DEPRECATED: Use `onSetHeaderLowercase` instead
    ///
    pub const OnSetHeaderLowercase = onSetHeaderLowercase;

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
    pub fn onSetHeaderLowercase(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, bool) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetHeaderLowercase(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHeaderLowercase` instead
    ///
    pub const SuperSetHeaderLowercase = superSetHeaderLowercase;

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
    pub fn superSetHeaderLowercase(self: QDesignerIntegration, headerLowerCase: bool) void {
        qtc.QDesignerIntegration_SuperSetHeaderLowercase(@ptrCast(self.ptr), headerLowerCase);
    }

    /// ### DEPRECATED: Use `features` instead
    ///
    pub const Features = features;

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
    pub fn features(self: QDesignerIntegration) i32 {
        return qtc.QDesignerIntegration_Features(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFeatures` instead
    ///
    pub const OnFeatures = onFeatures;

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
    pub fn onFeatures(self: QDesignerIntegration, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnFeatures(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFeatures` instead
    ///
    pub const SuperFeatures = superFeatures;

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
    pub fn superFeatures(self: QDesignerIntegration) i32 {
        return qtc.QDesignerIntegration_SuperFeatures(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFeatures` instead
    ///
    pub const SetFeatures = setFeatures;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` f: flag of abstractintegration_enums.FeatureFlag `
    ///
    pub fn setFeatures(self: QDesignerIntegration, f: i32) void {
        qtc.QDesignerIntegration_SetFeatures(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `onSetFeatures` instead
    ///
    pub const OnSetFeatures = onSetFeatures;

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
    pub fn onSetFeatures(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, i32) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetFeatures(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFeatures` instead
    ///
    pub const SuperSetFeatures = superSetFeatures;

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
    pub fn superSetFeatures(self: QDesignerIntegration, f: i32) void {
        qtc.QDesignerIntegration_SuperSetFeatures(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `resourceFileWatcherBehaviour` instead
    ///
    pub const ResourceFileWatcherBehaviour = resourceFileWatcherBehaviour;

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
    pub fn resourceFileWatcherBehaviour(self: QDesignerIntegration) i32 {
        return qtc.QDesignerIntegration_ResourceFileWatcherBehaviour(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onResourceFileWatcherBehaviour` instead
    ///
    pub const OnResourceFileWatcherBehaviour = onResourceFileWatcherBehaviour;

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
    pub fn onResourceFileWatcherBehaviour(self: QDesignerIntegration, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResourceFileWatcherBehaviour` instead
    ///
    pub const SuperResourceFileWatcherBehaviour = superResourceFileWatcherBehaviour;

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
    pub fn superResourceFileWatcherBehaviour(self: QDesignerIntegration) i32 {
        return qtc.QDesignerIntegration_SuperResourceFileWatcherBehaviour(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setResourceFileWatcherBehaviour` instead
    ///
    pub const SetResourceFileWatcherBehaviour = setResourceFileWatcherBehaviour;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setResourceFileWatcherBehaviour)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` behaviour: abstractintegration_enums.ResourceFileWatcherBehaviour `
    ///
    pub fn setResourceFileWatcherBehaviour(self: QDesignerIntegration, behaviour: i32) void {
        qtc.QDesignerIntegration_SetResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(behaviour));
    }

    /// ### DEPRECATED: Use `onSetResourceFileWatcherBehaviour` instead
    ///
    pub const OnSetResourceFileWatcherBehaviour = onSetResourceFileWatcherBehaviour;

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
    pub fn onSetResourceFileWatcherBehaviour(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, i32) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetResourceFileWatcherBehaviour` instead
    ///
    pub const SuperSetResourceFileWatcherBehaviour = superSetResourceFileWatcherBehaviour;

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
    pub fn superSetResourceFileWatcherBehaviour(self: QDesignerIntegration, behaviour: i32) void {
        qtc.QDesignerIntegration_SuperSetResourceFileWatcherBehaviour(@ptrCast(self.ptr), @bitCast(behaviour));
    }

    /// ### DEPRECATED: Use `containerWindow` instead
    ///
    pub const ContainerWindow = containerWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#containerWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` widget: QWidget `
    ///
    pub fn containerWindow(self: QDesignerIntegration, widget: anytype) QWidget {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegration_ContainerWindow(@ptrCast(self.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `onContainerWindow` instead
    ///
    pub const OnContainerWindow = onContainerWindow;

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
    pub fn onContainerWindow(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QWidget) callconv(.c) QWidget) void {
        qtc.QDesignerIntegration_OnContainerWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContainerWindow` instead
    ///
    pub const SuperContainerWindow = superContainerWindow;

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
    pub fn superContainerWindow(self: QDesignerIntegration, widget: anytype) QWidget {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegration_SuperContainerWindow(@ptrCast(self.ptr), @ptrCast(widget.ptr)) };
    }

    /// ### DEPRECATED: Use `initializePlugins` instead
    ///
    pub const InitializePlugins = initializePlugins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#initializePlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` formEditor: QDesignerFormEditorInterface `
    ///
    pub fn initializePlugins(formEditor: anytype) void {
        comptime _ = @TypeOf(formEditor)._is_QDesignerFormEditorInterface;
        qtc.QDesignerIntegration_InitializePlugins(@ptrCast(formEditor.ptr));
    }

    /// ### DEPRECATED: Use `createResourceBrowser` instead
    ///
    pub const CreateResourceBrowser = createResourceBrowser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#createResourceBrowser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn createResourceBrowser(self: QDesignerIntegration, _parent: anytype) QDesignerResourceBrowserInterface {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegration_CreateResourceBrowser(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateResourceBrowser` instead
    ///
    pub const OnCreateResourceBrowser = onCreateResourceBrowser;

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
    pub fn onCreateResourceBrowser(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QWidget) callconv(.c) QDesignerResourceBrowserInterface) void {
        qtc.QDesignerIntegration_OnCreateResourceBrowser(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateResourceBrowser` instead
    ///
    pub const SuperCreateResourceBrowser = superCreateResourceBrowser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#createResourceBrowser)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn superCreateResourceBrowser(self: QDesignerIntegration, _parent: anytype) QDesignerResourceBrowserInterface {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QDesignerIntegration_SuperCreateResourceBrowser(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `contextHelpId` instead
    ///
    pub const ContextHelpId = contextHelpId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#contextHelpId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contextHelpId(self: QDesignerIntegration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegration_ContextHelpId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegration.contextHelpId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onContextHelpId` instead
    ///
    pub const OnContextHelpId = onContextHelpId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#contextHelpId)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onContextHelpId(self: QDesignerIntegration, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QDesignerIntegration_OnContextHelpId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContextHelpId` instead
    ///
    pub const SuperContextHelpId = superContextHelpId;

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
    pub fn superContextHelpId(self: QDesignerIntegration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDesignerIntegration_SuperContextHelpId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegration.contextHelpId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `updateProperty` instead
    ///
    pub const UpdateProperty = updateProperty;

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
    pub fn updateProperty(self: QDesignerIntegration, name: []const u8, value: anytype, enableSubPropertyHandling: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegration_UpdateProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr), enableSubPropertyHandling);
    }

    /// ### DEPRECATED: Use `onUpdateProperty` instead
    ///
    pub const OnUpdateProperty = onUpdateProperty;

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
    pub fn onUpdateProperty(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8, QVariant, bool) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateProperty` instead
    ///
    pub const SuperUpdateProperty = superUpdateProperty;

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
    pub fn superUpdateProperty(self: QDesignerIntegration, name: []const u8, value: anytype, enableSubPropertyHandling: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegration_SuperUpdateProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr), enableSubPropertyHandling);
    }

    /// ### DEPRECATED: Use `updateProperty2` instead
    ///
    pub const UpdateProperty2 = updateProperty2;

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
    pub fn updateProperty2(self: QDesignerIntegration, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegration_UpdateProperty2(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateProperty2` instead
    ///
    pub const OnUpdateProperty2 = onUpdateProperty2;

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
    pub fn onUpdateProperty2(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateProperty2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateProperty2` instead
    ///
    pub const SuperUpdateProperty2 = superUpdateProperty2;

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
    pub fn superUpdateProperty2(self: QDesignerIntegration, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegration_SuperUpdateProperty2(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `resetProperty` instead
    ///
    pub const ResetProperty = resetProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#resetProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    pub fn resetProperty(self: QDesignerIntegration, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_ResetProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onResetProperty` instead
    ///
    pub const OnResetProperty = onResetProperty;

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
    pub fn onResetProperty(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnResetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResetProperty` instead
    ///
    pub const SuperResetProperty = superResetProperty;

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
    pub fn superResetProperty(self: QDesignerIntegration, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_SuperResetProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `addDynamicProperty` instead
    ///
    pub const AddDynamicProperty = addDynamicProperty;

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
    pub fn addDynamicProperty(self: QDesignerIntegration, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegration_AddDynamicProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onAddDynamicProperty` instead
    ///
    pub const OnAddDynamicProperty = onAddDynamicProperty;

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
    pub fn onAddDynamicProperty(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnAddDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAddDynamicProperty` instead
    ///
    pub const SuperAddDynamicProperty = superAddDynamicProperty;

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
    pub fn superAddDynamicProperty(self: QDesignerIntegration, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegration_SuperAddDynamicProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `removeDynamicProperty` instead
    ///
    pub const RemoveDynamicProperty = removeDynamicProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#removeDynamicProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` name: []const u8 `
    ///
    pub fn removeDynamicProperty(self: QDesignerIntegration, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_RemoveDynamicProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onRemoveDynamicProperty` instead
    ///
    pub const OnRemoveDynamicProperty = onRemoveDynamicProperty;

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
    pub fn onRemoveDynamicProperty(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnRemoveDynamicProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveDynamicProperty` instead
    ///
    pub const SuperRemoveDynamicProperty = superRemoveDynamicProperty;

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
    pub fn superRemoveDynamicProperty(self: QDesignerIntegration, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDesignerIntegration_SuperRemoveDynamicProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `updateActiveFormWindow` instead
    ///
    pub const UpdateActiveFormWindow = updateActiveFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateActiveFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn updateActiveFormWindow(self: QDesignerIntegration, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegration_UpdateActiveFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateActiveFormWindow` instead
    ///
    pub const OnUpdateActiveFormWindow = onUpdateActiveFormWindow;

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
    pub fn onUpdateActiveFormWindow(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateActiveFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateActiveFormWindow` instead
    ///
    pub const SuperUpdateActiveFormWindow = superUpdateActiveFormWindow;

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
    pub fn superUpdateActiveFormWindow(self: QDesignerIntegration, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegration_SuperUpdateActiveFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### DEPRECATED: Use `setupFormWindow` instead
    ///
    pub const SetupFormWindow = setupFormWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#setupFormWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` formWindow: QDesignerFormWindowInterface `
    ///
    pub fn setupFormWindow(self: QDesignerIntegration, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegration_SetupFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### DEPRECATED: Use `onSetupFormWindow` instead
    ///
    pub const OnSetupFormWindow = onSetupFormWindow;

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
    pub fn onSetupFormWindow(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QDesignerFormWindowInterface) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnSetupFormWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetupFormWindow` instead
    ///
    pub const SuperSetupFormWindow = superSetupFormWindow;

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
    pub fn superSetupFormWindow(self: QDesignerIntegration, formWindow: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        qtc.QDesignerIntegration_SuperSetupFormWindow(@ptrCast(self.ptr), @ptrCast(formWindow.ptr));
    }

    /// ### DEPRECATED: Use `updateSelection` instead
    ///
    pub const UpdateSelection = updateSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn updateSelection(self: QDesignerIntegration) void {
        qtc.QDesignerIntegration_UpdateSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateSelection` instead
    ///
    pub const OnUpdateSelection = onUpdateSelection;

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
    pub fn onUpdateSelection(self: QDesignerIntegration, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateSelection` instead
    ///
    pub const SuperUpdateSelection = superUpdateSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn superUpdateSelection(self: QDesignerIntegration) void {
        qtc.QDesignerIntegration_SuperUpdateSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updateCustomWidgetPlugins` instead
    ///
    pub const UpdateCustomWidgetPlugins = updateCustomWidgetPlugins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateCustomWidgetPlugins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn updateCustomWidgetPlugins(self: QDesignerIntegration) void {
        qtc.QDesignerIntegration_UpdateCustomWidgetPlugins(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateCustomWidgetPlugins` instead
    ///
    pub const OnUpdateCustomWidgetPlugins = onUpdateCustomWidgetPlugins;

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
    pub fn onUpdateCustomWidgetPlugins(self: QDesignerIntegration, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerIntegration_OnUpdateCustomWidgetPlugins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateCustomWidgetPlugins` instead
    ///
    pub const SuperUpdateCustomWidgetPlugins = superUpdateCustomWidgetPlugins;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#updateCustomWidgetPlugins)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn superUpdateCustomWidgetPlugins(self: QDesignerIntegration) void {
        qtc.QDesignerIntegration_SuperUpdateCustomWidgetPlugins(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegration.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegration.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `core` instead
    ///
    pub const Core = core;

    /// Inherited from QDesignerIntegrationInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegrationinterface.html#core)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn core(self: QDesignerIntegration) QDesignerFormEditorInterface {
        return .{ .ptr = qtc.QDesignerIntegrationInterface_Core(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasFeature` instead
    ///
    pub const HasFeature = hasFeature;

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
    pub fn hasFeature(self: QDesignerIntegration, f: i32) bool {
        return qtc.QDesignerIntegrationInterface_HasFeature(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `emitObjectNameChanged` instead
    ///
    pub const EmitObjectNameChanged = emitObjectNameChanged;

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
    pub fn emitObjectNameChanged(self: QDesignerIntegration, formWindow: anytype, object: anytype, newName: []const u8, oldName: []const u8) void {
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

    /// ### DEPRECATED: Use `emitNavigateToSlot` instead
    ///
    pub const EmitNavigateToSlot = emitNavigateToSlot;

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
    /// ` _objectName: []const u8 `
    ///
    /// ` signalSignature: []const u8 `
    ///
    /// ` parameterNames: []const []const u8 `
    ///
    pub fn emitNavigateToSlot(self: QDesignerIntegration, allocator: std.mem.Allocator, _objectName: []const u8, signalSignature: []const u8, parameterNames: []const []const u8) void {
        const objectName_str = qtc.libqt_string{
            .len = _objectName.len,
            .data = _objectName.ptr,
        };
        const signalSignature_str = qtc.libqt_string{
            .len = signalSignature.len,
            .data = signalSignature.ptr,
        };
        const parameterNames_arr = allocator.alloc(qtc.libqt_string, parameterNames.len) catch @panic("QDesignerIntegration.emitNavigateToSlot: Memory allocation failed");
        defer allocator.free(parameterNames_arr);
        for (parameterNames, 0..parameterNames.len) |str_item, i|
            parameterNames_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const parameterNames_list = qtc.libqt_list{
            .len = parameterNames.len,
            .data = parameterNames_arr.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitNavigateToSlot(@ptrCast(self.ptr), objectName_str, signalSignature_str, parameterNames_list);
    }

    /// ### DEPRECATED: Use `emitNavigateToSlot2` instead
    ///
    pub const EmitNavigateToSlot2 = emitNavigateToSlot2;

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
    pub fn emitNavigateToSlot2(self: QDesignerIntegration, slotSignature: []const u8) void {
        const slotSignature_str = qtc.libqt_string{
            .len = slotSignature.len,
            .data = slotSignature.ptr,
        };
        qtc.QDesignerIntegrationInterface_EmitNavigateToSlot2(@ptrCast(self.ptr), slotSignature_str);
    }

    /// ### DEPRECATED: Use `emitHelpRequested` instead
    ///
    pub const EmitHelpRequested = emitHelpRequested;

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
    pub fn emitHelpRequested(self: QDesignerIntegration, manual: []const u8, document: []const u8) void {
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

    /// ### DEPRECATED: Use `propertyChanged` instead
    ///
    pub const PropertyChanged = propertyChanged;

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
    pub fn propertyChanged(self: QDesignerIntegration, formWindow: anytype, name: []const u8, value: anytype) void {
        comptime _ = @TypeOf(formWindow)._is_QDesignerFormWindowInterface;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerIntegrationInterface_PropertyChanged(@ptrCast(self.ptr), @ptrCast(formWindow.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `objectNameChanged` instead
    ///
    pub const ObjectNameChanged = objectNameChanged;

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
    pub fn objectNameChanged(self: QDesignerIntegration, formWindow: anytype, object: anytype, newName: []const u8, oldName: []const u8) void {
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

    /// ### DEPRECATED: Use `helpRequested` instead
    ///
    pub const HelpRequested = helpRequested;

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
    pub fn helpRequested(self: QDesignerIntegration, manual: []const u8, document: []const u8) void {
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

    /// ### DEPRECATED: Use `navigateToSlot` instead
    ///
    pub const NavigateToSlot = navigateToSlot;

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
    /// ` _objectName: []const u8 `
    ///
    /// ` signalSignature: []const u8 `
    ///
    /// ` parameterNames: []const []const u8 `
    ///
    pub fn navigateToSlot(self: QDesignerIntegration, allocator: std.mem.Allocator, _objectName: []const u8, signalSignature: []const u8, parameterNames: []const []const u8) void {
        const objectName_str = qtc.libqt_string{
            .len = _objectName.len,
            .data = _objectName.ptr,
        };
        const signalSignature_str = qtc.libqt_string{
            .len = signalSignature.len,
            .data = signalSignature.ptr,
        };
        const parameterNames_arr = allocator.alloc(qtc.libqt_string, parameterNames.len) catch @panic("QDesignerIntegration.navigateToSlot: Memory allocation failed");
        defer allocator.free(parameterNames_arr);
        for (parameterNames, 0..parameterNames.len) |str_item, i|
            parameterNames_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const parameterNames_list = qtc.libqt_list{
            .len = parameterNames.len,
            .data = parameterNames_arr.ptr,
        };
        qtc.QDesignerIntegrationInterface_NavigateToSlot(@ptrCast(self.ptr), objectName_str, signalSignature_str, parameterNames_list);
    }

    /// ### DEPRECATED: Use `navigateToSlot2` instead
    ///
    pub const NavigateToSlot2 = navigateToSlot2;

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
    pub fn navigateToSlot2(self: QDesignerIntegration, slotSignature: []const u8) void {
        const slotSignature_str = qtc.libqt_string{
            .len = slotSignature.len,
            .data = slotSignature.ptr,
        };
        qtc.QDesignerIntegrationInterface_NavigateToSlot2(@ptrCast(self.ptr), slotSignature_str);
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: QDesignerIntegration, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDesignerIntegration.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: QDesignerIntegration, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn isWidgetType(self: QDesignerIntegration) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn isWindowType(self: QDesignerIntegration) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn isQuickItemType(self: QDesignerIntegration) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn signalsBlocked(self: QDesignerIntegration) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: QDesignerIntegration, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn thread(self: QDesignerIntegration) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDesignerIntegration, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: QDesignerIntegration, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: QDesignerIntegration, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: QDesignerIntegration, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: QDesignerIntegration, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: QDesignerIntegration, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDesignerIntegration.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDesignerIntegration, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: QDesignerIntegration, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: QDesignerIntegration, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDesignerIntegration, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn disconnect3(self: QDesignerIntegration) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: QDesignerIntegration, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn dumpObjectTree(self: QDesignerIntegration) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn dumpObjectInfo(self: QDesignerIntegration) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: QDesignerIntegration, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: QDesignerIntegration, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: QDesignerIntegration, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDesignerIntegration.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDesignerIntegration.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn bindingStorage(self: QDesignerIntegration) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn bindingStorage2(self: QDesignerIntegration) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn destroyed(self: QDesignerIntegration) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn parent(self: QDesignerIntegration) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: QDesignerIntegration, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn deleteLater(self: QDesignerIntegration) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: QDesignerIntegration, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: QDesignerIntegration, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerIntegration `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDesignerIntegration, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: QDesignerIntegration, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: QDesignerIntegration, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: QDesignerIntegration, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: QDesignerIntegration, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: QDesignerIntegration, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDesignerIntegration, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerIntegration_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDesignerIntegration, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerIntegration_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QEvent) callconv(.c) bool) void {
        qtc.QDesignerIntegration_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDesignerIntegration, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerIntegration_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDesignerIntegration, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDesignerIntegration_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDesignerIntegration_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDesignerIntegration, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDesignerIntegration_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDesignerIntegration, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDesignerIntegration_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QTimerEvent) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDesignerIntegration, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDesignerIntegration_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDesignerIntegration, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDesignerIntegration_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QChildEvent) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDesignerIntegration, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDesignerIntegration_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDesignerIntegration, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDesignerIntegration_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QEvent) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QDesignerIntegration, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegration_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QDesignerIntegration, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegration_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QDesignerIntegration, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegration_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QDesignerIntegration, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDesignerIntegration_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QMetaMethod) callconv(.c) void) void {
        qtc.QDesignerIntegration_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QDesignerIntegration) QObject {
        return .{ .ptr = qtc.QDesignerIntegration_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QDesignerIntegration) QObject {
        return .{ .ptr = qtc.QDesignerIntegration_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QDesignerIntegration, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDesignerIntegration_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QDesignerIntegration) i32 {
        return qtc.QDesignerIntegration_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QDesignerIntegration) i32 {
        return qtc.QDesignerIntegration_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QDesignerIntegration, callback: *const fn () callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QDesignerIntegration, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerIntegration_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QDesignerIntegration, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDesignerIntegration_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDesignerIntegration_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QDesignerIntegration, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerIntegration_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QDesignerIntegration, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDesignerIntegration_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QDesignerIntegration, callback: *const fn (QDesignerIntegration, QMetaMethod) callconv(.c) bool) void {
        qtc.QDesignerIntegration_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerintegration.html#dtor.QDesignerIntegration)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerIntegration `
    ///
    pub fn delete(self: QDesignerIntegration) void {
        qtc.QDesignerIntegration_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/abstractintegration.html#public-types)
pub const enums = struct {
    pub const ResourceFileWatcherBehaviour = enum {
        pub const NoResourceFileWatcher: i32 = 0;
        pub const ReloadResourceFileSilently: i32 = 1;
        pub const PromptToReloadResourceFile: i32 = 2;
    };

    pub const FeatureFlag = enum {
        pub const ResourceEditorFeature: i32 = 1;
        pub const SlotNavigationFeature: i32 = 2;
        pub const DefaultWidgetActionFeature: i32 = 4;
        pub const DefaultFeature: i32 = 5;
    };
};
