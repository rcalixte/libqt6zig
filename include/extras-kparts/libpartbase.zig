const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KActionCollection = @import("libqt6").KActionCollection;
const KXMLGUIBuilder = @import("libqt6").KXMLGUIBuilder;
const KXMLGUIClient = @import("libqt6").KXMLGUIClient;
const KXMLGUIClient__StateChange = @import("libqt6").KXMLGUIClient__StateChange;
const KXMLGUIFactory = @import("libqt6").KXMLGUIFactory;
const QAction = @import("libqt6").QAction;
const QDomDocument = @import("libqt6").QDomDocument;
const QDomElement = @import("libqt6").QDomElement;
const QObject = @import("libqt6").QObject;
const QWidget = @import("libqt6").QWidget;
const kxmlguiclient_enums = @import("../extras-kxmlgui/libkxmlguiclient.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kparts-partbase.html)
pub const KParts__PartBase = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KParts__PartBase,

    pub const _is_KParts__PartBase = {};
    pub const _is_KXMLGUIClient = {};

    /// New constructs a new KParts::PartBase object.
    ///
    pub fn New() KParts__PartBase {
        return .{ .ptr = qtc.KParts__PartBase_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html#setPartObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` object: QObject `
    ///
    pub fn SetPartObject(self: KParts__PartBase, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.KParts__PartBase_SetPartObject(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-partbase.html#partObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    pub fn PartObject(self: KParts__PartBase) QObject {
        return .{ .ptr = qtc.KParts__PartBase_PartObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Action(self: KParts__PartBase, name: []const u8) QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_Action(@ptrCast(self.ptr), name_str) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` doc: QDomDocument `
    ///
    pub fn SetXMLGUIBuildDocument(self: KParts__PartBase, doc: anytype) void {
        comptime _ = @TypeOf(doc)._is_QDomDocument;
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self.ptr), @ptrCast(doc.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    pub fn XmlguiBuildDocument(self: KParts__PartBase) QDomDocument {
        return .{ .ptr = qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` factory: KXMLGUIFactory `
    ///
    pub fn SetFactory(self: KParts__PartBase, factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_KXMLGUIFactory;
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self.ptr), @ptrCast(factory.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    pub fn Factory(self: KParts__PartBase) KXMLGUIFactory {
        return .{ .ptr = qtc.KXMLGUIClient_Factory(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    pub fn ParentClient(self: KParts__PartBase) KXMLGUIClient {
        return .{ .ptr = qtc.KXMLGUIClient_ParentClient(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn InsertChildClient(self: KParts__PartBase, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` child: KXMLGUIClient `
    ///
    pub fn RemoveChildClient(self: KParts__PartBase, child: anytype) void {
        comptime _ = @TypeOf(child)._is_KXMLGUIClient;
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildClients(self: KParts__PartBase, allocator: std.mem.Allocator) []KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KXMLGUIClient, _arr.len) catch @panic("kparts__partbase.ChildClients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` builder: KXMLGUIBuilder `
    ///
    pub fn SetClientBuilder(self: KParts__PartBase, builder: anytype) void {
        comptime _ = @TypeOf(builder)._is_KXMLGUIBuilder;
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self.ptr), @ptrCast(builder.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    pub fn ClientBuilder(self: KParts__PartBase) KXMLGUIBuilder {
        return .{ .ptr = qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    pub fn ReloadXML(self: KParts__PartBase) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` name: []const u8 `
    ///
    /// ` actionList: []QAction `
    ///
    pub fn PlugActionList(self: KParts__PartBase, name: []const u8, actionList: []QAction) void {
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

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn UnplugActionList(self: KParts__PartBase, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self.ptr), name_str);
    }

    /// Inherited from KXMLGUIClient
    ///
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
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("kparts__partbase.FindMostRecentXMLFile: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__partbase.FindMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionEnabled(self: KParts__PartBase, state: []const u8, action: []const u8) void {
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

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddStateActionDisabled(self: KParts__PartBase, state: []const u8, action: []const u8) void {
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

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` state: []const u8 `
    ///
    pub fn GetActionsToChangeForState(self: KParts__PartBase, state: []const u8) KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return .{ .ptr = qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self.ptr), state_str) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` param1: QWidget `
    ///
    pub fn BeginXMLPlug(self: KParts__PartBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    pub fn EndXMLPlug(self: KParts__PartBase) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` param1: QWidget `
    ///
    pub fn PrepareXMLUnplug(self: KParts__PartBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    pub fn ReplaceXMLFile(self: KParts__PartBase, xmlfile: []const u8, localxmlfile: []const u8) void {
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

    /// Inherited from KXMLGUIClient
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__partbase.FindVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn ReplaceXMLFile3(self: KParts__PartBase, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
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

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` element: QDomElement `
    ///
    pub fn Action2(self: KParts__PartBase, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KParts__PartBase_Action2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAction2` instead
    ///
    pub const QBaseAction2 = SuperAction2;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` element: QDomElement `
    ///
    pub fn SuperAction2(self: KParts__PartBase, element: anytype) QAction {
        comptime _ = @TypeOf(element)._is_QDomElement;
        return .{ .ptr = qtc.KParts__PartBase_SuperAction2(@ptrCast(self.ptr), @ptrCast(element.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartBase`
    ///
    /// ` callback: *const fn (self: KParts__PartBase, element: QDomElement) callconv(.c) QAction `
    ///
    pub fn OnAction2(self: KParts__PartBase, callback: *const fn (KParts__PartBase, QDomElement) callconv(.c) QAction) void {
        qtc.KParts__PartBase_OnAction2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    pub fn ActionCollection(self: KParts__PartBase) KActionCollection {
        return .{ .ptr = qtc.KParts__PartBase_ActionCollection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperActionCollection` instead
    ///
    pub const QBaseActionCollection = SuperActionCollection;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    pub fn SuperActionCollection(self: KParts__PartBase) KActionCollection {
        return .{ .ptr = qtc.KParts__PartBase_SuperActionCollection(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartBase`
    ///
    /// ` callback: *const fn () callconv(.c) KActionCollection `
    ///
    pub fn OnActionCollection(self: KParts__PartBase, callback: *const fn () callconv(.c) KActionCollection) void {
        qtc.KParts__PartBase_OnActionCollection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ComponentName(self: KParts__PartBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__PartBase_ComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__partbase.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperComponentName` instead
    ///
    pub const QBaseComponentName = SuperComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperComponentName(self: KParts__PartBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__PartBase_SuperComponentName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__partbase.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartBase`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnComponentName(self: KParts__PartBase, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__PartBase_OnComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    pub fn DomDocument(self: KParts__PartBase) QDomDocument {
        return .{ .ptr = qtc.KParts__PartBase_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperDomDocument` instead
    ///
    pub const QBaseDomDocument = SuperDomDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    pub fn SuperDomDocument(self: KParts__PartBase) QDomDocument {
        return .{ .ptr = qtc.KParts__PartBase_SuperDomDocument(@ptrCast(self.ptr)) };
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartBase`
    ///
    /// ` callback: *const fn () callconv(.c) QDomDocument `
    ///
    pub fn OnDomDocument(self: KParts__PartBase, callback: *const fn () callconv(.c) QDomDocument) void {
        qtc.KParts__PartBase_OnDomDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn XmlFile(self: KParts__PartBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__PartBase_XmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__partbase.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperXmlFile` instead
    ///
    pub const QBaseXmlFile = SuperXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperXmlFile(self: KParts__PartBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__PartBase_SuperXmlFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__partbase.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartBase`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnXmlFile(self: KParts__PartBase, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__PartBase_OnXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalXMLFile(self: KParts__PartBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__PartBase_LocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__partbase.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperLocalXMLFile` instead
    ///
    pub const QBaseLocalXMLFile = SuperLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperLocalXMLFile(self: KParts__PartBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__PartBase_SuperLocalXMLFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__partbase.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartBase`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLocalXMLFile(self: KParts__PartBase, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__PartBase_OnLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SetComponentName(self: KParts__PartBase, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__PartBase_SetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// ### DEPRECATED: Use `SuperSetComponentName` instead
    ///
    pub const QBaseSetComponentName = SuperSetComponentName;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SuperSetComponentName(self: KParts__PartBase, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__PartBase_SuperSetComponentName(@ptrCast(self.ptr), componentName_str, componentDisplayName_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartBase`
    ///
    /// ` callback: *const fn (self: KParts__PartBase, componentName: [*:0]const u8, componentDisplayName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetComponentName(self: KParts__PartBase, callback: *const fn (KParts__PartBase, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__PartBase_OnSetComponentName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn SetXMLFile(self: KParts__PartBase, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__PartBase_SetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// ### DEPRECATED: Use `SuperSetXMLFile` instead
    ///
    pub const QBaseSetXMLFile = SuperSetXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn SuperSetXMLFile(self: KParts__PartBase, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__PartBase_SuperSetXMLFile(@ptrCast(self.ptr), file_str, merge, setXMLDoc);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartBase`
    ///
    /// ` callback: *const fn (self: KParts__PartBase, file: [*:0]const u8, merge: bool, setXMLDoc: bool) callconv(.c) void `
    ///
    pub fn OnSetXMLFile(self: KParts__PartBase, callback: *const fn (KParts__PartBase, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KParts__PartBase_OnSetXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SetLocalXMLFile(self: KParts__PartBase, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__PartBase_SetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// ### DEPRECATED: Use `SuperSetLocalXMLFile` instead
    ///
    pub const QBaseSetLocalXMLFile = SuperSetLocalXMLFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SuperSetLocalXMLFile(self: KParts__PartBase, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__PartBase_SuperSetLocalXMLFile(@ptrCast(self.ptr), file_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartBase`
    ///
    /// ` callback: *const fn (self: KParts__PartBase, file: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetLocalXMLFile(self: KParts__PartBase, callback: *const fn (KParts__PartBase, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__PartBase_OnSetLocalXMLFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn SetXML(self: KParts__PartBase, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__PartBase_SetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// ### DEPRECATED: Use `SuperSetXML` instead
    ///
    pub const QBaseSetXML = SuperSetXML;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn SuperSetXML(self: KParts__PartBase, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__PartBase_SuperSetXML(@ptrCast(self.ptr), document_str, merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartBase`
    ///
    /// ` callback: *const fn (self: KParts__PartBase, document: [*:0]const u8, merge: bool) callconv(.c) void `
    ///
    pub fn OnSetXML(self: KParts__PartBase, callback: *const fn (KParts__PartBase, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KParts__PartBase_OnSetXML(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` document: QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn SetDOMDocument(self: KParts__PartBase, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KParts__PartBase_SetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// ### DEPRECATED: Use `SuperSetDOMDocument` instead
    ///
    pub const QBaseSetDOMDocument = SuperSetDOMDocument;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` document: QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn SuperSetDOMDocument(self: KParts__PartBase, document: anytype, merge: bool) void {
        comptime _ = @TypeOf(document)._is_QDomDocument;
        qtc.KParts__PartBase_SuperSetDOMDocument(@ptrCast(self.ptr), @ptrCast(document.ptr), merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartBase`
    ///
    /// ` callback: *const fn (self: KParts__PartBase, document: QDomDocument, merge: bool) callconv(.c) void `
    ///
    pub fn OnSetDOMDocument(self: KParts__PartBase, callback: *const fn (KParts__PartBase, QDomDocument, bool) callconv(.c) void) void {
        qtc.KParts__PartBase_OnSetDOMDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn StateChanged(self: KParts__PartBase, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__PartBase_StateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// ### DEPRECATED: Use `SuperStateChanged` instead
    ///
    pub const QBaseStateChanged = SuperStateChanged;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn SuperStateChanged(self: KParts__PartBase, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__PartBase_SuperStateChanged(@ptrCast(self.ptr), newstate_str, @bitCast(reverse));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartBase`
    ///
    /// ` callback: *const fn (self: KParts__PartBase, newstate: [*:0]const u8, reverse: kxmlguiclient_enums.ReverseStateChange) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: KParts__PartBase, callback: *const fn (KParts__PartBase, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KParts__PartBase_OnStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StandardsXmlFileLocation(self: KParts__PartBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__PartBase_StandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__partbase.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperStandardsXmlFileLocation` instead
    ///
    pub const QBaseStandardsXmlFileLocation = SuperStandardsXmlFileLocation;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperStandardsXmlFileLocation(self: KParts__PartBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KParts__PartBase_SuperStandardsXmlFileLocation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts__partbase.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartBase`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnStandardsXmlFileLocation(self: KParts__PartBase, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__PartBase_OnStandardsXmlFileLocation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    pub fn LoadStandardsXmlFile(self: KParts__PartBase) void {
        qtc.KParts__PartBase_LoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperLoadStandardsXmlFile` instead
    ///
    pub const QBaseLoadStandardsXmlFile = SuperLoadStandardsXmlFile;

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__PartBase `
    ///
    pub fn SuperLoadStandardsXmlFile(self: KParts__PartBase) void {
        qtc.KParts__PartBase_SuperLoadStandardsXmlFile(@ptrCast(self.ptr));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__PartBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnLoadStandardsXmlFile(self: KParts__PartBase, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__PartBase_OnLoadStandardsXmlFile(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__PartBase `
    ///
    pub fn Delete(self: KParts__PartBase) void {
        qtc.KParts__PartBase_Delete(@ptrCast(self.ptr));
    }
};
