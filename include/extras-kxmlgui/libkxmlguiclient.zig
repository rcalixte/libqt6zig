const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kxmlguiclient_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html)
pub const kxmlguiclient = struct {
    /// New constructs a new KXMLGUIClient object.
    ///
    pub fn New() QtC.KXMLGUIClient {
        return qtc.KXMLGUIClient_new();
    }

    /// New2 constructs a new KXMLGUIClient object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.KXMLGUIClient `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.KXMLGUIClient {
        return qtc.KXMLGUIClient_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Action(self: ?*anyopaque, name: []const u8) QtC.QAction {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KXMLGUIClient_Action(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` element: QtC.QDomElement `
    ///
    pub fn Action2(self: ?*anyopaque, element: ?*anyopaque) QtC.QAction {
        return qtc.KXMLGUIClient_Action2(@ptrCast(self), @ptrCast(element));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` callback: *const fn (self: QtC.KXMLGUIClient, element: QtC.QDomElement) callconv(.c) QtC.QAction `
    ///
    pub fn OnAction2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAction) void {
        qtc.KXMLGUIClient_OnAction2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` element: QtC.QDomElement `
    ///
    pub fn SuperAction2(self: ?*anyopaque, element: ?*anyopaque) QtC.QAction {
        return qtc.KXMLGUIClient_SuperAction2(@ptrCast(self), @ptrCast(element));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    pub fn ActionCollection(self: ?*anyopaque) QtC.KActionCollection {
        return qtc.KXMLGUIClient_ActionCollection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.KActionCollection `
    ///
    pub fn OnActionCollection(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KActionCollection) void {
        qtc.KXMLGUIClient_OnActionCollection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    pub fn SuperActionCollection(self: ?*anyopaque) QtC.KActionCollection {
        return qtc.KXMLGUIClient_SuperActionCollection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_ComponentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnComponentName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXMLGUIClient_OnComponentName(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_SuperComponentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    pub fn DomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KXMLGUIClient_DomDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QDomDocument `
    ///
    pub fn OnDomDocument(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QDomDocument) void {
        qtc.KXMLGUIClient_OnDomDocument(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    pub fn SuperDomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KXMLGUIClient_SuperDomDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn XmlFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_XmlFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnXmlFile(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXMLGUIClient_OnXmlFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperXmlFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_SuperXmlFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalXMLFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_LocalXMLFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLocalXMLFile(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXMLGUIClient_OnLocalXMLFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperLocalXMLFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_SuperLocalXMLFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` doc: QtC.QDomDocument `
    ///
    pub fn SetXMLGUIBuildDocument(self: ?*anyopaque, doc: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self), @ptrCast(doc));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    pub fn XmlguiBuildDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` factory: QtC.KXMLGUIFactory `
    ///
    pub fn SetFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self), @ptrCast(factory));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    pub fn Factory(self: ?*anyopaque) QtC.KXMLGUIFactory {
        return qtc.KXMLGUIClient_Factory(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    pub fn ParentClient(self: ?*anyopaque) QtC.KXMLGUIClient {
        return qtc.KXMLGUIClient_ParentClient(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` child: QtC.KXMLGUIClient `
    ///
    pub fn InsertChildClient(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self), @ptrCast(child));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` child: QtC.KXMLGUIClient `
    ///
    pub fn RemoveChildClient(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self), @ptrCast(child));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildClients(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KXMLGUIClient, _arr.len) catch @panic("kxmlguiclient.ChildClients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` builder: QtC.KXMLGUIBuilder `
    ///
    pub fn SetClientBuilder(self: ?*anyopaque, builder: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self), @ptrCast(builder));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    pub fn ClientBuilder(self: ?*anyopaque) QtC.KXMLGUIBuilder {
        return qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    pub fn ReloadXML(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` name: []const u8 `
    ///
    /// ` actionList: []QtC.QAction `
    ///
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

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` name: []const u8 `
    ///
    pub fn UnplugActionList(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIClient_UnplugActionList(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` files: []const []const u8 `
    ///
    /// ` doc: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FindMostRecentXMLFile(files: []const []const u8, doc: []const u8, allocator: std.mem.Allocator) []const u8 {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("kxmlguiclient.FindMostRecentXMLFile: Memory allocation failed");
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
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

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` state: []const u8 `
    ///
    /// ` action: []const u8 `
    ///
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

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` state: []const u8 `
    ///
    pub fn GetActionsToChangeForState(self: ?*anyopaque, state: []const u8) QtC.KXMLGUIClient__StateChange {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return qtc.KXMLGUIClient_GetActionsToChangeForState(@ptrCast(self), state_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` param1: QtC.QWidget `
    ///
    pub fn BeginXMLPlug(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    pub fn EndXMLPlug(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` param1: QtC.QWidget `
    ///
    pub fn PrepareXMLUnplug(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
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

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` xml: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FindVersionNumber(xml: []const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SetComponentName(self: ?*anyopaque, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KXMLGUIClient_SetComponentName(@ptrCast(self), componentName_str, componentDisplayName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` callback: *const fn (self: QtC.KXMLGUIClient, componentName: [*:0]const u8, componentDisplayName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetComponentName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetComponentName(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` componentName: []const u8 `
    ///
    /// ` componentDisplayName: []const u8 `
    ///
    pub fn SuperSetComponentName(self: ?*anyopaque, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KXMLGUIClient_SuperSetComponentName(@ptrCast(self), componentName_str, componentDisplayName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn SetXMLFile(self: ?*anyopaque, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXMLGUIClient_SetXMLFile(@ptrCast(self), file_str, merge, setXMLDoc);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` callback: *const fn (self: QtC.KXMLGUIClient, file: [*:0]const u8, merge: bool, setXMLDoc: bool) callconv(.c) void `
    ///
    pub fn OnSetXMLFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetXMLFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` file: []const u8 `
    ///
    /// ` merge: bool `
    ///
    /// ` setXMLDoc: bool `
    ///
    pub fn SuperSetXMLFile(self: ?*anyopaque, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXMLGUIClient_SuperSetXMLFile(@ptrCast(self), file_str, merge, setXMLDoc);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StandardsXmlFileLocation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_StandardsXmlFileLocation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnStandardsXmlFileLocation(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KXMLGUIClient_OnStandardsXmlFileLocation(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperStandardsXmlFileLocation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KXMLGUIClient_SuperStandardsXmlFileLocation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiclient.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    pub fn LoadStandardsXmlFile(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_LoadStandardsXmlFile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnLoadStandardsXmlFile(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KXMLGUIClient_OnLoadStandardsXmlFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    pub fn SuperLoadStandardsXmlFile(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_SuperLoadStandardsXmlFile(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SetLocalXMLFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXMLGUIClient_SetLocalXMLFile(@ptrCast(self), file_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` callback: *const fn (self: QtC.KXMLGUIClient, file: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetLocalXMLFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetLocalXMLFile(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` file: []const u8 `
    ///
    pub fn SuperSetLocalXMLFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXMLGUIClient_SuperSetLocalXMLFile(@ptrCast(self), file_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn SetXML(self: ?*anyopaque, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KXMLGUIClient_SetXML(@ptrCast(self), document_str, merge);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` callback: *const fn (self: QtC.KXMLGUIClient, document: [*:0]const u8, merge: bool) callconv(.c) void `
    ///
    pub fn OnSetXML(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetXML(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` document: []const u8 `
    ///
    /// ` merge: bool `
    ///
    pub fn SuperSetXML(self: ?*anyopaque, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KXMLGUIClient_SuperSetXML(@ptrCast(self), document_str, merge);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` document: QtC.QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn SetDOMDocument(self: ?*anyopaque, document: ?*anyopaque, merge: bool) void {
        qtc.KXMLGUIClient_SetDOMDocument(@ptrCast(self), @ptrCast(document), merge);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` callback: *const fn (self: QtC.KXMLGUIClient, document: QtC.QDomDocument, merge: bool) callconv(.c) void `
    ///
    pub fn OnSetDOMDocument(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnSetDOMDocument(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` document: QtC.QDomDocument `
    ///
    /// ` merge: bool `
    ///
    pub fn SuperSetDOMDocument(self: ?*anyopaque, document: ?*anyopaque, merge: bool) void {
        qtc.KXMLGUIClient_SuperSetDOMDocument(@ptrCast(self), @ptrCast(document), merge);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn StateChanged(self: ?*anyopaque, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXMLGUIClient_StateChanged(@ptrCast(self), newstate_str, @bitCast(reverse));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` callback: *const fn (self: QtC.KXMLGUIClient, newstate: [*:0]const u8, reverse: kxmlguiclient_enums.ReverseStateChange) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KXMLGUIClient_OnStateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` newstate: []const u8 `
    ///
    /// ` reverse: kxmlguiclient_enums.ReverseStateChange `
    ///
    pub fn SuperStateChanged(self: ?*anyopaque, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXMLGUIClient_SuperStateChanged(@ptrCast(self), newstate_str, @bitCast(reverse));
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    /// ` xmlfile: []const u8 `
    ///
    /// ` localxmlfile: []const u8 `
    ///
    /// ` merge: bool `
    ///
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

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#dtor.KXMLGUIClient)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KXMLGUIClient `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kxmlguiclient-statechange.html)
pub const kxmlguiclient__statechange = struct {
    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient-statechange.html#actionsToEnable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient__StateChange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionsToEnable(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const actionsToEnable_arr: qtc.libqt_list = qtc.KXMLGUIClient__StateChange_ActionsToEnable(@ptrCast(self));
        var actionsToEnable_str: [*]qtc.libqt_string = @ptrCast(@alignCast(actionsToEnable_arr.data));
        defer {
            for (0..actionsToEnable_arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&actionsToEnable_str[i]));
            }
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
    /// ` self: QtC.KXMLGUIClient__StateChange `
    ///
    /// ` actionsToEnable: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetActionsToEnable(self: ?*anyopaque, actionsToEnable: []const []const u8, allocator: std.mem.Allocator) void {
        const actionsToEnable_arr = allocator.alloc(qtc.libqt_string, actionsToEnable.len) catch @panic("kxmlguiclient__statechange.SetActionsToEnable: Memory allocation failed");
        defer allocator.free(actionsToEnable_arr);
        for (actionsToEnable, 0..actionsToEnable.len) |item, i| {
            actionsToEnable_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const actionsToEnable_list = qtc.libqt_list{
            .len = actionsToEnable.len,
            .data = actionsToEnable_arr.ptr,
        };
        qtc.KXMLGUIClient__StateChange_SetActionsToEnable(@ptrCast(self), actionsToEnable_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kxmlguiclient-statechange.html#actionsToDisable-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KXMLGUIClient__StateChange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionsToDisable(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const actionsToDisable_arr: qtc.libqt_list = qtc.KXMLGUIClient__StateChange_ActionsToDisable(@ptrCast(self));
        var actionsToDisable_str: [*]qtc.libqt_string = @ptrCast(@alignCast(actionsToDisable_arr.data));
        defer {
            for (0..actionsToDisable_arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&actionsToDisable_str[i]));
            }
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
    /// ` self: QtC.KXMLGUIClient__StateChange `
    ///
    /// ` actionsToDisable: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetActionsToDisable(self: ?*anyopaque, actionsToDisable: []const []const u8, allocator: std.mem.Allocator) void {
        const actionsToDisable_arr = allocator.alloc(qtc.libqt_string, actionsToDisable.len) catch @panic("kxmlguiclient__statechange.SetActionsToDisable: Memory allocation failed");
        defer allocator.free(actionsToDisable_arr);
        for (actionsToDisable, 0..actionsToDisable.len) |item, i| {
            actionsToDisable_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const actionsToDisable_list = qtc.libqt_list{
            .len = actionsToDisable.len,
            .data = actionsToDisable_arr.ptr,
        };
        qtc.KXMLGUIClient__StateChange_SetActionsToDisable(@ptrCast(self), actionsToDisable_list);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KXMLGUIClient__StateChange `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KXMLGUIClient__StateChange_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kxmlguiclient.html#public-types)
pub const enums = struct {
    pub const ReverseStateChange = enum(i32) {
        pub const StateNoReverse: i32 = 0;
        pub const StateReverse: i32 = 1;
    };
};
