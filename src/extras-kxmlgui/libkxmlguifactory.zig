const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kxmlguifactory.html
pub const kxmlguifactory = struct {
    /// New constructs a new KXMLGUIFactory object.
    ///
    /// ``` builder: QtC.KXMLGUIBuilder ```
    pub fn New(builder: ?*anyopaque) QtC.KXMLGUIFactory {
        return qtc.KXMLGUIFactory_new(@ptrCast(builder));
    }

    /// New2 constructs a new KXMLGUIFactory object.
    ///
    /// ``` builder: QtC.KXMLGUIBuilder, parent: QtC.QObject ```
    pub fn New2(builder: ?*anyopaque, parent: ?*anyopaque) QtC.KXMLGUIFactory {
        return qtc.KXMLGUIFactory_new2(@ptrCast(builder), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KXMLGUIFactory_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KXMLGUIFactory, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KXMLGUIFactory_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KXMLGUIFactory, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KXMLGUIFactory_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KXMLGUIFactory_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KXMLGUIFactory, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KXMLGUIFactory_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KXMLGUIFactory_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguifactory.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#readConfigFile)
    ///
    /// ``` filename: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadConfigFile(filename: []const u8, allocator: std.mem.Allocator) []const u8 {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        const _str = qtc.KXMLGUIFactory_ReadConfigFile(filename_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguifactory.ReadConfigFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#saveConfigFile)
    ///
    /// ``` doc: QtC.QDomDocument, filename: []const u8 ```
    pub fn SaveConfigFile(doc: ?*anyopaque, filename: []const u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.KXMLGUIFactory_SaveConfigFile(@ptrCast(doc), filename_str);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#actionPropertiesElement)
    ///
    /// ``` doc: QtC.QDomDocument ```
    pub fn ActionPropertiesElement(doc: ?*anyopaque) QtC.QDomElement {
        return qtc.KXMLGUIFactory_ActionPropertiesElement(@ptrCast(doc));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#findActionByName)
    ///
    /// ``` elem: QtC.QDomElement, sName: []const u8, create: bool ```
    pub fn FindActionByName(elem: ?*anyopaque, sName: []const u8, create: bool) QtC.QDomElement {
        const sName_str = qtc.libqt_string{
            .len = sName.len,
            .data = sName.ptr,
        };
        return qtc.KXMLGUIFactory_FindActionByName(@ptrCast(elem), sName_str, create);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#addClient)
    ///
    /// ``` self: QtC.KXMLGUIFactory, client: QtC.KXMLGUIClient ```
    pub fn AddClient(self: ?*anyopaque, client: ?*anyopaque) void {
        qtc.KXMLGUIFactory_AddClient(@ptrCast(self), @ptrCast(client));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#removeClient)
    ///
    /// ``` self: QtC.KXMLGUIFactory, client: QtC.KXMLGUIClient ```
    pub fn RemoveClient(self: ?*anyopaque, client: ?*anyopaque) void {
        qtc.KXMLGUIFactory_RemoveClient(@ptrCast(self), @ptrCast(client));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#plugActionList)
    ///
    /// ``` self: QtC.KXMLGUIFactory, client: QtC.KXMLGUIClient, name: []const u8, actionList: []QtC.QAction ```
    pub fn PlugActionList(self: ?*anyopaque, client: ?*anyopaque, name: []const u8, actionList: []?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const actionList_list = qtc.libqt_list{
            .len = actionList.len,
            .data = @ptrCast(actionList.ptr),
        };
        qtc.KXMLGUIFactory_PlugActionList(@ptrCast(self), @ptrCast(client), name_str, actionList_list);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#unplugActionList)
    ///
    /// ``` self: QtC.KXMLGUIFactory, client: QtC.KXMLGUIClient, name: []const u8 ```
    pub fn UnplugActionList(self: ?*anyopaque, client: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXMLGUIFactory_UnplugActionList(@ptrCast(self), @ptrCast(client), name_str);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#clients)
    ///
    /// ``` self: QtC.KXMLGUIFactory, allocator: std.mem.Allocator ```
    pub fn Clients(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIFactory_Clients(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KXMLGUIClient, _arr.len) catch @panic("kxmlguifactory.Clients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#container)
    ///
    /// ``` self: QtC.KXMLGUIFactory, containerName: []const u8, client: QtC.KXMLGUIClient ```
    pub fn Container(self: ?*anyopaque, containerName: []const u8, client: ?*anyopaque) QtC.QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return qtc.KXMLGUIFactory_Container(@ptrCast(self), containerName_str, @ptrCast(client));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#containers)
    ///
    /// ``` self: QtC.KXMLGUIFactory, tagName: []const u8, allocator: std.mem.Allocator ```
    pub fn Containers(self: ?*anyopaque, tagName: []const u8, allocator: std.mem.Allocator) []QtC.QWidget {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KXMLGUIFactory_Containers(@ptrCast(self), tagName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("kxmlguifactory.Containers: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#reset)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.KXMLGUIFactory_Reset(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#resetContainer)
    ///
    /// ``` self: QtC.KXMLGUIFactory, containerName: []const u8 ```
    pub fn ResetContainer(self: ?*anyopaque, containerName: []const u8) void {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        qtc.KXMLGUIFactory_ResetContainer(@ptrCast(self), containerName_str);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#refreshActionProperties)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn RefreshActionProperties(self: ?*anyopaque) void {
        qtc.KXMLGUIFactory_RefreshActionProperties(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#showConfigureShortcutsDialog)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn ShowConfigureShortcutsDialog(self: ?*anyopaque) void {
        qtc.KXMLGUIFactory_ShowConfigureShortcutsDialog(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#changeShortcutScheme)
    ///
    /// ``` self: QtC.KXMLGUIFactory, scheme: []const u8 ```
    pub fn ChangeShortcutScheme(self: ?*anyopaque, scheme: []const u8) void {
        const scheme_str = qtc.libqt_string{
            .len = scheme.len,
            .data = scheme.ptr,
        };
        qtc.KXMLGUIFactory_ChangeShortcutScheme(@ptrCast(self), scheme_str);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#clientAdded)
    ///
    /// ``` self: QtC.KXMLGUIFactory, client: QtC.KXMLGUIClient ```
    pub fn ClientAdded(self: ?*anyopaque, client: ?*anyopaque) void {
        qtc.KXMLGUIFactory_ClientAdded(@ptrCast(self), @ptrCast(client));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#clientAdded)
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, client: QtC.KXMLGUIClient) callconv(.c) void ```
    pub fn OnClientAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXMLGUIFactory_Connect_ClientAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#clientRemoved)
    ///
    /// ``` self: QtC.KXMLGUIFactory, client: QtC.KXMLGUIClient ```
    pub fn ClientRemoved(self: ?*anyopaque, client: ?*anyopaque) void {
        qtc.KXMLGUIFactory_ClientRemoved(@ptrCast(self), @ptrCast(client));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#clientRemoved)
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, client: QtC.KXMLGUIClient) callconv(.c) void ```
    pub fn OnClientRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXMLGUIFactory_Connect_ClientRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#makingChanges)
    ///
    /// ``` self: QtC.KXMLGUIFactory, param1: bool ```
    pub fn MakingChanges(self: ?*anyopaque, param1: bool) void {
        qtc.KXMLGUIFactory_MakingChanges(@ptrCast(self), param1);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#makingChanges)
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, param1: bool) callconv(.c) void ```
    pub fn OnMakingChanges(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KXMLGUIFactory_Connect_MakingChanges(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#shortcutsSaved)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn ShortcutsSaved(self: ?*anyopaque) void {
        qtc.KXMLGUIFactory_ShortcutsSaved(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#shortcutsSaved)
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory) callconv(.c) void ```
    pub fn OnShortcutsSaved(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KXMLGUIFactory_Connect_ShortcutsSaved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KXMLGUIFactory_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguifactory.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KXMLGUIFactory_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguifactory.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#readConfigFile)
    ///
    /// ``` filename: []const u8, componentName: []const u8, allocator: std.mem.Allocator ```
    pub fn ReadConfigFile2(filename: []const u8, componentName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const _str = qtc.KXMLGUIFactory_ReadConfigFile2(filename_str, componentName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguifactory.ReadConfigFile2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#saveConfigFile)
    ///
    /// ``` doc: QtC.QDomDocument, filename: []const u8, componentName: []const u8 ```
    pub fn SaveConfigFile3(doc: ?*anyopaque, filename: []const u8, componentName: []const u8) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        return qtc.KXMLGUIFactory_SaveConfigFile3(@ptrCast(doc), filename_str, componentName_str);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#container)
    ///
    /// ``` self: QtC.KXMLGUIFactory, containerName: []const u8, client: QtC.KXMLGUIClient, useTagName: bool ```
    pub fn Container3(self: ?*anyopaque, containerName: []const u8, client: ?*anyopaque, useTagName: bool) QtC.QWidget {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        return qtc.KXMLGUIFactory_Container3(@ptrCast(self), containerName_str, @ptrCast(client), useTagName);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#resetContainer)
    ///
    /// ``` self: QtC.KXMLGUIFactory, containerName: []const u8, useTagName: bool ```
    pub fn ResetContainer2(self: ?*anyopaque, containerName: []const u8, useTagName: bool) void {
        const containerName_str = qtc.libqt_string{
            .len = containerName.len,
            .data = containerName.ptr,
        };
        qtc.KXMLGUIFactory_ResetContainer2(@ptrCast(self), containerName_str, useTagName);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KXMLGUIFactory, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguifactory.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KXMLGUIFactory, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KXMLGUIFactory, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KXMLGUIFactory, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KXMLGUIFactory, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KXMLGUIFactory, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KXMLGUIFactory, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KXMLGUIFactory, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kxmlguifactory.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KXMLGUIFactory, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KXMLGUIFactory, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KXMLGUIFactory, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KXMLGUIFactory, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KXMLGUIFactory, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KXMLGUIFactory, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KXMLGUIFactory, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KXMLGUIFactory, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KXMLGUIFactory, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KXMLGUIFactory, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KXMLGUIFactory, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KXMLGUIFactory, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KXMLGUIFactory_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KXMLGUIFactory_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KXMLGUIFactory_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KXMLGUIFactory_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KXMLGUIFactory_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KXMLGUIFactory_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXMLGUIFactory_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXMLGUIFactory_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXMLGUIFactory_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXMLGUIFactory_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXMLGUIFactory_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXMLGUIFactory_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KXMLGUIFactory_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KXMLGUIFactory_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KXMLGUIFactory_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KXMLGUIFactory_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXMLGUIFactory_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KXMLGUIFactory_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KXMLGUIFactory_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KXMLGUIFactory_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KXMLGUIFactory_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KXMLGUIFactory_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KXMLGUIFactory_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KXMLGUIFactory_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KXMLGUIFactory_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KXMLGUIFactory_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KXMLGUIFactory_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KXMLGUIFactory_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KXMLGUIFactory_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KXMLGUIFactory, callback: *const fn (self: QtC.KXMLGUIFactory, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguifactory.html#dtor.KXMLGUIFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KXMLGUIFactory ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KXMLGUIFactory_Delete(@ptrCast(self));
    }
};
