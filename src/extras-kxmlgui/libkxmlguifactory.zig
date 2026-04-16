const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KXMLGUIBuilder = @import("libqt6").KXMLGUIBuilder;
const KXMLGUIClient = @import("libqt6").KXMLGUIClient;
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDomDocument = @import("libqt6").QDomDocument;
const QDomElement = @import("libqt6").QDomElement;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html)
pub const KXMLGUIFactory = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KXMLGUIFactory,

    pub const _is_KXMLGUIFactory = {};
    pub const _is_QObject = {};

    /// New constructs a new KXMLGUIFactory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    pub fn New(builder: anytype) KXMLGUIFactory {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        return .{ .ptr = qtc.KXMLGUIFactory_new(@ptrCast(builder.ptr)) };
    }

    /// New2 constructs a new KXMLGUIFactory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(builder: anytype, parent: anytype) KXMLGUIFactory {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KXMLGUIFactory_new2(@ptrCast(builder.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn MetaObject(self: KXMLGUIFactory) QMetaObject {
        return .{ .ptr = qtc.KXMLGUIFactory_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KXMLGUIFactory, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KXMLGUIFactory_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn SuperMetaObject(self: KXMLGUIFactory) QMetaObject {
        return .{ .ptr = qtc.KXMLGUIFactory_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KXMLGUIFactory, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KXMLGUIFactory_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KXMLGUIFactory_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KXMLGUIFactory, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KXMLGUIFactory_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KXMLGUIFactory, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KXMLGUIFactory_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KXMLGUIFactory_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KXMLGUIFactory, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KXMLGUIFactory_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguifactory.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#readConfigFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn ReadConfigFile(allocator: std.mem.Allocator, filename: []const u8) []const u8 {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        var _str = qtc.KXMLGUIFactory_ReadConfigFile(filename_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguifactory.ReadConfigFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#saveConfigFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` doc: QDomDocument `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn SaveConfigFile(doc: anytype, filename: []const u8) bool {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.KXMLGUIFactory_SaveConfigFile(@ptrCast(doc.ptr), filename_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#actionPropertiesElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` doc: QDomDocument `
    ///
    pub fn ActionPropertiesElement(doc: anytype) QDomElement {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        return .{ .ptr = qtc.KXMLGUIFactory_ActionPropertiesElement(@ptrCast(doc.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#findActionByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` elem: QDomElement `
    ///
    /// ` sName: []const u8 `
    ///
    /// ` create: bool `
    ///
    pub fn FindActionByName(elem: anytype, sName: []const u8, create: bool) QDomElement {
        comptime _ = @TypeOf(elem)._is_QDomElement;
        const sName_str = qtc.libqt_string{
            .len = sName.len,
            .data = sName.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIFactory_FindActionByName(@ptrCast(elem.ptr), sName_str, create) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#addClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn AddClient(self: KXMLGUIFactory, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        qtc.KXMLGUIFactory_AddClient(@ptrCast(self.ptr), @ptrCast(client.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#removeClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn RemoveClient(self: KXMLGUIFactory, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        qtc.KXMLGUIFactory_RemoveClient(@ptrCast(self.ptr), @ptrCast(client.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#plugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` client: KXMLGUIClient `
    ///
    /// ` name: []const u8 `
    ///
    /// ` actionList: []QAction `
    ///
    pub fn PlugActionList(self: KXMLGUIFactory, client: anytype, name: []const u8, actionList: []QAction) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const actionList_list = qtc.libqt_list{
            .len = actionList.len,
            .data = @ptrCast(actionList.ptr),
        };
        qtc.KXMLGUIFactory_PlugActionList(@ptrCast(self.ptr), @ptrCast(client.ptr), name_str, actionList_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#unplugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` client: KXMLGUIClient `
    ///
    /// ` name: []const u8 `
    ///
    pub fn UnplugActionList(self: KXMLGUIFactory, client: anytype, name: []const u8) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIFactory_UnplugActionList(@ptrCast(self.ptr), @ptrCast(client.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#clients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Clients(self: KXMLGUIFactory, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIFactory_Clients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("kxmlguifactory.Clients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#container)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` containerName: []const u8 `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn Container(self: KXMLGUIFactory, containerName: []const u8, client: anytype) QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        return .{ .ptr = qtc.KXMLGUIFactory_Container(@ptrCast(self.ptr), containerName_str, @ptrCast(client.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#containers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tagName: []const u8 `
    ///
    pub fn Containers(self: KXMLGUIFactory, allocator: std.mem.Allocator, tagName: []const u8) []QWidget {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KXMLGUIFactory_Containers(@ptrCast(self.ptr), tagName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("kxmlguifactory.Containers: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn Reset(self: KXMLGUIFactory) void {
        qtc.KXMLGUIFactory_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#resetContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` containerName: []const u8 `
    ///
    pub fn ResetContainer(self: KXMLGUIFactory, containerName: []const u8) void {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        qtc.KXMLGUIFactory_ResetContainer(@ptrCast(self.ptr), containerName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#refreshActionProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn RefreshActionProperties(self: KXMLGUIFactory) void {
        qtc.KXMLGUIFactory_RefreshActionProperties(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#showConfigureShortcutsDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn ShowConfigureShortcutsDialog(self: KXMLGUIFactory) void {
        qtc.KXMLGUIFactory_ShowConfigureShortcutsDialog(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#changeShortcutScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` scheme: []const u8 `
    ///
    pub fn ChangeShortcutScheme(self: KXMLGUIFactory, scheme: []const u8) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        qtc.KXMLGUIFactory_ChangeShortcutScheme(@ptrCast(self.ptr), scheme_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#clientAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn ClientAdded(self: KXMLGUIFactory, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        qtc.KXMLGUIFactory_ClientAdded(@ptrCast(self.ptr), @ptrCast(client.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#clientAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, client: KXMLGUIClient) callconv(.c) void `
    ///
    pub fn OnClientAdded(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, KXMLGUIClient) callconv(.c) void) void {
        qtc.KXMLGUIFactory_Connect_ClientAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#clientRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn ClientRemoved(self: KXMLGUIFactory, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        qtc.KXMLGUIFactory_ClientRemoved(@ptrCast(self.ptr), @ptrCast(client.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#clientRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, client: KXMLGUIClient) callconv(.c) void `
    ///
    pub fn OnClientRemoved(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, KXMLGUIClient) callconv(.c) void) void {
        qtc.KXMLGUIFactory_Connect_ClientRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#makingChanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` param1: bool `
    ///
    pub fn MakingChanges(self: KXMLGUIFactory, param1: bool) void {
        qtc.KXMLGUIFactory_MakingChanges(@ptrCast(self.ptr), param1);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#makingChanges)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, param1: bool) callconv(.c) void `
    ///
    pub fn OnMakingChanges(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, bool) callconv(.c) void) void {
        qtc.KXMLGUIFactory_Connect_MakingChanges(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#shortcutsSaved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn ShortcutsSaved(self: KXMLGUIFactory) void {
        qtc.KXMLGUIFactory_ShortcutsSaved(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#shortcutsSaved)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory) callconv(.c) void `
    ///
    pub fn OnShortcutsSaved(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory) callconv(.c) void) void {
        qtc.KXMLGUIFactory_Connect_ShortcutsSaved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguifactory.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguifactory.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#readConfigFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` filename: []const u8 `
    ///
    /// ` componentName: []const u8 `
    ///
    pub fn ReadConfigFile2(allocator: std.mem.Allocator, filename: []const u8, componentName: []const u8) []const u8 {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        var _str = qtc.KXMLGUIFactory_ReadConfigFile2(filename_str, componentName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguifactory.ReadConfigFile2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#saveConfigFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` doc: QDomDocument `
    ///
    /// ` filename: []const u8 `
    ///
    /// ` componentName: []const u8 `
    ///
    pub fn SaveConfigFile3(doc: anytype, filename: []const u8, componentName: []const u8) bool {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        return qtc.KXMLGUIFactory_SaveConfigFile3(@ptrCast(doc.ptr), filename_str, componentName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#container)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` containerName: []const u8 `
    ///
    /// ` client: KXMLGUIClient `
    ///
    /// ` useTagName: bool `
    ///
    pub fn Container3(self: KXMLGUIFactory, containerName: []const u8, client: anytype, useTagName: bool) QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        return .{ .ptr = qtc.KXMLGUIFactory_Container3(@ptrCast(self.ptr), containerName_str, @ptrCast(client.ptr), useTagName) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#resetContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` containerName: []const u8 `
    ///
    /// ` useTagName: bool `
    ///
    pub fn ResetContainer2(self: KXMLGUIFactory, containerName: []const u8, useTagName: bool) void {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        qtc.KXMLGUIFactory_ResetContainer2(@ptrCast(self.ptr), containerName_str, useTagName);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KXMLGUIFactory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguifactory.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KXMLGUIFactory, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn IsWidgetType(self: KXMLGUIFactory) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn IsWindowType(self: KXMLGUIFactory) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn IsQuickItemType(self: KXMLGUIFactory) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn SignalsBlocked(self: KXMLGUIFactory) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KXMLGUIFactory, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn Thread(self: KXMLGUIFactory) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KXMLGUIFactory, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KXMLGUIFactory, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KXMLGUIFactory, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KXMLGUIFactory, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KXMLGUIFactory, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KXMLGUIFactory, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kxmlguifactory.Children: Memory allocation failed");
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KXMLGUIFactory, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KXMLGUIFactory, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KXMLGUIFactory, obj: anytype) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KXMLGUIFactory, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn Disconnect3(self: KXMLGUIFactory) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KXMLGUIFactory, receiver: anytype) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn DumpObjectTree(self: KXMLGUIFactory) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn DumpObjectInfo(self: KXMLGUIFactory) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KXMLGUIFactory, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KXMLGUIFactory, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KXMLGUIFactory, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kxmlguifactory.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguifactory.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn BindingStorage(self: KXMLGUIFactory) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn BindingStorage2(self: KXMLGUIFactory) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn Destroyed(self: KXMLGUIFactory) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn Parent(self: KXMLGUIFactory) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KXMLGUIFactory, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn DeleteLater(self: KXMLGUIFactory) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KXMLGUIFactory, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KXMLGUIFactory, time: i64, timerType: i32) i32 {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KXMLGUIFactory, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KXMLGUIFactory, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KXMLGUIFactory, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KXMLGUIFactory, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KXMLGUIFactory, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KXMLGUIFactory, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QObject) callconv(.c) void) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KXMLGUIFactory, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KXMLGUIFactory_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KXMLGUIFactory, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KXMLGUIFactory_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QEvent) callconv(.c) bool) void {
        qtc.KXMLGUIFactory_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KXMLGUIFactory, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KXMLGUIFactory_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KXMLGUIFactory, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KXMLGUIFactory_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QObject, QEvent) callconv(.c) bool) void {
        qtc.KXMLGUIFactory_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KXMLGUIFactory, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KXMLGUIFactory_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KXMLGUIFactory, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KXMLGUIFactory_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QTimerEvent) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KXMLGUIFactory, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KXMLGUIFactory_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KXMLGUIFactory, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KXMLGUIFactory_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QChildEvent) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KXMLGUIFactory, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KXMLGUIFactory_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KXMLGUIFactory, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KXMLGUIFactory_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QEvent) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KXMLGUIFactory, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXMLGUIFactory_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KXMLGUIFactory, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXMLGUIFactory_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QMetaMethod) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KXMLGUIFactory, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXMLGUIFactory_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KXMLGUIFactory, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXMLGUIFactory_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QMetaMethod) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn Sender(self: KXMLGUIFactory) QObject {
        return .{ .ptr = qtc.KXMLGUIFactory_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn SuperSender(self: KXMLGUIFactory) QObject {
        return .{ .ptr = qtc.KXMLGUIFactory_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KXMLGUIFactory, callback: *const fn () callconv(.c) QObject) void {
        qtc.KXMLGUIFactory_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn SenderSignalIndex(self: KXMLGUIFactory) i32 {
        return qtc.KXMLGUIFactory_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn SuperSenderSignalIndex(self: KXMLGUIFactory) i32 {
        return qtc.KXMLGUIFactory_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KXMLGUIFactory, callback: *const fn () callconv(.c) i32) void {
        qtc.KXMLGUIFactory_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KXMLGUIFactory, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KXMLGUIFactory_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KXMLGUIFactory, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KXMLGUIFactory_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, [*:0]const u8) callconv(.c) i32) void {
        qtc.KXMLGUIFactory_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KXMLGUIFactory, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KXMLGUIFactory_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KXMLGUIFactory, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KXMLGUIFactory_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QMetaMethod) callconv(.c) bool) void {
        qtc.KXMLGUIFactory_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#dtor.KXMLGUIFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn Delete(self: KXMLGUIFactory) void {
        qtc.KXMLGUIFactory_Delete(@ptrCast(self.ptr));
    }
};
