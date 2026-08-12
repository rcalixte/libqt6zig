const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KActionCollection = @import("libqt6").KActionCollection;
const KXMLGUIBuilder = @import("libqt6").KXMLGUIBuilder;
const KXMLGUIFactory = @import("libqt6").KXMLGUIFactory;
const QAction = @import("libqt6").QAction;
const QDomDocument = @import("libqt6").QDomDocument;
const QDomElement = @import("libqt6").QDomElement;
const QWidget = @import("libqt6").QWidget;
const kxmlguiclient_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html)
pub const KXMLGUIClient = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KXMLGUIClient,

    pub const _is_KXMLGUIClient = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KXMLGUIClient object in C++ memory
    ///
    pub fn new() KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIClient_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KXMLGUIClient object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: KXMLGUIClient `
    ///
    pub fn new2(parent: anytype) KXMLGUIClient {
        comptime _ = @TypeOf(parent)._is_KXMLGUIClient;
        return .{ .ptr = qtc.KXMLGUIClient_new2(@ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` name: []const u8 `
    ///
    pub fn action(self: KXMLGUIClient, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_Action(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `action2` instead
    ///
    pub const Action2 = action2;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` element: QDomElement `
    ///
    pub fn action2(self: KXMLGUIClient, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXMLGUIClient_Action2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `onAction2` instead
    ///
    pub const OnAction2 = onAction2;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn (self: KXMLGUIClient, element: QDomElement) callconv(.c) QAction `
    ///
    pub fn onAction2(self: KXMLGUIClient, callback: *const fn (KXMLGUIClient, QDomElement) callconv(.c) QAction) void {
        qtc.KXMLGUIClient_OnAction2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAction2` instead
    ///
    pub const SuperAction2 = superAction2;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` element: QDomElement `
    ///
    pub fn superAction2(self: KXMLGUIClient, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXMLGUIClient_SuperAction2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `actionCollection` instead
    ///
    pub const ActionCollection = actionCollection;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn actionCollection(self: KXMLGUIClient) KActionCollection {
        return .{ .ptr = qtc.KXMLGUIClient_ActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onActionCollection` instead
    ///
    pub const OnActionCollection = onActionCollection;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) KActionCollection `
    ///
    pub fn onActionCollection(self: KXMLGUIClient, callback: *const fn () callconv(.c) KActionCollection) void {
        qtc.KXMLGUIClient_OnActionCollection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superActionCollection` instead
    ///
    pub const SuperActionCollection = superActionCollection;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn superActionCollection(self: KXMLGUIClient) KActionCollection {
        return .{ .ptr = qtc.KXMLGUIClient_SuperActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `componentName` instead
    ///
    pub const ComponentName = componentName;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn componentName(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIClient.componentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onComponentName` instead
    ///
    pub const OnComponentName = onComponentName;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onComponentName(self: KXMLGUIClient, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXMLGUIClient_OnComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superComponentName` instead
    ///
    pub const SuperComponentName = superComponentName;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superComponentName(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_SuperComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIClient.componentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `domDocument` instead
    ///
    pub const DomDocument = domDocument;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn domDocument(self: KXMLGUIClient) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onDomDocument` instead
    ///
    pub const OnDomDocument = onDomDocument;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) QDomDocument `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDomDocument(self: KXMLGUIClient, callback: *const fn () callconv(.c) QDomDocument) void {
        qtc.KXMLGUIClient_OnDomDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDomDocument` instead
    ///
    pub const SuperDomDocument = superDomDocument;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn superDomDocument(self: KXMLGUIClient) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_SuperDomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `xmlFile` instead
    ///
    pub const XmlFile = xmlFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn xmlFile(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_XmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIClient.xmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onXmlFile` instead
    ///
    pub const OnXmlFile = onXmlFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onXmlFile(self: KXMLGUIClient, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXMLGUIClient_OnXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superXmlFile` instead
    ///
    pub const SuperXmlFile = superXmlFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superXmlFile(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_SuperXmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIClient.xmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localXMLFile` instead
    ///
    pub const LocalXMLFile = localXMLFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn localXMLFile(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_LocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIClient.localXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onLocalXMLFile` instead
    ///
    pub const OnLocalXMLFile = onLocalXMLFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onLocalXMLFile(self: KXMLGUIClient, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXMLGUIClient_OnLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLocalXMLFile` instead
    ///
    pub const SuperLocalXMLFile = superLocalXMLFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superLocalXMLFile(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_SuperLocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIClient.localXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setXMLGUIBuildDocument` instead
    ///
    pub const SetXMLGUIBuildDocument = setXMLGUIBuildDocument;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` doc: QDomDocument `
    ///
    pub fn setXMLGUIBuildDocument(self: KXMLGUIClient, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// ### DEPRECATED: Use `xmlguiBuildDocument` instead
    ///
    pub const XmlguiBuildDocument = xmlguiBuildDocument;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn xmlguiBuildDocument(self: KXMLGUIClient) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFactory` instead
    ///
    pub const SetFactory = setFactory;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` _factory: KXMLGUIFactory `
    ///
    pub fn setFactory(self: KXMLGUIClient, _factory: anytype) void {
        comptime _ = @TypeOf(_factory)._is_KXMLGUIFactory;
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self.ptr), @ptrCast(_factory.ptr));
    }

    /// ### DEPRECATED: Use `factory` instead
    ///
    pub const Factory = factory;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn factory(self: KXMLGUIClient) KXMLGUIFactory {
        return .{ .ptr = qtc.KXMLGUIClient_Factory(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentClient` instead
    ///
    pub const ParentClient = parentClient;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn parentClient(self: KXMLGUIClient) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIClient_ParentClient(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `insertChildClient` instead
    ///
    pub const InsertChildClient = insertChildClient;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn insertChildClient(self: KXMLGUIClient, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `removeChildClient` instead
    ///
    pub const RemoveChildClient = removeChildClient;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn removeChildClient(self: KXMLGUIClient, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `childClients` instead
    ///
    pub const ChildClients = childClients;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childClients(self: KXMLGUIClient, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("KXMLGUIClient.childClients: Memory allocation failed");
        const _data_val: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setClientBuilder` instead
    ///
    pub const SetClientBuilder = setClientBuilder;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    pub fn setClientBuilder(self: KXMLGUIClient, builder: anytype) void {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self.ptr), @ptrCast(builder.ptr));
    }

    /// ### DEPRECATED: Use `clientBuilder` instead
    ///
    pub const ClientBuilder = clientBuilder;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn clientBuilder(self: KXMLGUIClient) KXMLGUIBuilder {
        return .{ .ptr = qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `reloadXML` instead
    ///
    pub const ReloadXML = reloadXML;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn reloadXML(self: KXMLGUIClient) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `plugActionList` instead
    ///
    pub const PlugActionList = plugActionList;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` name: []const u8 `
    ///
    /// ` actionList: []QAction `
    ///
    pub fn plugActionList(self: KXMLGUIClient, name: []const u8, actionList: []QAction) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const actionList_list = qtc.libqt_list{
            .len = actionList.len,
            .data = @ptrCast(actionList.ptr),
        };
        qtc.KXMLGUIClient_PlugActionList(@ptrCast(self.ptr), name_str, actionList_list);
    }

    /// ### DEPRECATED: Use `unplugActionList` instead
    ///
    pub const UnplugActionList = unplugActionList;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` name: []const u8 `
    ///
    pub fn unplugActionList(self: KXMLGUIClient, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `findMostRecentXMLFile` instead
    ///
    pub const FindMostRecentXMLFile = findMostRecentXMLFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` files: []const []const u8 `
    ///
    /// ` doc: []const u8 `
    ///
    pub fn findMostRecentXMLFile(allocator: std.mem.Allocator, files: []const []const u8, doc: []const u8) []const u8 {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("KXMLGUIClient.findMostRecentXMLFile: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |str_item, i|
            files_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        const doc_str = qtc.libqt_string{
            .len = doc.len,
            .data = doc.ptr,
        };
        var _str = qtc.KXMLGUIClient_FindMostRecentXMLFile(files_list, doc_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIClient.findMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addStateActionEnabled` instead
    ///
    pub const AddStateActionEnabled = addStateActionEnabled;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` state: []const u8 `
    ///
    /// ` _action: []const u8 `
    ///
    pub fn addStateActionEnabled(self: KXMLGUIClient, state: []const u8, _action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = _action.len,
            .data = _action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionEnabled(@ptrCast(self.ptr), state_str, action_str);
    }

    /// ### DEPRECATED: Use `addStateActionDisabled` instead
    ///
    pub const AddStateActionDisabled = addStateActionDisabled;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` state: []const u8 `
    ///
    /// ` _action: []const u8 `
    ///
    pub fn addStateActionDisabled(self: KXMLGUIClient, state: []const u8, _action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = _action.len,
            .data = _action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionDisabled(@ptrCast(self.ptr), state_str, action_str);
    }

    /// ### DEPRECATED: Use `getActionsToChangeForState` instead
    ///
    pub const GetActionsToChangeForState = getActionsToChangeForState;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` state: []const u8 `
    ///
    pub fn getActionsToChangeForState(self: KXMLGUIClient, state: []const u8) KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self.ptr), state_str) };
    }

    /// ### DEPRECATED: Use `beginXMLPlug` instead
    ///
    pub const BeginXMLPlug = beginXMLPlug;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` param1: QWidget `
    ///
    pub fn beginXMLPlug(self: KXMLGUIClient, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `endXMLPlug` instead
    ///
    pub const EndXMLPlug = endXMLPlug;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn endXMLPlug(self: KXMLGUIClient) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `prepareXMLUnplug` instead
    ///
    pub const PrepareXMLUnplug = prepareXMLUnplug;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` param1: QWidget `
    ///
    pub fn prepareXMLUnplug(self: KXMLGUIClient, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `replaceXMLFile` instead
    ///
    pub const ReplaceXMLFile = replaceXMLFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    pub fn replaceXMLFile(self: KXMLGUIClient, xmlfile: []const u8, localxmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile(@ptrCast(self.ptr), xmlfile_str, localxmlfile_str);
    }

    /// ### DEPRECATED: Use `findVersionNumber` instead
    ///
    pub const FindVersionNumber = findVersionNumber;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` xml: []const u8 `
    ///
    pub fn findVersionNumber(allocator: std.mem.Allocator, xml: []const u8) []const u8 {
        const xml_str = qtc.libqt_string{
            .len = xml.len,
            .data = xml.ptr,
        };
        var _str = qtc.KXMLGUIClient_FindVersionNumber(xml_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIClient.findVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setComponentName` instead
    ///
    pub const SetComponentName = setComponentName;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` _componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn setComponentName(self: KXMLGUIClient, _componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KXMLGUIClient_SetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// ### DEPRECATED: Use `onSetComponentName` instead
    ///
    pub const OnSetComponentName = onSetComponentName;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn (self: KXMLGUIClient, componentName: [*:0]const u8, componentDisplayName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetComponentName(self: KXMLGUIClient, callback: *const fn (KXMLGUIClient, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetComponentName` instead
    ///
    pub const SuperSetComponentName = superSetComponentName;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` _componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn superSetComponentName(self: KXMLGUIClient, _componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = _componentName.len,
            .data = _componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KXMLGUIClient_SuperSetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// ### DEPRECATED: Use `setXMLFile` instead
    ///
    pub const SetXMLFile = setXMLFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn setXMLFile(self: KXMLGUIClient, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXMLGUIClient_SetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// ### DEPRECATED: Use `onSetXMLFile` instead
    ///
    pub const OnSetXMLFile = onSetXMLFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn (self: KXMLGUIClient, file: [*:0]const u8, merge: bool, setXMLDoc: bool) callconv(.c) void `
    ///
    pub fn onSetXMLFile(self: KXMLGUIClient, callback: *const fn (KXMLGUIClient, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetXMLFile` instead
    ///
    pub const SuperSetXMLFile = superSetXMLFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn superSetXMLFile(self: KXMLGUIClient, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXMLGUIClient_SuperSetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// ### DEPRECATED: Use `standardsXmlFileLocation` instead
    ///
    pub const StandardsXmlFileLocation = standardsXmlFileLocation;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn standardsXmlFileLocation(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_StandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIClient.standardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onStandardsXmlFileLocation` instead
    ///
    pub const OnStandardsXmlFileLocation = onStandardsXmlFileLocation;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onStandardsXmlFileLocation(self: KXMLGUIClient, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXMLGUIClient_OnStandardsXmlFileLocation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStandardsXmlFileLocation` instead
    ///
    pub const SuperStandardsXmlFileLocation = superStandardsXmlFileLocation;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superStandardsXmlFileLocation(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_SuperStandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KXMLGUIClient.standardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `loadStandardsXmlFile` instead
    ///
    pub const LoadStandardsXmlFile = loadStandardsXmlFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn loadStandardsXmlFile(self: KXMLGUIClient) void {
        qtc.KXMLGUIClient_LoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLoadStandardsXmlFile` instead
    ///
    pub const OnLoadStandardsXmlFile = onLoadStandardsXmlFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onLoadStandardsXmlFile(self: KXMLGUIClient, callback: *const fn () callconv(.c) void) void {
        qtc.KXMLGUIClient_OnLoadStandardsXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLoadStandardsXmlFile` instead
    ///
    pub const SuperLoadStandardsXmlFile = superLoadStandardsXmlFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn superLoadStandardsXmlFile(self: KXMLGUIClient) void {
        qtc.KXMLGUIClient_SuperLoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocalXMLFile` instead
    ///
    pub const SetLocalXMLFile = setLocalXMLFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` file: []const u8 `
    ///
    pub fn setLocalXMLFile(self: KXMLGUIClient, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXMLGUIClient_SetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `onSetLocalXMLFile` instead
    ///
    pub const OnSetLocalXMLFile = onSetLocalXMLFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn (self: KXMLGUIClient, file: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetLocalXMLFile(self: KXMLGUIClient, callback: *const fn (KXMLGUIClient, [*:0]const u8) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetLocalXMLFile` instead
    ///
    pub const SuperSetLocalXMLFile = superSetLocalXMLFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` file: []const u8 `
    ///
    pub fn superSetLocalXMLFile(self: KXMLGUIClient, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXMLGUIClient_SuperSetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `setXML` instead
    ///
    pub const SetXML = setXML;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn setXML(self: KXMLGUIClient, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KXMLGUIClient_SetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// ### DEPRECATED: Use `onSetXML` instead
    ///
    pub const OnSetXML = onSetXML;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn (self: KXMLGUIClient, document: [*:0]const u8, merge: bool) callconv(.c) void `
    ///
    pub fn onSetXML(self: KXMLGUIClient, callback: *const fn (KXMLGUIClient, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetXML(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetXML` instead
    ///
    pub const SuperSetXML = superSetXML;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn superSetXML(self: KXMLGUIClient, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KXMLGUIClient_SuperSetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// ### DEPRECATED: Use `setDOMDocument` instead
    ///
    pub const SetDOMDocument = setDOMDocument;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` document: QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn setDOMDocument(self: KXMLGUIClient, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KXMLGUIClient_SetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// ### DEPRECATED: Use `onSetDOMDocument` instead
    ///
    pub const OnSetDOMDocument = onSetDOMDocument;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn (self: KXMLGUIClient, document: QDomDocument, merge: bool) callconv(.c) void `
    ///
    pub fn onSetDOMDocument(self: KXMLGUIClient, callback: *const fn (KXMLGUIClient, QDomDocument, bool) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetDOMDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetDOMDocument` instead
    ///
    pub const SuperSetDOMDocument = superSetDOMDocument;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` document: QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn superSetDOMDocument(self: KXMLGUIClient, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KXMLGUIClient_SuperSetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn stateChanged(self: KXMLGUIClient, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXMLGUIClient_StateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn (self: KXMLGUIClient, newstate: [*:0]const u8, reverse: kxmlguiclient_enums.ReverseStateChange) callconv(.c) void `
    ///
    pub fn onStateChanged(self: KXMLGUIClient, callback: *const fn (KXMLGUIClient, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStateChanged` instead
    ///
    pub const SuperStateChanged = superStateChanged;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn superStateChanged(self: KXMLGUIClient, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXMLGUIClient_SuperStateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// ### DEPRECATED: Use `replaceXMLFile3` instead
    ///
    pub const ReplaceXMLFile3 = replaceXMLFile3;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn replaceXMLFile3(self: KXMLGUIClient, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile3(@ptrCast(self.ptr), xmlfile_str, localxmlfile_str, merge);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#dtor.KXMLGUIClient)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn delete(self: KXMLGUIClient) void {
        qtc.KXMLGUIClient_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kxmlguiclient-statechange.html)
pub const KXMLGUIClient__StateChange = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient-statechange.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KXMLGUIClient__StateChange,

    pub const _is_KXMLGUIClient__StateChange = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KXMLGUIClient::StateChange object in C++ memory
    ///
    pub fn new() KXMLGUIClient__StateChange {
        return .{ .ptr = qtc.KXMLGUIClient__StateChange_new() };
    }

    /// ### DEPRECATED: Use `actionsToEnable` instead
    ///
    pub const ActionsToEnable = actionsToEnable;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient-statechange.html#actionsToEnable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient__StateChange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actionsToEnable(self: KXMLGUIClient__StateChange, allocator: std.mem.Allocator) []const []const u8 {
        const actionsToEnable_arr: qtc.libqt_list = qtc.KXMLGUIClient__StateChange_ActionsToEnable(@ptrCast(self.ptr));
        var actionsToEnable_str: [*]qtc.libqt_string = @ptrCast(@alignCast(actionsToEnable_arr.data));
        defer {
            for (0..actionsToEnable_arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&actionsToEnable_str[i]));
            qtc.libqt_free(actionsToEnable_arr.data);
        }
        const actionsToEnable_ret = allocator.alloc([]const u8, actionsToEnable_arr.len) catch @panic("KXMLGUIClient__StateChange.actionsToEnable: Memory allocation failed");
        for (0..actionsToEnable_arr.len) |i| {
            const actionsToEnable_data_val = actionsToEnable_str[i];
            const actionsToEnable_buf = allocator.alloc(u8, actionsToEnable_data_val.len) catch @panic("KXMLGUIClient__StateChange.actionsToEnable: Memory allocation failed");
            @memcpy(actionsToEnable_buf, actionsToEnable_data_val.data[0..actionsToEnable_data_val.len]);
            actionsToEnable_ret[i] = actionsToEnable_buf;
        }
        return actionsToEnable_ret;
    }

    /// ### DEPRECATED: Use `setActionsToEnable` instead
    ///
    pub const SetActionsToEnable = setActionsToEnable;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient-statechange.html#actionsToEnable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient__StateChange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _actionsToEnable: []const []const u8 `
    ///
    pub fn setActionsToEnable(self: KXMLGUIClient__StateChange, allocator: std.mem.Allocator, _actionsToEnable: []const []const u8) void {
        const actionsToEnable_arr = allocator.alloc(qtc.libqt_string, _actionsToEnable.len) catch @panic("KXMLGUIClient__StateChange.setActionsToEnable: Memory allocation failed");
        defer allocator.free(actionsToEnable_arr);
        for (_actionsToEnable, 0.._actionsToEnable.len) |str_item, i|
            actionsToEnable_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const actionsToEnable_list = qtc.libqt_list{
            .len = _actionsToEnable.len,
            .data = actionsToEnable_arr.ptr,
        };
        qtc.KXMLGUIClient__StateChange_SetActionsToEnable(@ptrCast(self.ptr), actionsToEnable_list);
    }

    /// ### DEPRECATED: Use `actionsToDisable` instead
    ///
    pub const ActionsToDisable = actionsToDisable;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient-statechange.html#actionsToDisable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient__StateChange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actionsToDisable(self: KXMLGUIClient__StateChange, allocator: std.mem.Allocator) []const []const u8 {
        const actionsToDisable_arr: qtc.libqt_list = qtc.KXMLGUIClient__StateChange_ActionsToDisable(@ptrCast(self.ptr));
        var actionsToDisable_str: [*]qtc.libqt_string = @ptrCast(@alignCast(actionsToDisable_arr.data));
        defer {
            for (0..actionsToDisable_arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&actionsToDisable_str[i]));
            qtc.libqt_free(actionsToDisable_arr.data);
        }
        const actionsToDisable_ret = allocator.alloc([]const u8, actionsToDisable_arr.len) catch @panic("KXMLGUIClient__StateChange.actionsToDisable: Memory allocation failed");
        for (0..actionsToDisable_arr.len) |i| {
            const actionsToDisable_data_val = actionsToDisable_str[i];
            const actionsToDisable_buf = allocator.alloc(u8, actionsToDisable_data_val.len) catch @panic("KXMLGUIClient__StateChange.actionsToDisable: Memory allocation failed");
            @memcpy(actionsToDisable_buf, actionsToDisable_data_val.data[0..actionsToDisable_data_val.len]);
            actionsToDisable_ret[i] = actionsToDisable_buf;
        }
        return actionsToDisable_ret;
    }

    /// ### DEPRECATED: Use `setActionsToDisable` instead
    ///
    pub const SetActionsToDisable = setActionsToDisable;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient-statechange.html#actionsToDisable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient__StateChange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _actionsToDisable: []const []const u8 `
    ///
    pub fn setActionsToDisable(self: KXMLGUIClient__StateChange, allocator: std.mem.Allocator, _actionsToDisable: []const []const u8) void {
        const actionsToDisable_arr = allocator.alloc(qtc.libqt_string, _actionsToDisable.len) catch @panic("KXMLGUIClient__StateChange.setActionsToDisable: Memory allocation failed");
        defer allocator.free(actionsToDisable_arr);
        for (_actionsToDisable, 0.._actionsToDisable.len) |str_item, i|
            actionsToDisable_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const actionsToDisable_list = qtc.libqt_list{
            .len = _actionsToDisable.len,
            .data = actionsToDisable_arr.ptr,
        };
        qtc.KXMLGUIClient__StateChange_SetActionsToDisable(@ptrCast(self.ptr), actionsToDisable_list);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KXMLGUIClient__StateChange `
    ///
    pub fn delete(self: KXMLGUIClient__StateChange) void {
        qtc.KXMLGUIClient__StateChange_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#public-types)
pub const enums = struct {
    pub const ReverseStateChange = enum(i32) {
        pub const StateNoReverse: i32 = 0;
        pub const StateReverse: i32 = 1;
    };
};
