const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kxmlguiclient_enums = @import("../extras-kxmlgui/libkxmlguiclient.zig").enums;
const std = @import("std");

/// https://api.kde.org/kparts-partbase.html
pub const kparts__partbase = struct {
    /// New constructs a new KParts::PartBase object.
    ///
    ///
    pub fn New() QtC.KParts__PartBase {
        return qtc.KParts__PartBase_new();
    }

    /// [Qt documentation](https://api.kde.org/kparts-partbase.html#setPartObject)
    ///
    /// ``` self: QtC.KParts__PartBase, object: QtC.QObject ```
    pub fn SetPartObject(self: ?*anyopaque, object: ?*anyopaque) void {
        qtc.KParts__PartBase_SetPartObject(@ptrCast(self), @ptrCast(object));
    }

    /// [Qt documentation](https://api.kde.org/kparts-partbase.html#partObject)
    ///
    /// ``` self: QtC.KParts__PartBase ```
    pub fn PartObject(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__PartBase_PartObject(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ``` self: QtC.KParts__PartBase, name: []const u8 ```
    pub fn Action(self: ?*anyopaque, name: []const u8) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KXMLGUIClient_Action(@ptrCast(self), name_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
    ///
    /// ``` self: QtC.KParts__PartBase, doc: QtC.QDomDocument ```
    pub fn SetXMLGUIBuildDocument(self: ?*anyopaque, doc: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self), @ptrCast(doc));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ``` self: QtC.KParts__PartBase ```
    pub fn XmlguiBuildDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ``` self: QtC.KParts__PartBase, factory: QtC.KXMLGUIFactory ```
    pub fn SetFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self), @ptrCast(factory));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ``` self: QtC.KParts__PartBase ```
    pub fn Factory(self: ?*anyopaque) QtC.KXMLGUIFactory {
        return qtc.KXMLGUIClient_Factory(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ``` self: QtC.KParts__PartBase ```
    pub fn ParentClient(self: ?*anyopaque) QtC.KXMLGUIClient {
        return qtc.KXMLGUIClient_ParentClient(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ``` self: QtC.KParts__PartBase, child: QtC.KXMLGUIClient ```
    pub fn InsertChildClient(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ``` self: QtC.KParts__PartBase, child: QtC.KXMLGUIClient ```
    pub fn RemoveChildClient(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ``` self: QtC.KParts__PartBase, allocator: std.mem.Allocator ```
    pub fn ChildClients(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KXMLGUIClient, _arr.len) catch @panic("kparts::partbase.ChildClients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
    ///
    /// ``` self: QtC.KParts__PartBase, builder: QtC.KXMLGUIBuilder ```
    pub fn SetClientBuilder(self: ?*anyopaque, builder: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self), @ptrCast(builder));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ``` self: QtC.KParts__PartBase ```
    pub fn ClientBuilder(self: ?*anyopaque) QtC.KXMLGUIBuilder {
        return qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ``` self: QtC.KParts__PartBase ```
    pub fn ReloadXML(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ``` self: QtC.KParts__PartBase, name: []const u8, actionList: []QtC.QAction ```
    pub fn PlugActionList(self: ?*anyopaque, name: []const u8, actionList: []?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const actionList_list = qtc.libqt_list{
            .len = actionList.len,
            .data = @ptrCast(actionList.ptr),
        };
        qtc.KXMLGUIClient_PlugActionList(@ptrCast(self), name_str, actionList_list);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#unplugActionList)
    ///
    /// ``` self: QtC.KParts__PartBase, name: []const u8 ```
    pub fn UnplugActionList(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self), name_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
    ///
    /// ``` files: [][]const u8, doc: []const u8, allocator: std.mem.Allocator ```
    pub fn FindMostRecentXMLFile(files: [][]const u8, doc: []const u8, allocator: std.mem.Allocator) []const u8 {
        var files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("kparts::partbase.FindMostRecentXMLFile: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i| {
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        const doc_str = qtc.libqt_string{
            .len = doc.len,
            .data = doc.ptr,
        };
        const _str = qtc.KXMLGUIClient_FindMostRecentXMLFile(files_list, doc_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::partbase.FindMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
    ///
    /// ``` self: QtC.KParts__PartBase, state: []const u8, action: []const u8 ```
    pub fn AddStateActionEnabled(self: ?*anyopaque, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionEnabled(@ptrCast(self), state_str, action_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
    ///
    /// ``` self: QtC.KParts__PartBase, state: []const u8, action: []const u8 ```
    pub fn AddStateActionDisabled(self: ?*anyopaque, state: []const u8, action: []const u8) void {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KXMLGUIClient_AddStateActionDisabled(@ptrCast(self), state_str, action_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
    ///
    /// ``` self: QtC.KParts__PartBase, state: []const u8 ```
    pub fn GetActionsToChangeForState(self: ?*anyopaque, state: []const u8) QtC.KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self), state_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
    ///
    /// ``` self: QtC.KParts__PartBase, param1: QtC.QWidget ```
    pub fn BeginXMLPlug(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ``` self: QtC.KParts__PartBase ```
    pub fn EndXMLPlug(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ``` self: QtC.KParts__PartBase, param1: QtC.QWidget ```
    pub fn PrepareXMLUnplug(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ``` self: QtC.KParts__PartBase, xmlfile: []const u8, localxmlfile: []const u8 ```
    pub fn ReplaceXMLFile(self: ?*anyopaque, xmlfile: []const u8, localxmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile(@ptrCast(self), xmlfile_str, localxmlfile_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
    ///
    /// ``` xml: []const u8, allocator: std.mem.Allocator ```
    pub fn FindVersionNumber(xml: []const u8, allocator: std.mem.Allocator) []const u8 {
        const xml_str = qtc.libqt_string{
            .len = xml.len,
            .data = xml.ptr,
        };
        const _str = qtc.KXMLGUIClient_FindVersionNumber(xml_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::partbase.FindVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ``` self: QtC.KParts__PartBase, xmlfile: []const u8, localxmlfile: []const u8, merge: bool ```
    pub fn ReplaceXMLFile3(self: ?*anyopaque, xmlfile: []const u8, localxmlfile: []const u8, merge: bool) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        const localxmlfile_str = qtc.libqt_string{
            .len = localxmlfile.len,
            .data = localxmlfile.ptr,
        };
        qtc.KXMLGUIClient_ReplaceXMLFile3(@ptrCast(self), xmlfile_str, localxmlfile_str, merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, element: QtC.QDomElement ```
    pub fn Action2(self: ?*anyopaque, element: ?*anyopaque) QtC.QAction {
        return qtc.KParts__PartBase_Action2(@ptrCast(self), @ptrCast(element));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, element: QtC.QDomElement ```
    pub fn QBaseAction2(self: ?*anyopaque, element: ?*anyopaque) QtC.QAction {
        return qtc.KParts__PartBase_QBaseAction2(@ptrCast(self), @ptrCast(element));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, callback: *const fn (self: QtC.KParts__PartBase, element: QtC.QDomElement) callconv(.c) QtC.QAction ```
    pub fn OnAction2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAction) void {
        qtc.KParts__PartBase_OnAction2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase ```
    pub fn ActionCollection(self: ?*anyopaque) QtC.KActionCollection {
        return qtc.KParts__PartBase_ActionCollection(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase ```
    pub fn QBaseActionCollection(self: ?*anyopaque) QtC.KActionCollection {
        return qtc.KParts__PartBase_QBaseActionCollection(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, callback: *const fn () callconv(.c) QtC.KActionCollection ```
    pub fn OnActionCollection(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KActionCollection) void {
        qtc.KParts__PartBase_OnActionCollection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, allocator: std.mem.Allocator ```
    pub fn ComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__PartBase_ComponentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::partbase.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, allocator: std.mem.Allocator ```
    pub fn QBaseComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__PartBase_QBaseComponentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::partbase.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnComponentName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__PartBase_OnComponentName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase ```
    pub fn DomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KParts__PartBase_DomDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase ```
    pub fn QBaseDomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KParts__PartBase_QBaseDomDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, callback: *const fn () callconv(.c) QtC.QDomDocument ```
    pub fn OnDomDocument(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QDomDocument) void {
        qtc.KParts__PartBase_OnDomDocument(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, allocator: std.mem.Allocator ```
    pub fn XmlFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__PartBase_XmlFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::partbase.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, allocator: std.mem.Allocator ```
    pub fn QBaseXmlFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__PartBase_QBaseXmlFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::partbase.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnXmlFile(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__PartBase_OnXmlFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, allocator: std.mem.Allocator ```
    pub fn LocalXMLFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__PartBase_LocalXMLFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::partbase.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, allocator: std.mem.Allocator ```
    pub fn QBaseLocalXMLFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__PartBase_QBaseLocalXMLFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::partbase.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnLocalXMLFile(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__PartBase_OnLocalXMLFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, componentName: []const u8, componentDisplayName: []const u8 ```
    pub fn SetComponentName(self: ?*anyopaque, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__PartBase_SetComponentName(@ptrCast(self), componentName_str, componentDisplayName_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, componentName: []const u8, componentDisplayName: []const u8 ```
    pub fn QBaseSetComponentName(self: ?*anyopaque, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__PartBase_QBaseSetComponentName(@ptrCast(self), componentName_str, componentDisplayName_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, callback: *const fn (self: QtC.KParts__PartBase, componentName: [*:0]const u8, componentDisplayName: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetComponentName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__PartBase_OnSetComponentName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, file: []const u8, merge: bool, setXMLDoc: bool ```
    pub fn SetXMLFile(self: ?*anyopaque, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__PartBase_SetXMLFile(@ptrCast(self), file_str, merge, setXMLDoc);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, file: []const u8, merge: bool, setXMLDoc: bool ```
    pub fn QBaseSetXMLFile(self: ?*anyopaque, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__PartBase_QBaseSetXMLFile(@ptrCast(self), file_str, merge, setXMLDoc);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, callback: *const fn (self: QtC.KParts__PartBase, file: [*:0]const u8, merge: bool, setXMLDoc: bool) callconv(.c) void ```
    pub fn OnSetXMLFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KParts__PartBase_OnSetXMLFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, file: []const u8 ```
    pub fn SetLocalXMLFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__PartBase_SetLocalXMLFile(@ptrCast(self), file_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, file: []const u8 ```
    pub fn QBaseSetLocalXMLFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__PartBase_QBaseSetLocalXMLFile(@ptrCast(self), file_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, callback: *const fn (self: QtC.KParts__PartBase, file: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetLocalXMLFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__PartBase_OnSetLocalXMLFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, document: []const u8, merge: bool ```
    pub fn SetXML(self: ?*anyopaque, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__PartBase_SetXML(@ptrCast(self), document_str, merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, document: []const u8, merge: bool ```
    pub fn QBaseSetXML(self: ?*anyopaque, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__PartBase_QBaseSetXML(@ptrCast(self), document_str, merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, callback: *const fn (self: QtC.KParts__PartBase, document: [*:0]const u8, merge: bool) callconv(.c) void ```
    pub fn OnSetXML(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KParts__PartBase_OnSetXML(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, document: QtC.QDomDocument, merge: bool ```
    pub fn SetDOMDocument(self: ?*anyopaque, document: ?*anyopaque, merge: bool) void {
        qtc.KParts__PartBase_SetDOMDocument(@ptrCast(self), @ptrCast(document), merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, document: QtC.QDomDocument, merge: bool ```
    pub fn QBaseSetDOMDocument(self: ?*anyopaque, document: ?*anyopaque, merge: bool) void {
        qtc.KParts__PartBase_QBaseSetDOMDocument(@ptrCast(self), @ptrCast(document), merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, callback: *const fn (self: QtC.KParts__PartBase, document: QtC.QDomDocument, merge: bool) callconv(.c) void ```
    pub fn OnSetDOMDocument(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__PartBase_OnSetDOMDocument(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, newstate: []const u8, reverse: kxmlguiclient_enums.ReverseStateChange ```
    pub fn StateChanged(self: ?*anyopaque, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__PartBase_StateChanged(@ptrCast(self), newstate_str, @intCast(reverse));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, newstate: []const u8, reverse: kxmlguiclient_enums.ReverseStateChange ```
    pub fn QBaseStateChanged(self: ?*anyopaque, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__PartBase_QBaseStateChanged(@ptrCast(self), newstate_str, @intCast(reverse));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, callback: *const fn (self: QtC.KParts__PartBase, newstate: [*:0]const u8, reverse: kxmlguiclient_enums.ReverseStateChange) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KParts__PartBase_OnStateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, allocator: std.mem.Allocator ```
    pub fn StandardsXmlFileLocation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__PartBase_StandardsXmlFileLocation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::partbase.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, allocator: std.mem.Allocator ```
    pub fn QBaseStandardsXmlFileLocation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__PartBase_QBaseStandardsXmlFileLocation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::partbase.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnStandardsXmlFileLocation(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__PartBase_OnStandardsXmlFileLocation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase ```
    pub fn LoadStandardsXmlFile(self: ?*anyopaque) void {
        qtc.KParts__PartBase_LoadStandardsXmlFile(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase ```
    pub fn QBaseLoadStandardsXmlFile(self: ?*anyopaque) void {
        qtc.KParts__PartBase_QBaseLoadStandardsXmlFile(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__PartBase, callback: *const fn () callconv(.c) void ```
    pub fn OnLoadStandardsXmlFile(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__PartBase_OnLoadStandardsXmlFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KParts__PartBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KParts__PartBase_Delete(@ptrCast(self));
    }
};
