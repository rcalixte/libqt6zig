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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KXMLGUIFactory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    pub fn new(builder: anytype) KXMLGUIFactory {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        const builder_ = if (@hasDecl(@TypeOf(builder), "asKXMLGUIBuilder")) builder.asKXMLGUIBuilder() else builder;

        return .{ .ptr = qtc.KXMLGUIFactory_new(@ptrCast(builder_.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KXMLGUIFactory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(builder: anytype, _parent: anytype) KXMLGUIFactory {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        const builder_ = if (@hasDecl(@TypeOf(builder), "asKXMLGUIBuilder")) builder.asKXMLGUIBuilder() else builder;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KXMLGUIFactory_new2(@ptrCast(builder_.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn metaObject(self: KXMLGUIFactory) QMetaObject {
        return .{ .ptr = qtc.KXMLGUIFactory_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KXMLGUIFactory, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KXMLGUIFactory_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn superMetaObject(self: KXMLGUIFactory) QMetaObject {
        return .{ .ptr = qtc.KXMLGUIFactory_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KXMLGUIFactory, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KXMLGUIFactory_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KXMLGUIFactory_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KXMLGUIFactory, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KXMLGUIFactory_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KXMLGUIFactory, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KXMLGUIFactory_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KXMLGUIFactory_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KXMLGUIFactory, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KXMLGUIFactory_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIFactory.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readConfigFile` instead
    ///
    pub const ReadConfigFile = readConfigFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#readConfigFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn readConfigFile(allocator: std.mem.Allocator, filename: []const u8) []const u8 {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        var _str = qtc.KXMLGUIFactory_ReadConfigFile(filename_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIFactory.readConfigFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `saveConfigFile` instead
    ///
    pub const SaveConfigFile = saveConfigFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#saveConfigFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` doc: QDomDocument `
    ///
    /// ` filename: []const u8 `
    ///
    pub fn saveConfigFile(doc: anytype, filename: []const u8) bool {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.KXMLGUIFactory_SaveConfigFile(@ptrCast(doc.ptr), filename_str);
    }

    /// ### DEPRECATED: Use `actionPropertiesElement` instead
    ///
    pub const ActionPropertiesElement = actionPropertiesElement;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#actionPropertiesElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` doc: QDomDocument `
    ///
    pub fn actionPropertiesElement(doc: anytype) QDomElement {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        return .{ .ptr = qtc.KXMLGUIFactory_ActionPropertiesElement(@ptrCast(doc.ptr)) };
    }

    /// ### DEPRECATED: Use `findActionByName` instead
    ///
    pub const FindActionByName = findActionByName;

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
    pub fn findActionByName(elem: anytype, sName: []const u8, create: bool) QDomElement {
        comptime _ = @TypeOf(elem)._is_QDomElement;
        const sName_str = qtc.libqt_string{
            .len = sName.len,
            .data = sName.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIFactory_FindActionByName(@ptrCast(elem.ptr), sName_str, create) };
    }

    /// ### DEPRECATED: Use `addClient` instead
    ///
    pub const AddClient = addClient;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#addClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn addClient(self: KXMLGUIFactory, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        const client_ = if (@hasDecl(@TypeOf(client), "asKXMLGUIClient")) client.asKXMLGUIClient() else client;
        qtc.KXMLGUIFactory_AddClient(@ptrCast(self.ptr), @ptrCast(client_.ptr));
    }

    /// ### DEPRECATED: Use `removeClient` instead
    ///
    pub const RemoveClient = removeClient;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#removeClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn removeClient(self: KXMLGUIFactory, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        const client_ = if (@hasDecl(@TypeOf(client), "asKXMLGUIClient")) client.asKXMLGUIClient() else client;
        qtc.KXMLGUIFactory_RemoveClient(@ptrCast(self.ptr), @ptrCast(client_.ptr));
    }

    /// ### DEPRECATED: Use `plugActionList` instead
    ///
    pub const PlugActionList = plugActionList;

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
    pub fn plugActionList(self: KXMLGUIFactory, client: anytype, name: []const u8, actionList: []QAction) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        const client_ = if (@hasDecl(@TypeOf(client), "asKXMLGUIClient")) client.asKXMLGUIClient() else client;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const actionList_list = qtc.libqt_list{
            .len = actionList.len,
            .data = @ptrCast(actionList.ptr),
        };
        qtc.KXMLGUIFactory_PlugActionList(@ptrCast(self.ptr), @ptrCast(client_.ptr), name_str, actionList_list);
    }

    /// ### DEPRECATED: Use `unplugActionList` instead
    ///
    pub const UnplugActionList = unplugActionList;

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
    pub fn unplugActionList(self: KXMLGUIFactory, client: anytype, name: []const u8) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        const client_ = if (@hasDecl(@TypeOf(client), "asKXMLGUIClient")) client.asKXMLGUIClient() else client;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIFactory_UnplugActionList(@ptrCast(self.ptr), @ptrCast(client_.ptr), name_str);
    }

    /// ### DEPRECATED: Use `clients` instead
    ///
    pub const Clients = clients;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#clients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn clients(self: KXMLGUIFactory, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIFactory_Clients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("KXMLGUIFactory.clients: Memory allocation failed");
        const _data_val: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `container` instead
    ///
    pub const Container = container;

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
    pub fn container(self: KXMLGUIFactory, containerName: []const u8, client: anytype) QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        const client_ = if (@hasDecl(@TypeOf(client), "asKXMLGUIClient")) client.asKXMLGUIClient() else client;
        return .{ .ptr = qtc.KXMLGUIFactory_Container(@ptrCast(self.ptr), containerName_str, @ptrCast(client_.ptr)) };
    }

    /// ### DEPRECATED: Use `containers` instead
    ///
    pub const Containers = containers;

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
    pub fn containers(self: KXMLGUIFactory, allocator: std.mem.Allocator, tagName: []const u8) []QWidget {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KXMLGUIFactory_Containers(@ptrCast(self.ptr), tagName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("KXMLGUIFactory.containers: Memory allocation failed");
        const _data_val: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn reset(self: KXMLGUIFactory) void {
        qtc.KXMLGUIFactory_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetContainer` instead
    ///
    pub const ResetContainer = resetContainer;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#resetContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` containerName: []const u8 `
    ///
    pub fn resetContainer(self: KXMLGUIFactory, containerName: []const u8) void {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        qtc.KXMLGUIFactory_ResetContainer(@ptrCast(self.ptr), containerName_str);
    }

    /// ### DEPRECATED: Use `refreshActionProperties` instead
    ///
    pub const RefreshActionProperties = refreshActionProperties;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#refreshActionProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn refreshActionProperties(self: KXMLGUIFactory) void {
        qtc.KXMLGUIFactory_RefreshActionProperties(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showConfigureShortcutsDialog` instead
    ///
    pub const ShowConfigureShortcutsDialog = showConfigureShortcutsDialog;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#showConfigureShortcutsDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn showConfigureShortcutsDialog(self: KXMLGUIFactory) void {
        qtc.KXMLGUIFactory_ShowConfigureShortcutsDialog(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `changeShortcutScheme` instead
    ///
    pub const ChangeShortcutScheme = changeShortcutScheme;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#changeShortcutScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` scheme: []const u8 `
    ///
    pub fn changeShortcutScheme(self: KXMLGUIFactory, scheme: []const u8) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        qtc.KXMLGUIFactory_ChangeShortcutScheme(@ptrCast(self.ptr), scheme_str);
    }

    /// ### DEPRECATED: Use `clientAdded` instead
    ///
    pub const ClientAdded = clientAdded;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#clientAdded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn clientAdded(self: KXMLGUIFactory, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        const client_ = if (@hasDecl(@TypeOf(client), "asKXMLGUIClient")) client.asKXMLGUIClient() else client;
        qtc.KXMLGUIFactory_ClientAdded(@ptrCast(self.ptr), @ptrCast(client_.ptr));
    }

    /// ### DEPRECATED: Use `onClientAdded` instead
    ///
    pub const OnClientAdded = onClientAdded;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#clientAdded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, client: KXMLGUIClient) callconv(.c) void `
    ///
    pub fn onClientAdded(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, KXMLGUIClient) callconv(.c) void) void {
        qtc.KXMLGUIFactory_Connect_ClientAdded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clientRemoved` instead
    ///
    pub const ClientRemoved = clientRemoved;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#clientRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` client: KXMLGUIClient `
    ///
    pub fn clientRemoved(self: KXMLGUIFactory, client: anytype) void {
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        const client_ = if (@hasDecl(@TypeOf(client), "asKXMLGUIClient")) client.asKXMLGUIClient() else client;
        qtc.KXMLGUIFactory_ClientRemoved(@ptrCast(self.ptr), @ptrCast(client_.ptr));
    }

    /// ### DEPRECATED: Use `onClientRemoved` instead
    ///
    pub const OnClientRemoved = onClientRemoved;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#clientRemoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, client: KXMLGUIClient) callconv(.c) void `
    ///
    pub fn onClientRemoved(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, KXMLGUIClient) callconv(.c) void) void {
        qtc.KXMLGUIFactory_Connect_ClientRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `makingChanges` instead
    ///
    pub const MakingChanges = makingChanges;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#makingChanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` param1: bool `
    ///
    pub fn makingChanges(self: KXMLGUIFactory, param1: bool) void {
        qtc.KXMLGUIFactory_MakingChanges(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onMakingChanges` instead
    ///
    pub const OnMakingChanges = onMakingChanges;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#makingChanges)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, param1: bool) callconv(.c) void `
    ///
    pub fn onMakingChanges(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, bool) callconv(.c) void) void {
        qtc.KXMLGUIFactory_Connect_MakingChanges(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shortcutsSaved` instead
    ///
    pub const ShortcutsSaved = shortcutsSaved;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#shortcutsSaved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn shortcutsSaved(self: KXMLGUIFactory) void {
        qtc.KXMLGUIFactory_ShortcutsSaved(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onShortcutsSaved` instead
    ///
    pub const OnShortcutsSaved = onShortcutsSaved;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#shortcutsSaved)
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory) callconv(.c) void `
    ///
    pub fn onShortcutsSaved(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory) callconv(.c) void) void {
        qtc.KXMLGUIFactory_Connect_ShortcutsSaved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIFactory.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIFactory.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readConfigFile2` instead
    ///
    pub const ReadConfigFile2 = readConfigFile2;

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
    pub fn readConfigFile2(allocator: std.mem.Allocator, filename: []const u8, componentName: []const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIFactory.readConfigFile2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `saveConfigFile3` instead
    ///
    pub const SaveConfigFile3 = saveConfigFile3;

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
    pub fn saveConfigFile3(doc: anytype, filename: []const u8, componentName: []const u8) bool {
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

    /// ### DEPRECATED: Use `container3` instead
    ///
    pub const Container3 = container3;

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
    pub fn container3(self: KXMLGUIFactory, containerName: []const u8, client: anytype, useTagName: bool) QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        comptime _ = @TypeOf(client)._is_KXMLGUIClient;
        const client_ = if (@hasDecl(@TypeOf(client), "asKXMLGUIClient")) client.asKXMLGUIClient() else client;
        return .{ .ptr = qtc.KXMLGUIFactory_Container3(@ptrCast(self.ptr), containerName_str, @ptrCast(client_.ptr), useTagName) };
    }

    /// ### DEPRECATED: Use `resetContainer2` instead
    ///
    pub const ResetContainer2 = resetContainer2;

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
    pub fn resetContainer2(self: KXMLGUIFactory, containerName: []const u8, useTagName: bool) void {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        qtc.KXMLGUIFactory_ResetContainer2(@ptrCast(self.ptr), containerName_str, useTagName);
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KXMLGUIFactory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIFactory.objectName: Memory allocation failed");
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KXMLGUIFactory, name: []const u8) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn isWidgetType(self: KXMLGUIFactory) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn isWindowType(self: KXMLGUIFactory) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn isQuickItemType(self: KXMLGUIFactory) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn signalsBlocked(self: KXMLGUIFactory) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KXMLGUIFactory, b: bool) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn thread(self: KXMLGUIFactory) QThread {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KXMLGUIFactory, _thread: anytype) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KXMLGUIFactory, interval: i32) i32 {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KXMLGUIFactory, time: i64) i32 {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KXMLGUIFactory, id: i32) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KXMLGUIFactory, id: i32) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KXMLGUIFactory, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KXMLGUIFactory.children: Memory allocation failed");
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KXMLGUIFactory, _parent: anytype) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KXMLGUIFactory, filterObj: anytype) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KXMLGUIFactory, obj: anytype) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KXMLGUIFactory, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn disconnect3(self: KXMLGUIFactory) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KXMLGUIFactory, receiver: anytype) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn dumpObjectTree(self: KXMLGUIFactory) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn dumpObjectInfo(self: KXMLGUIFactory) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KXMLGUIFactory, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KXMLGUIFactory, name: [:0]const u8) QVariant {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KXMLGUIFactory, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KXMLGUIFactory.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KXMLGUIFactory.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn bindingStorage(self: KXMLGUIFactory) QBindingStorage {
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn bindingStorage2(self: KXMLGUIFactory) QBindingStorage {
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn destroyed(self: KXMLGUIFactory) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory) callconv(.c) void) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn parent(self: KXMLGUIFactory) QObject {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KXMLGUIFactory, classname: [:0]const u8) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn deleteLater(self: KXMLGUIFactory) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KXMLGUIFactory, interval: i32, timerType: i32) i32 {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KXMLGUIFactory, time: i64, timerType: i32) i32 {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KXMLGUIFactory, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KXMLGUIFactory, signal: [:0]const u8) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KXMLGUIFactory, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KXMLGUIFactory, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KXMLGUIFactory, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KXMLGUIFactory, param1: anytype) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QObject) callconv(.c) void) void {
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KXMLGUIFactory, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KXMLGUIFactory_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KXMLGUIFactory, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KXMLGUIFactory_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QEvent) callconv(.c) bool) void {
        qtc.KXMLGUIFactory_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KXMLGUIFactory, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KXMLGUIFactory_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KXMLGUIFactory, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KXMLGUIFactory_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QObject, QEvent) callconv(.c) bool) void {
        qtc.KXMLGUIFactory_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KXMLGUIFactory, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KXMLGUIFactory_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KXMLGUIFactory, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KXMLGUIFactory_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QTimerEvent) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KXMLGUIFactory, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KXMLGUIFactory_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KXMLGUIFactory, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KXMLGUIFactory_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QChildEvent) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KXMLGUIFactory, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KXMLGUIFactory_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KXMLGUIFactory, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KXMLGUIFactory_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QEvent) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KXMLGUIFactory, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXMLGUIFactory_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KXMLGUIFactory, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXMLGUIFactory_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QMetaMethod) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KXMLGUIFactory, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXMLGUIFactory_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KXMLGUIFactory, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KXMLGUIFactory_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QMetaMethod) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn sender(self: KXMLGUIFactory) QObject {
        return .{ .ptr = qtc.KXMLGUIFactory_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn superSender(self: KXMLGUIFactory) QObject {
        return .{ .ptr = qtc.KXMLGUIFactory_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KXMLGUIFactory, callback: *const fn () callconv(.c) QObject) void {
        qtc.KXMLGUIFactory_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn senderSignalIndex(self: KXMLGUIFactory) i32 {
        return qtc.KXMLGUIFactory_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    pub fn superSenderSignalIndex(self: KXMLGUIFactory) i32 {
        return qtc.KXMLGUIFactory_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KXMLGUIFactory, callback: *const fn () callconv(.c) i32) void {
        qtc.KXMLGUIFactory_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KXMLGUIFactory, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KXMLGUIFactory_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KXMLGUIFactory, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KXMLGUIFactory_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, [*:0]const u8) callconv(.c) i32) void {
        qtc.KXMLGUIFactory_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KXMLGUIFactory, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KXMLGUIFactory_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXMLGUIFactory `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KXMLGUIFactory, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KXMLGUIFactory_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KXMLGUIFactory`
    ///
    /// ` callback: *const fn (self: KXMLGUIFactory, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, QMetaMethod) callconv(.c) bool) void {
        qtc.KXMLGUIFactory_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: KXMLGUIFactory, callback: *const fn (KXMLGUIFactory, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kxmlguifactory.html#dtor.KXMLGUIFactory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KXMLGUIFactory `
    ///
    pub fn delete(self: KXMLGUIFactory) void {
        qtc.KXMLGUIFactory_Delete(@ptrCast(self.ptr));
    }
};
