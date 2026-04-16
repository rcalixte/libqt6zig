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

    /// New constructs a new KXMLGUIClient object.
    ///
    pub fn New() KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIClient_new() };
    }

    /// New2 constructs a new KXMLGUIClient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: KXMLGUIClient `
    ///
    pub fn New2(parent: anytype) KXMLGUIClient {
        comptime _ = @TypeOf(parent)._is_KXMLGUIClient;
        return .{ .ptr = qtc.KXMLGUIClient_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Action(self: KXMLGUIClient, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_Action(@ptrCast(self.ptr), name_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` element: QDomElement `
    ///
    pub fn Action2(self: KXMLGUIClient, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXMLGUIClient_Action2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

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
    pub fn OnAction2(self: KXMLGUIClient, callback: *const fn (KXMLGUIClient, QDomElement) callconv(.c) QAction) void {
        qtc.KXMLGUIClient_OnAction2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAction2` instead
    ///
    pub const QBaseAction2 = SuperAction2;

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
    pub fn SuperAction2(self: KXMLGUIClient, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KXMLGUIClient_SuperAction2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn ActionCollection(self: KXMLGUIClient) KActionCollection {
        return .{ .ptr = qtc.KXMLGUIClient_ActionCollection(@ptrCast(self.ptr)) };
    }

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
    pub fn OnActionCollection(self: KXMLGUIClient, callback: *const fn () callconv(.c) KActionCollection) void {
        qtc.KXMLGUIClient_OnActionCollection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActionCollection` instead
    ///
    pub const QBaseActionCollection = SuperActionCollection;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn SuperActionCollection(self: KXMLGUIClient) KActionCollection {
        return .{ .ptr = qtc.KXMLGUIClient_SuperActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ComponentName(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnComponentName(self: KXMLGUIClient, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXMLGUIClient_OnComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperComponentName` instead
    ///
    pub const QBaseComponentName = SuperComponentName;

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
    pub fn SuperComponentName(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_SuperComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn DomDocument(self: KXMLGUIClient) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_DomDocument(@ptrCast(self.ptr)) };
    }

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
    pub fn OnDomDocument(self: KXMLGUIClient, callback: *const fn () callconv(.c) QDomDocument) void {
        qtc.KXMLGUIClient_OnDomDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDomDocument` instead
    ///
    pub const QBaseDomDocument = SuperDomDocument;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn SuperDomDocument(self: KXMLGUIClient) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_SuperDomDocument(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn XmlFile(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_XmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnXmlFile(self: KXMLGUIClient, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXMLGUIClient_OnXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperXmlFile` instead
    ///
    pub const QBaseXmlFile = SuperXmlFile;

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
    pub fn SuperXmlFile(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_SuperXmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalXMLFile(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_LocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLocalXMLFile(self: KXMLGUIClient, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXMLGUIClient_OnLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLocalXMLFile` instead
    ///
    pub const QBaseLocalXMLFile = SuperLocalXMLFile;

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
    pub fn SuperLocalXMLFile(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_SuperLocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` doc: QDomDocument `
    ///
    pub fn SetXMLGUIBuildDocument(self: KXMLGUIClient, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn XmlguiBuildDocument(self: KXMLGUIClient) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` factory: KXMLGUIFactory `
    ///
    pub fn SetFactory(self: KXMLGUIClient, factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_KXMLGUIFactory;
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self.ptr), @ptrCast(factory.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn Factory(self: KXMLGUIClient) KXMLGUIFactory {
        return .{ .ptr = qtc.KXMLGUIClient_Factory(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn ParentClient(self: KXMLGUIClient) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIClient_ParentClient(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn InsertChildClient(self: KXMLGUIClient, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn RemoveChildClient(self: KXMLGUIClient, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildClients(self: KXMLGUIClient, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("kxmlguiclient.ChildClients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    pub fn SetClientBuilder(self: KXMLGUIClient, builder: anytype) void {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self.ptr), @ptrCast(builder.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn ClientBuilder(self: KXMLGUIClient) KXMLGUIBuilder {
        return .{ .ptr = qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn ReloadXML(self: KXMLGUIClient) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self.ptr));
    }

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
    pub fn PlugActionList(self: KXMLGUIClient, name: []const u8, actionList: []QAction) void {
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

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` name: []const u8 `
    ///
    pub fn UnplugActionList(self: KXMLGUIClient, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self.ptr), name_str);
    }

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
    pub fn FindMostRecentXMLFile(allocator: std.mem.Allocator, files: []const []const u8, doc: []const u8) []const u8 {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("kxmlguiclient.FindMostRecentXMLFile: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i|
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.FindMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionEnabled(self: KXMLGUIClient, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionEnabled(@ptrCast(self.ptr), state_str, action_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionDisabled(self: KXMLGUIClient, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionDisabled(@ptrCast(self.ptr), state_str, action_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` state: []const u8 `
    ///
    pub fn GetActionsToChangeForState(self: KXMLGUIClient, state: []const u8) KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self.ptr), state_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` param1: QWidget `
    ///
    pub fn BeginXMLPlug(self: KXMLGUIClient, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn EndXMLPlug(self: KXMLGUIClient) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` param1: QWidget `
    ///
    pub fn PrepareXMLUnplug(self: KXMLGUIClient, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn ReplaceXMLFile(self: KXMLGUIClient, xmlfile: []const u8, localxmlfile: []const u8) void {
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

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` xml: []const u8 `
    ///
    pub fn FindVersionNumber(allocator: std.mem.Allocator, xml: []const u8) []const u8 {
        const xml_str = qtc.libqt_string{
            .len = xml.len,
            .data = xml.ptr,
        };
        var _str = qtc.KXMLGUIClient_FindVersionNumber(xml_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.FindVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SetComponentName(self: KXMLGUIClient, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KXMLGUIClient_SetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

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
    pub fn OnSetComponentName(self: KXMLGUIClient, callback: *const fn (KXMLGUIClient, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetComponentName` instead
    ///
    pub const QBaseSetComponentName = SuperSetComponentName;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SuperSetComponentName(self: KXMLGUIClient, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KXMLGUIClient_SuperSetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

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
    pub fn SetXMLFile(self: KXMLGUIClient, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXMLGUIClient_SetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

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
    pub fn OnSetXMLFile(self: KXMLGUIClient, callback: *const fn (KXMLGUIClient, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetXMLFile` instead
    ///
    pub const QBaseSetXMLFile = SuperSetXMLFile;

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
    pub fn SuperSetXMLFile(self: KXMLGUIClient, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXMLGUIClient_SuperSetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StandardsXmlFileLocation(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_StandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnStandardsXmlFileLocation(self: KXMLGUIClient, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXMLGUIClient_OnStandardsXmlFileLocation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStandardsXmlFileLocation` instead
    ///
    pub const QBaseStandardsXmlFileLocation = SuperStandardsXmlFileLocation;

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
    pub fn SuperStandardsXmlFileLocation(self: KXMLGUIClient, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_SuperStandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn LoadStandardsXmlFile(self: KXMLGUIClient) void {
        qtc.KXMLGUIClient_LoadStandardsXmlFile(@ptrCast(self.ptr));
    }

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
    pub fn OnLoadStandardsXmlFile(self: KXMLGUIClient, callback: *const fn () callconv(.c) void) void {
        qtc.KXMLGUIClient_OnLoadStandardsXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLoadStandardsXmlFile` instead
    ///
    pub const QBaseLoadStandardsXmlFile = SuperLoadStandardsXmlFile;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn SuperLoadStandardsXmlFile(self: KXMLGUIClient) void {
        qtc.KXMLGUIClient_SuperLoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SetLocalXMLFile(self: KXMLGUIClient, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXMLGUIClient_SetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

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
    pub fn OnSetLocalXMLFile(self: KXMLGUIClient, callback: *const fn (KXMLGUIClient, [*:0]const u8) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetLocalXMLFile` instead
    ///
    pub const QBaseSetLocalXMLFile = SuperSetLocalXMLFile;

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
    pub fn SuperSetLocalXMLFile(self: KXMLGUIClient, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXMLGUIClient_SuperSetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

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
    pub fn SetXML(self: KXMLGUIClient, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KXMLGUIClient_SetXML(@ptrCast(self.ptr), document_str, merge);
    }

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
    pub fn OnSetXML(self: KXMLGUIClient, callback: *const fn (KXMLGUIClient, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetXML(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetXML` instead
    ///
    pub const QBaseSetXML = SuperSetXML;

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
    pub fn SuperSetXML(self: KXMLGUIClient, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KXMLGUIClient_SuperSetXML(@ptrCast(self.ptr), document_str, merge);
    }

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
    pub fn SetDOMDocument(self: KXMLGUIClient, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KXMLGUIClient_SetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

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
    pub fn OnSetDOMDocument(self: KXMLGUIClient, callback: *const fn (KXMLGUIClient, QDomDocument, bool) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetDOMDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetDOMDocument` instead
    ///
    pub const QBaseSetDOMDocument = SuperSetDOMDocument;

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
    pub fn SuperSetDOMDocument(self: KXMLGUIClient, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KXMLGUIClient_SuperSetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

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
    pub fn StateChanged(self: KXMLGUIClient, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXMLGUIClient_StateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

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
    pub fn OnStateChanged(self: KXMLGUIClient, callback: *const fn (KXMLGUIClient, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStateChanged` instead
    ///
    pub const QBaseStateChanged = SuperStateChanged;

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
    pub fn SuperStateChanged(self: KXMLGUIClient, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXMLGUIClient_SuperStateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

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
    pub fn ReplaceXMLFile3(self: KXMLGUIClient, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
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

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#dtor.KXMLGUIClient)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KXMLGUIClient `
    ///
    pub fn Delete(self: KXMLGUIClient) void {
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

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient-statechange.html#actionsToEnable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient__StateChange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionsToEnable(self: KXMLGUIClient__StateChange, allocator: std.mem.Allocator) []const []const u8 {
        const actionsToEnable_arr: qtc.libqt_list = qtc.KXMLGUIClient__StateChange_ActionsToEnable(@ptrCast(self.ptr));
        var actionsToEnable_str: [*]qtc.libqt_string = @ptrCast(@alignCast(actionsToEnable_arr.data));
        defer {
            for (0..actionsToEnable_arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&actionsToEnable_str[i]));
            qtc.libqt_free(actionsToEnable_arr.data);
        }
        const actionsToEnable_ret = allocator.alloc([]const u8, actionsToEnable_arr.len) catch @panic("kxmlguiclient__statechange.ActionsToEnable: Memory allocation failed");
        for (0..actionsToEnable_arr.len) |i| {
            const actionsToEnable_data = actionsToEnable_str[i];
            const actionsToEnable_buf = allocator.alloc(u8, actionsToEnable_data.len) catch @panic("kxmlguiclient__statechange.ActionsToEnable: Memory allocation failed");
            @memcpy(actionsToEnable_buf, actionsToEnable_data.data[0..actionsToEnable_data.len]);
            actionsToEnable_ret[i] = actionsToEnable_buf;
        }
        return actionsToEnable_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient-statechange.html#actionsToEnable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient__StateChange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` actionsToEnable: []const []const u8 `
    ///
    pub fn SetActionsToEnable(self: KXMLGUIClient__StateChange, allocator: std.mem.Allocator, actionsToEnable: []const []const u8) void {
        const actionsToEnable_arr = allocator.alloc(qtc.libqt_string, actionsToEnable.len) catch @panic("kxmlguiclient__statechange.SetActionsToEnable: Memory allocation failed");
        defer allocator.free(actionsToEnable_arr);
        for (actionsToEnable, 0..actionsToEnable.len) |item, i|
            actionsToEnable_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const actionsToEnable_list = qtc.libqt_list{
            .len = actionsToEnable.len,
            .data = actionsToEnable_arr.ptr,
        };
        qtc.KXMLGUIClient__StateChange_SetActionsToEnable(@ptrCast(self.ptr), actionsToEnable_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient-statechange.html#actionsToDisable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient__StateChange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionsToDisable(self: KXMLGUIClient__StateChange, allocator: std.mem.Allocator) []const []const u8 {
        const actionsToDisable_arr: qtc.libqt_list = qtc.KXMLGUIClient__StateChange_ActionsToDisable(@ptrCast(self.ptr));
        var actionsToDisable_str: [*]qtc.libqt_string = @ptrCast(@alignCast(actionsToDisable_arr.data));
        defer {
            for (0..actionsToDisable_arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&actionsToDisable_str[i]));
            qtc.libqt_free(actionsToDisable_arr.data);
        }
        const actionsToDisable_ret = allocator.alloc([]const u8, actionsToDisable_arr.len) catch @panic("kxmlguiclient__statechange.ActionsToDisable: Memory allocation failed");
        for (0..actionsToDisable_arr.len) |i| {
            const actionsToDisable_data = actionsToDisable_str[i];
            const actionsToDisable_buf = allocator.alloc(u8, actionsToDisable_data.len) catch @panic("kxmlguiclient__statechange.ActionsToDisable: Memory allocation failed");
            @memcpy(actionsToDisable_buf, actionsToDisable_data.data[0..actionsToDisable_data.len]);
            actionsToDisable_ret[i] = actionsToDisable_buf;
        }
        return actionsToDisable_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient-statechange.html#actionsToDisable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KXMLGUIClient__StateChange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` actionsToDisable: []const []const u8 `
    ///
    pub fn SetActionsToDisable(self: KXMLGUIClient__StateChange, allocator: std.mem.Allocator, actionsToDisable: []const []const u8) void {
        const actionsToDisable_arr = allocator.alloc(qtc.libqt_string, actionsToDisable.len) catch @panic("kxmlguiclient__statechange.SetActionsToDisable: Memory allocation failed");
        defer allocator.free(actionsToDisable_arr);
        for (actionsToDisable, 0..actionsToDisable.len) |item, i|
            actionsToDisable_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const actionsToDisable_list = qtc.libqt_list{
            .len = actionsToDisable.len,
            .data = actionsToDisable_arr.ptr,
        };
        qtc.KXMLGUIClient__StateChange_SetActionsToDisable(@ptrCast(self.ptr), actionsToDisable_list);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KXMLGUIClient__StateChange `
    ///
    pub fn Delete(self: KXMLGUIClient__StateChange) void {
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
