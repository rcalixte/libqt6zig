const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kxmlguiclient_enums = @import("libkxmlguiclient.zig").enums;
const kxmlguiwindow_enums = enums;
const qmainwindow_enums = @import("../libqmainwindow.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qtabwidget_enums = @import("../libqtabwidget.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// https://api.kde.org/kxmlguiwindow.html
pub const kxmlguiwindow = struct {
    /// New constructs a new KXmlGuiWindow object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.KXmlGuiWindow {
        return qtc.KXmlGuiWindow_new(@ptrCast(parent));
    }

    /// New2 constructs a new KXmlGuiWindow object.
    ///
    ///
    pub fn New2() QtC.KXmlGuiWindow {
        return qtc.KXmlGuiWindow_new2();
    }

    /// New3 constructs a new KXmlGuiWindow object.
    ///
    /// ``` parent: QtC.QWidget, flags: flag of qnamespace_enums.WindowType ```
    pub fn New3(parent: ?*anyopaque, flags: i64) QtC.KXmlGuiWindow {
        return qtc.KXmlGuiWindow_new3(@ptrCast(parent), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KXmlGuiWindow_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KXmlGuiWindow, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KXmlGuiWindow_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KXmlGuiWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KXmlGuiWindow_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KXmlGuiWindow_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KXmlGuiWindow_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setHelpMenuEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SetHelpMenuEnabled(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_SetHelpMenuEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#isHelpMenuEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsHelpMenuEnabled(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_IsHelpMenuEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#guiFactory)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn GuiFactory(self: ?*anyopaque) QtC.KXMLGUIFactory {
        return qtc.KXmlGuiWindow_GuiFactory(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#guiFactory)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) QtC.KXMLGUIFactory ```
    pub fn OnGuiFactory(self: ?*anyopaque, slot: fn () callconv(.c) QtC.KXMLGUIFactory) void {
        qtc.KXmlGuiWindow_OnGuiFactory(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#guiFactory)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseGuiFactory(self: ?*anyopaque) QtC.KXMLGUIFactory {
        return qtc.KXmlGuiWindow_QBaseGuiFactory(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#createGUI)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn CreateGUI(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_CreateGUI(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setStandardToolBarMenuEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow, showToolBarMenu: bool ```
    pub fn SetStandardToolBarMenuEnabled(self: ?*anyopaque, showToolBarMenu: bool) void {
        qtc.KXmlGuiWindow_SetStandardToolBarMenuEnabled(@ptrCast(self), showToolBarMenu);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#isStandardToolBarMenuEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsStandardToolBarMenuEnabled(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_IsStandardToolBarMenuEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#createStandardStatusBarAction)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn CreateStandardStatusBarAction(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_CreateStandardStatusBarAction(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SetupGUI(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_SetupGUI(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ``` self: QtC.KXmlGuiWindow, defaultSize: QtC.QSize ```
    pub fn SetupGUI2(self: ?*anyopaque, defaultSize: ?*anyopaque) void {
        qtc.KXmlGuiWindow_SetupGUI2(@ptrCast(self), @ptrCast(defaultSize));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#toolBarMenuAction)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ToolBarMenuAction(self: ?*anyopaque) QtC.QAction {
        return qtc.KXmlGuiWindow_ToolBarMenuAction(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupToolbarMenuActions)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SetupToolbarMenuActions(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_SetupToolbarMenuActions(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#toolBarNames)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn ToolBarNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_ToolBarNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kxmlguiwindow.ToolBarNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguiwindow.ToolBarNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#finalizeGUI)
    ///
    /// ``` self: QtC.KXmlGuiWindow, force: bool ```
    pub fn FinalizeGUI(self: ?*anyopaque, force: bool) void {
        qtc.KXmlGuiWindow_FinalizeGUI(@ptrCast(self), force);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
    ///
    /// ``` self: QtC.KXmlGuiWindow, config: QtC.KConfigGroup ```
    pub fn ApplyMainWindowSettings(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KXmlGuiWindow_ApplyMainWindowSettings(@ptrCast(self), @ptrCast(config));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, config: QtC.KConfigGroup) callconv(.c) void ```
    pub fn OnApplyMainWindowSettings(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnApplyMainWindowSettings(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXmlGuiWindow, config: QtC.KConfigGroup ```
    pub fn QBaseApplyMainWindowSettings(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseApplyMainWindowSettings(@ptrCast(self), @ptrCast(config));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setCommandBarEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow, showCommandBar: bool ```
    pub fn SetCommandBarEnabled(self: ?*anyopaque, showCommandBar: bool) void {
        qtc.KXmlGuiWindow_SetCommandBarEnabled(@ptrCast(self), showCommandBar);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#isCommandBarEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsCommandBarEnabled(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_IsCommandBarEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#configureToolbars)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ConfigureToolbars(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_ConfigureToolbars(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#configureToolbars)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) void ```
    pub fn OnConfigureToolbars(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnConfigureToolbars(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#configureToolbars)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseConfigureToolbars(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseConfigureToolbars(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
    ///
    /// ``` self: QtC.KXmlGuiWindow, newstate: []const u8 ```
    pub fn SlotStateChanged(self: ?*anyopaque, newstate: []const u8) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_SlotStateChanged(@ptrCast(self), newstate_str);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, newstate: [*:0]const u8) callconv(.c) void ```
    pub fn OnSlotStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSlotStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXmlGuiWindow, newstate: []const u8 ```
    pub fn QBaseSlotStateChanged(self: ?*anyopaque, newstate: []const u8) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_QBaseSlotStateChanged(@ptrCast(self), newstate_str);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
    ///
    /// ``` self: QtC.KXmlGuiWindow, newstate: []const u8, reverse: bool ```
    pub fn SlotStateChanged2(self: ?*anyopaque, newstate: []const u8, reverse: bool) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_SlotStateChanged2(@ptrCast(self), newstate_str, reverse);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#isToolBarVisible)
    ///
    /// ``` self: QtC.KXmlGuiWindow, name: []const u8 ```
    pub fn IsToolBarVisible(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KXmlGuiWindow_IsToolBarVisible(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setToolBarVisible)
    ///
    /// ``` self: QtC.KXmlGuiWindow, name: []const u8, visible: bool ```
    pub fn SetToolBarVisible(self: ?*anyopaque, name: []const u8, visible: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXmlGuiWindow_SetToolBarVisible(@ptrCast(self), name_str, visible);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#event)
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_Event(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn CheckAmbiguousShortcuts(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_CheckAmbiguousShortcuts(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) void ```
    pub fn OnCheckAmbiguousShortcuts(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnCheckAmbiguousShortcuts(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseCheckAmbiguousShortcuts(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseCheckAmbiguousShortcuts(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#saveNewToolbarConfig)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SaveNewToolbarConfig(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_SaveNewToolbarConfig(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#saveNewToolbarConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) void ```
    pub fn OnSaveNewToolbarConfig(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSaveNewToolbarConfig(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#saveNewToolbarConfig)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseSaveNewToolbarConfig(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseSaveNewToolbarConfig(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KXmlGuiWindow_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KXmlGuiWindow_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setHelpMenuEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow, showHelpMenu: bool ```
    pub fn SetHelpMenuEnabled1(self: ?*anyopaque, showHelpMenu: bool) void {
        qtc.KXmlGuiWindow_SetHelpMenuEnabled1(@ptrCast(self), showHelpMenu);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#createGUI)
    ///
    /// ``` self: QtC.KXmlGuiWindow, xmlfile: []const u8 ```
    pub fn CreateGUI1(self: ?*anyopaque, xmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        qtc.KXmlGuiWindow_CreateGUI1(@ptrCast(self), xmlfile_str);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ``` self: QtC.KXmlGuiWindow, options: flag of kxmlguiwindow_enums.StandardWindowOption ```
    pub fn SetupGUI1(self: ?*anyopaque, options: i32) void {
        qtc.KXmlGuiWindow_SetupGUI1(@ptrCast(self), @intCast(options));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ``` self: QtC.KXmlGuiWindow, options: flag of kxmlguiwindow_enums.StandardWindowOption, xmlfile: []const u8 ```
    pub fn SetupGUI22(self: ?*anyopaque, options: i32, xmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        qtc.KXmlGuiWindow_SetupGUI22(@ptrCast(self), @intCast(options), xmlfile_str);
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ``` self: QtC.KXmlGuiWindow, defaultSize: QtC.QSize, options: flag of kxmlguiwindow_enums.StandardWindowOption ```
    pub fn SetupGUI23(self: ?*anyopaque, defaultSize: ?*anyopaque, options: i32) void {
        qtc.KXmlGuiWindow_SetupGUI23(@ptrCast(self), @ptrCast(defaultSize), @intCast(options));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ``` self: QtC.KXmlGuiWindow, defaultSize: QtC.QSize, options: flag of kxmlguiwindow_enums.StandardWindowOption, xmlfile: []const u8 ```
    pub fn SetupGUI3(self: ?*anyopaque, defaultSize: ?*anyopaque, options: i32, xmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        qtc.KXmlGuiWindow_SetupGUI3(@ptrCast(self), @ptrCast(defaultSize), @intCast(options), xmlfile_str);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#canBeRestored)
    ///
    /// ``` numberOfInstances: i32 ```
    pub fn CanBeRestored(numberOfInstances: i32) bool {
        return qtc.KMainWindow_CanBeRestored(@intCast(numberOfInstances));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#classNameOfToplevel)
    ///
    /// ``` instanceNumber: i32, allocator: std.mem.Allocator ```
    pub fn ClassNameOfToplevel(instanceNumber: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KMainWindow_ClassNameOfToplevel(@intCast(instanceNumber));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.ClassNameOfToplevel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#restore)
    ///
    /// ``` self: QtC.KXmlGuiWindow, numberOfInstances: i32 ```
    pub fn Restore(self: ?*anyopaque, numberOfInstances: i32) bool {
        return qtc.KMainWindow_Restore(@ptrCast(self), @intCast(numberOfInstances));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#hasMenuBar)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn HasMenuBar(self: ?*anyopaque) bool {
        return qtc.KMainWindow_HasMenuBar(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#memberList)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn MemberList(allocator: std.mem.Allocator) []QtC.KMainWindow {
        const _arr: qtc.libqt_list = qtc.KMainWindow_MemberList();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KMainWindow, _arr.len) catch @panic("kxmlguiwindow.MemberList: Memory allocation failed");
        const _data: [*]QtC.KMainWindow = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#toolBar)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ToolBar(self: ?*anyopaque) QtC.KToolBar {
        return qtc.KMainWindow_ToolBar(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#toolBars)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn ToolBars(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KToolBar {
        const _arr: qtc.libqt_list = qtc.KMainWindow_ToolBars(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KToolBar, _arr.len) catch @panic("kxmlguiwindow.ToolBars: Memory allocation failed");
        const _data: [*]QtC.KToolBar = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SetAutoSaveSettings(self: ?*anyopaque) void {
        qtc.KMainWindow_SetAutoSaveSettings(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ``` self: QtC.KXmlGuiWindow, group: QtC.KConfigGroup ```
    pub fn SetAutoSaveSettings2(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.KMainWindow_SetAutoSaveSettings2(@ptrCast(self), @ptrCast(group));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#resetAutoSaveSettings)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ResetAutoSaveSettings(self: ?*anyopaque) void {
        qtc.KMainWindow_ResetAutoSaveSettings(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#autoSaveSettings)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn AutoSaveSettings(self: ?*anyopaque) bool {
        return qtc.KMainWindow_AutoSaveSettings(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#autoSaveGroup)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn AutoSaveGroup(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KMainWindow_AutoSaveGroup(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.AutoSaveGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#autoSaveConfigGroup)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn AutoSaveConfigGroup(self: ?*anyopaque) QtC.KConfigGroup {
        return qtc.KMainWindow_AutoSaveConfigGroup(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setStateConfigGroup)
    ///
    /// ``` self: QtC.KXmlGuiWindow, configGroup: []const u8 ```
    pub fn SetStateConfigGroup(self: ?*anyopaque, configGroup: []const u8) void {
        const configGroup_str = qtc.libqt_string{
            .len = configGroup.len,
            .data = configGroup.ptr,
        };
        qtc.KMainWindow_SetStateConfigGroup(@ptrCast(self), configGroup_str);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#stateConfigGroup)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn StateConfigGroup(self: ?*anyopaque) QtC.KConfigGroup {
        return qtc.KMainWindow_StateConfigGroup(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveMainWindowSettings)
    ///
    /// ``` self: QtC.KXmlGuiWindow, config: QtC.KConfigGroup ```
    pub fn SaveMainWindowSettings(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KMainWindow_SaveMainWindowSettings(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#dbusName)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn DbusName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KMainWindow_DbusName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.DbusName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// ``` self: QtC.KXmlGuiWindow, caption: []const u8, modified: bool ```
    pub fn SetCaption2(self: ?*anyopaque, caption: []const u8, modified: bool) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_SetCaption2(@ptrCast(self), caption_str, modified);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, caption: [*:0]const u8, modified: bool) callconv(.c) void ```
    pub fn OnSetCaption2(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KMainWindow_OnSetCaption2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KXmlGuiWindow, caption: []const u8, modified: bool ```
    pub fn QBaseSetCaption2(self: ?*anyopaque, caption: []const u8, modified: bool) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KMainWindow_QBaseSetCaption2(@ptrCast(self), caption_str, modified);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#appHelpActivated)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn AppHelpActivated(self: ?*anyopaque) void {
        qtc.KMainWindow_AppHelpActivated(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setSettingsDirty)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SetSettingsDirty(self: ?*anyopaque) void {
        qtc.KMainWindow_SetSettingsDirty(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#restore)
    ///
    /// ``` self: QtC.KXmlGuiWindow, numberOfInstances: i32, show: bool ```
    pub fn Restore2(self: ?*anyopaque, numberOfInstances: i32, show: bool) bool {
        return qtc.KMainWindow_Restore2(@ptrCast(self), @intCast(numberOfInstances), show);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#toolBar)
    ///
    /// ``` self: QtC.KXmlGuiWindow, name: []const u8 ```
    pub fn ToolBar1(self: ?*anyopaque, name: []const u8) QtC.KToolBar {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KMainWindow_ToolBar1(@ptrCast(self), name_str);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ``` self: QtC.KXmlGuiWindow, groupName: []const u8 ```
    pub fn SetAutoSaveSettings1(self: ?*anyopaque, groupName: []const u8) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KMainWindow_SetAutoSaveSettings1(@ptrCast(self), groupName_str);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ``` self: QtC.KXmlGuiWindow, groupName: []const u8, saveWindowSize: bool ```
    pub fn SetAutoSaveSettings22(self: ?*anyopaque, groupName: []const u8, saveWindowSize: bool) void {
        const groupName_str = qtc.libqt_string{
            .len = groupName.len,
            .data = groupName.ptr,
        };
        qtc.KMainWindow_SetAutoSaveSettings22(@ptrCast(self), groupName_str, saveWindowSize);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ``` self: QtC.KXmlGuiWindow, group: QtC.KConfigGroup, saveWindowSize: bool ```
    pub fn SetAutoSaveSettings23(self: ?*anyopaque, group: ?*anyopaque, saveWindowSize: bool) void {
        qtc.KMainWindow_SetAutoSaveSettings23(@ptrCast(self), @ptrCast(group), saveWindowSize);
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#iconSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QMainWindow_IconSize(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setIconSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow, iconSize: QtC.QSize ```
    pub fn SetIconSize(self: ?*anyopaque, iconSize: ?*anyopaque) void {
        qtc.QMainWindow_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyle)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    ///
    /// Returns: ``` qnamespace_enums.ToolButtonStyle ```
    pub fn ToolButtonStyle(self: ?*anyopaque) i32 {
        return qtc.QMainWindow_ToolButtonStyle(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setToolButtonStyle)
    ///
    /// ``` self: QtC.KXmlGuiWindow, toolButtonStyle: qnamespace_enums.ToolButtonStyle ```
    pub fn SetToolButtonStyle(self: ?*anyopaque, toolButtonStyle: i32) void {
        qtc.QMainWindow_SetToolButtonStyle(@ptrCast(self), @intCast(toolButtonStyle));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isAnimated)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsAnimated(self: ?*anyopaque) bool {
        return qtc.QMainWindow_IsAnimated(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isDockNestingEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsDockNestingEnabled(self: ?*anyopaque) bool {
        return qtc.QMainWindow_IsDockNestingEnabled(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#documentMode)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn DocumentMode(self: ?*anyopaque) bool {
        return qtc.QMainWindow_DocumentMode(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDocumentMode)
    ///
    /// ``` self: QtC.KXmlGuiWindow, enabled: bool ```
    pub fn SetDocumentMode(self: ?*anyopaque, enabled: bool) void {
        qtc.QMainWindow_SetDocumentMode(@ptrCast(self), enabled);
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabShape)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    ///
    /// Returns: ``` qtabwidget_enums.TabShape ```
    pub fn TabShape(self: ?*anyopaque) i32 {
        return qtc.QMainWindow_TabShape(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setTabShape)
    ///
    /// ``` self: QtC.KXmlGuiWindow, tabShape: qtabwidget_enums.TabShape ```
    pub fn SetTabShape(self: ?*anyopaque, tabShape: i32) void {
        qtc.QMainWindow_SetTabShape(@ptrCast(self), @intCast(tabShape));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabPosition)
    ///
    /// ``` self: QtC.KXmlGuiWindow, area: qnamespace_enums.DockWidgetArea ```
    ///
    /// Returns: ``` qtabwidget_enums.TabPosition ```
    pub fn TabPosition(self: ?*anyopaque, area: i32) i32 {
        return qtc.QMainWindow_TabPosition(@ptrCast(self), @intCast(area));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setTabPosition)
    ///
    /// ``` self: QtC.KXmlGuiWindow, areas: flag of qnamespace_enums.DockWidgetArea, tabPosition: qtabwidget_enums.TabPosition ```
    pub fn SetTabPosition(self: ?*anyopaque, areas: i32, tabPosition: i32) void {
        qtc.QMainWindow_SetTabPosition(@ptrCast(self), @intCast(areas), @intCast(tabPosition));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDockOptions)
    ///
    /// ``` self: QtC.KXmlGuiWindow, options: flag of qmainwindow_enums.DockOption ```
    pub fn SetDockOptions(self: ?*anyopaque, options: i32) void {
        qtc.QMainWindow_SetDockOptions(@ptrCast(self), @intCast(options));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#dockOptions)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    ///
    /// Returns: ``` flag of qmainwindow_enums.DockOption ```
    pub fn DockOptions(self: ?*anyopaque) i32 {
        return qtc.QMainWindow_DockOptions(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isSeparator)
    ///
    /// ``` self: QtC.KXmlGuiWindow, pos: QtC.QPoint ```
    pub fn IsSeparator(self: ?*anyopaque, pos: ?*anyopaque) bool {
        return qtc.QMainWindow_IsSeparator(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#menuBar)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn MenuBar(self: ?*anyopaque) QtC.QMenuBar {
        return qtc.QMainWindow_MenuBar(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setMenuBar)
    ///
    /// ``` self: QtC.KXmlGuiWindow, menubar: QtC.QMenuBar ```
    pub fn SetMenuBar(self: ?*anyopaque, menubar: ?*anyopaque) void {
        qtc.QMainWindow_SetMenuBar(@ptrCast(self), @ptrCast(menubar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#menuWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn MenuWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QMainWindow_MenuWidget(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setMenuWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow, menubar: QtC.QWidget ```
    pub fn SetMenuWidget(self: ?*anyopaque, menubar: ?*anyopaque) void {
        qtc.QMainWindow_SetMenuWidget(@ptrCast(self), @ptrCast(menubar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#statusBar)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn StatusBar(self: ?*anyopaque) QtC.QStatusBar {
        return qtc.QMainWindow_StatusBar(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setStatusBar)
    ///
    /// ``` self: QtC.KXmlGuiWindow, statusbar: QtC.QStatusBar ```
    pub fn SetStatusBar(self: ?*anyopaque, statusbar: ?*anyopaque) void {
        qtc.QMainWindow_SetStatusBar(@ptrCast(self), @ptrCast(statusbar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#centralWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn CentralWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QMainWindow_CentralWidget(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setCentralWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow, widget: QtC.QWidget ```
    pub fn SetCentralWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QMainWindow_SetCentralWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#takeCentralWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn TakeCentralWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QMainWindow_TakeCentralWidget(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setCorner)
    ///
    /// ``` self: QtC.KXmlGuiWindow, corner: qnamespace_enums.Corner, area: qnamespace_enums.DockWidgetArea ```
    pub fn SetCorner(self: ?*anyopaque, corner: i32, area: i32) void {
        qtc.QMainWindow_SetCorner(@ptrCast(self), @intCast(corner), @intCast(area));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#corner)
    ///
    /// ``` self: QtC.KXmlGuiWindow, corner: qnamespace_enums.Corner ```
    ///
    /// Returns: ``` qnamespace_enums.DockWidgetArea ```
    pub fn Corner(self: ?*anyopaque, corner: i32) i32 {
        return qtc.QMainWindow_Corner(@ptrCast(self), @intCast(corner));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn AddToolBarBreak(self: ?*anyopaque) void {
        qtc.QMainWindow_AddToolBarBreak(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBarBreak)
    ///
    /// ``` self: QtC.KXmlGuiWindow, before: QtC.QToolBar ```
    pub fn InsertToolBarBreak(self: ?*anyopaque, before: ?*anyopaque) void {
        qtc.QMainWindow_InsertToolBarBreak(@ptrCast(self), @ptrCast(before));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
    ///
    /// ``` self: QtC.KXmlGuiWindow, area: qnamespace_enums.ToolBarArea, toolbar: QtC.QToolBar ```
    pub fn AddToolBar(self: ?*anyopaque, area: i32, toolbar: ?*anyopaque) void {
        qtc.QMainWindow_AddToolBar(@ptrCast(self), @intCast(area), @ptrCast(toolbar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
    ///
    /// ``` self: QtC.KXmlGuiWindow, toolbar: QtC.QToolBar ```
    pub fn AddToolBar2(self: ?*anyopaque, toolbar: ?*anyopaque) void {
        qtc.QMainWindow_AddToolBar2(@ptrCast(self), @ptrCast(toolbar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
    ///
    /// ``` self: QtC.KXmlGuiWindow, title: []const u8 ```
    pub fn AddToolBar3(self: ?*anyopaque, title: []const u8) QtC.QToolBar {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return qtc.QMainWindow_AddToolBar3(@ptrCast(self), title_str);
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBar)
    ///
    /// ``` self: QtC.KXmlGuiWindow, before: QtC.QToolBar, toolbar: QtC.QToolBar ```
    pub fn InsertToolBar(self: ?*anyopaque, before: ?*anyopaque, toolbar: ?*anyopaque) void {
        qtc.QMainWindow_InsertToolBar(@ptrCast(self), @ptrCast(before), @ptrCast(toolbar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBar)
    ///
    /// ``` self: QtC.KXmlGuiWindow, toolbar: QtC.QToolBar ```
    pub fn RemoveToolBar(self: ?*anyopaque, toolbar: ?*anyopaque) void {
        qtc.QMainWindow_RemoveToolBar(@ptrCast(self), @ptrCast(toolbar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBarBreak)
    ///
    /// ``` self: QtC.KXmlGuiWindow, before: QtC.QToolBar ```
    pub fn RemoveToolBarBreak(self: ?*anyopaque, before: ?*anyopaque) void {
        qtc.QMainWindow_RemoveToolBarBreak(@ptrCast(self), @ptrCast(before));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#unifiedTitleAndToolBarOnMac)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn UnifiedTitleAndToolBarOnMac(self: ?*anyopaque) bool {
        return qtc.QMainWindow_UnifiedTitleAndToolBarOnMac(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolBarArea)
    ///
    /// ``` self: QtC.KXmlGuiWindow, toolbar: QtC.QToolBar ```
    ///
    /// Returns: ``` qnamespace_enums.ToolBarArea ```
    pub fn ToolBarArea(self: ?*anyopaque, toolbar: ?*anyopaque) i32 {
        return qtc.QMainWindow_ToolBarArea(@ptrCast(self), @ptrCast(toolbar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolBarBreak)
    ///
    /// ``` self: QtC.KXmlGuiWindow, toolbar: QtC.QToolBar ```
    pub fn ToolBarBreak(self: ?*anyopaque, toolbar: ?*anyopaque) bool {
        return qtc.QMainWindow_ToolBarBreak(@ptrCast(self), @ptrCast(toolbar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow, area: qnamespace_enums.DockWidgetArea, dockwidget: QtC.QDockWidget ```
    pub fn AddDockWidget(self: ?*anyopaque, area: i32, dockwidget: ?*anyopaque) void {
        qtc.QMainWindow_AddDockWidget(@ptrCast(self), @intCast(area), @ptrCast(dockwidget));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow, area: qnamespace_enums.DockWidgetArea, dockwidget: QtC.QDockWidget, orientation: qnamespace_enums.Orientation ```
    pub fn AddDockWidget2(self: ?*anyopaque, area: i32, dockwidget: ?*anyopaque, orientation: i32) void {
        qtc.QMainWindow_AddDockWidget2(@ptrCast(self), @intCast(area), @ptrCast(dockwidget), @intCast(orientation));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#splitDockWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow, after: QtC.QDockWidget, dockwidget: QtC.QDockWidget, orientation: qnamespace_enums.Orientation ```
    pub fn SplitDockWidget(self: ?*anyopaque, after: ?*anyopaque, dockwidget: ?*anyopaque, orientation: i32) void {
        qtc.QMainWindow_SplitDockWidget(@ptrCast(self), @ptrCast(after), @ptrCast(dockwidget), @intCast(orientation));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifyDockWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow, first: QtC.QDockWidget, second: QtC.QDockWidget ```
    pub fn TabifyDockWidget(self: ?*anyopaque, first: ?*anyopaque, second: ?*anyopaque) void {
        qtc.QMainWindow_TabifyDockWidget(@ptrCast(self), @ptrCast(first), @ptrCast(second));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgets)
    ///
    /// ``` self: QtC.KXmlGuiWindow, dockwidget: QtC.QDockWidget, allocator: std.mem.Allocator ```
    pub fn TabifiedDockWidgets(self: ?*anyopaque, dockwidget: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDockWidget {
        const _arr: qtc.libqt_list = qtc.QMainWindow_TabifiedDockWidgets(@ptrCast(self), @ptrCast(dockwidget));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDockWidget, _arr.len) catch @panic("kxmlguiwindow.TabifiedDockWidgets: Memory allocation failed");
        const _data: [*]QtC.QDockWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeDockWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow, dockwidget: QtC.QDockWidget ```
    pub fn RemoveDockWidget(self: ?*anyopaque, dockwidget: ?*anyopaque) void {
        qtc.QMainWindow_RemoveDockWidget(@ptrCast(self), @ptrCast(dockwidget));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreDockWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow, dockwidget: QtC.QDockWidget ```
    pub fn RestoreDockWidget(self: ?*anyopaque, dockwidget: ?*anyopaque) bool {
        return qtc.QMainWindow_RestoreDockWidget(@ptrCast(self), @ptrCast(dockwidget));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#dockWidgetArea)
    ///
    /// ``` self: QtC.KXmlGuiWindow, dockwidget: QtC.QDockWidget ```
    ///
    /// Returns: ``` qnamespace_enums.DockWidgetArea ```
    pub fn DockWidgetArea(self: ?*anyopaque, dockwidget: ?*anyopaque) i32 {
        return qtc.QMainWindow_DockWidgetArea(@ptrCast(self), @ptrCast(dockwidget));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#resizeDocks)
    ///
    /// ``` self: QtC.KXmlGuiWindow, docks: []QtC.QDockWidget, sizes: []i32, orientation: qnamespace_enums.Orientation ```
    pub fn ResizeDocks(self: ?*anyopaque, docks: []?*anyopaque, sizes: []i32, orientation: i32) void {
        const docks_list = qtc.libqt_list{
            .len = docks.len,
            .data = @ptrCast(docks.ptr),
        };
        const sizes_list = qtc.libqt_list{
            .len = sizes.len,
            .data = sizes.ptr,
        };
        qtc.QMainWindow_ResizeDocks(@ptrCast(self), docks_list, sizes_list, @intCast(orientation));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn SaveState(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMainWindow_SaveState(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kxmlguiwindow.SaveState: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
    ///
    /// ``` self: QtC.KXmlGuiWindow, state: []u8 ```
    pub fn RestoreState(self: ?*anyopaque, state: []u8) bool {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return qtc.QMainWindow_RestoreState(@ptrCast(self), state_str);
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setAnimated)
    ///
    /// ``` self: QtC.KXmlGuiWindow, enabled: bool ```
    pub fn SetAnimated(self: ?*anyopaque, enabled: bool) void {
        qtc.QMainWindow_SetAnimated(@ptrCast(self), enabled);
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDockNestingEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow, enabled: bool ```
    pub fn SetDockNestingEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QMainWindow_SetDockNestingEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setUnifiedTitleAndToolBarOnMac)
    ///
    /// ``` self: QtC.KXmlGuiWindow, set: bool ```
    pub fn SetUnifiedTitleAndToolBarOnMac(self: ?*anyopaque, set: bool) void {
        qtc.QMainWindow_SetUnifiedTitleAndToolBarOnMac(@ptrCast(self), set);
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
    ///
    /// ``` self: QtC.KXmlGuiWindow, iconSize: QtC.QSize ```
    pub fn IconSizeChanged(self: ?*anyopaque, iconSize: ?*anyopaque) void {
        qtc.QMainWindow_IconSizeChanged(@ptrCast(self), @ptrCast(iconSize));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, iconSize: QtC.QSize) callconv(.c) void ```
    pub fn OnIconSizeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMainWindow_Connect_IconSizeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
    ///
    /// ``` self: QtC.KXmlGuiWindow, toolButtonStyle: qnamespace_enums.ToolButtonStyle ```
    pub fn ToolButtonStyleChanged(self: ?*anyopaque, toolButtonStyle: i32) void {
        qtc.QMainWindow_ToolButtonStyleChanged(@ptrCast(self), @intCast(toolButtonStyle));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, toolButtonStyle: qnamespace_enums.ToolButtonStyle) callconv(.c) void ```
    pub fn OnToolButtonStyleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QMainWindow_Connect_ToolButtonStyleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
    ///
    /// ``` self: QtC.KXmlGuiWindow, dockWidget: QtC.QDockWidget ```
    pub fn TabifiedDockWidgetActivated(self: ?*anyopaque, dockWidget: ?*anyopaque) void {
        qtc.QMainWindow_TabifiedDockWidgetActivated(@ptrCast(self), @ptrCast(dockWidget));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, dockWidget: QtC.QDockWidget) callconv(.c) void ```
    pub fn OnTabifiedDockWidgetActivated(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMainWindow_Connect_TabifiedDockWidgetActivated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
    ///
    /// ``` self: QtC.KXmlGuiWindow, area: qnamespace_enums.ToolBarArea ```
    pub fn AddToolBarBreak1(self: ?*anyopaque, area: i32) void {
        qtc.QMainWindow_AddToolBarBreak1(@ptrCast(self), @intCast(area));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
    ///
    /// ``` self: QtC.KXmlGuiWindow, version: i32, allocator: std.mem.Allocator ```
    pub fn SaveState1(self: ?*anyopaque, version: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMainWindow_SaveState1(@ptrCast(self), @intCast(version));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kxmlguiwindow.SaveState1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
    ///
    /// ``` self: QtC.KXmlGuiWindow, state: []u8, version: i32 ```
    pub fn RestoreState2(self: ?*anyopaque, state: []u8, version: i32) bool {
        const state_str = qtc.libqt_string{
            .len = state.len,
            .data = state.ptr,
        };
        return qtc.QMainWindow_RestoreState2(@ptrCast(self), state_str, @intCast(version));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: QtC.KXmlGuiWindow, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    ///
    /// Returns: ``` qnamespace_enums.WindowModality ```
    pub fn WindowModality(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: QtC.KXmlGuiWindow, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: QtC.KXmlGuiWindow, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow, minimumSize: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow, maximumSize: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: QtC.KXmlGuiWindow, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: QtC.KXmlGuiWindow, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: QtC.KXmlGuiWindow, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: QtC.KXmlGuiWindow, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.KXmlGuiWindow, sizeIncrement: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.KXmlGuiWindow, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow, baseSize: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow, fixedSize: QtC.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: QtC.KXmlGuiWindow, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: QtC.KXmlGuiWindow, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QPoint ```
    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QPoint ```
    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QPoint ```
    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QPoint ```
    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: QtC.KXmlGuiWindow, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: QtC.KXmlGuiWindow, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn BackgroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: QtC.KXmlGuiWindow, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn ForegroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ``` self: QtC.KXmlGuiWindow, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: QtC.KXmlGuiWindow, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: QtC.KXmlGuiWindow, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: QtC.KXmlGuiWindow, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.KXmlGuiWindow, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.KXmlGuiWindow, mask: QtC.QRegion ```
    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KXmlGuiWindow, target: QtC.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KXmlGuiWindow, painter: QtC.QPainter ```
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.KXmlGuiWindow, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.KXmlGuiWindow, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: QtC.KXmlGuiWindow, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.KXmlGuiWindow, windowTitle: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ``` self: QtC.KXmlGuiWindow, styleSheet: []const u8 ```
    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: QtC.KXmlGuiWindow, icon: QtC.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: QtC.KXmlGuiWindow, windowIconText: []const u8 ```
    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: QtC.KXmlGuiWindow, windowRole: []const u8 ```
    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: QtC.KXmlGuiWindow, filePath: []const u8 ```
    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: QtC.KXmlGuiWindow, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: QtC.KXmlGuiWindow, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: QtC.KXmlGuiWindow, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: QtC.KXmlGuiWindow, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: QtC.KXmlGuiWindow, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: QtC.KXmlGuiWindow, name: []const u8 ```
    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: QtC.KXmlGuiWindow, description: []const u8 ```
    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ``` self: QtC.KXmlGuiWindow, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: QtC.KXmlGuiWindow, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.KXmlGuiWindow, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocus2(self: ?*anyopaque, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    ///
    /// Returns: ``` qnamespace_enums.FocusPolicy ```
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.KXmlGuiWindow, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ``` param1: QtC.QWidget, param2: QtC.QWidget ```
    pub fn SetTabOrder(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QWidget_SetTabOrder(@ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ``` self: QtC.KXmlGuiWindow, focusProxy: QtC.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    ///
    /// Returns: ``` qnamespace_enums.ContextMenuPolicy ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: QtC.KXmlGuiWindow, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QCursor ```
    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.KXmlGuiWindow, key: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.KXmlGuiWindow, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.KXmlGuiWindow, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    ///
    pub fn MouseGrabber() QtC.QWidget {
        return qtc.QWidget_MouseGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    ///
    pub fn KeyboardGrabber() QtC.QWidget {
        return qtc.QWidget_KeyboardGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QWidget_Update(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KXmlGuiWindow, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QRect ```
    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QRegion ```
    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KXmlGuiWindow, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QRect ```
    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QRegion ```
    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: QtC.KXmlGuiWindow, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.KXmlGuiWindow, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QPoint ```
    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.KXmlGuiWindow, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QSize ```
    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.KXmlGuiWindow, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.KXmlGuiWindow, geometry: QtC.QRect ```
    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kxmlguiwindow.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: QtC.KXmlGuiWindow, geometry: []u8 ```
    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowState ```
    pub fn WindowState(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: QtC.KXmlGuiWindow, state: flag of qnamespace_enums.WindowState ```
    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: QtC.KXmlGuiWindow, state: flag of qnamespace_enums.WindowState ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.KXmlGuiWindow, sizePolicy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.KXmlGuiWindow, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.KXmlGuiWindow, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.KXmlGuiWindow, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: QtC.KXmlGuiWindow, layout: QtC.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.KXmlGuiWindow, parent: QtC.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.KXmlGuiWindow, parent: QtC.QWidget, f: flag of qnamespace_enums.WindowType ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.KXmlGuiWindow, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.KXmlGuiWindow, dx: i32, dy: i32, param3: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: QtC.KXmlGuiWindow, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KXmlGuiWindow, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: QtC.KXmlGuiWindow, actions: []QtC.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ``` self: QtC.KXmlGuiWindow, before: QtC.QAction, actions: []QtC.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ``` self: QtC.KXmlGuiWindow, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: QtC.KXmlGuiWindow, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("kxmlguiwindow.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KXmlGuiWindow, text: []const u8 ```
    pub fn AddAction2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction2(@ptrCast(self), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KXmlGuiWindow, icon: QtC.QIcon, text: []const u8 ```
    pub fn AddAction3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction3(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KXmlGuiWindow, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction4(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction4(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KXmlGuiWindow, icon: QtC.QIcon, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction5(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction5(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.KXmlGuiWindow, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowType ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: QtC.KXmlGuiWindow, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    ///
    /// Returns: ``` qnamespace_enums.WindowType ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ``` param1: u64 ```
    pub fn Find(param1: u64) QtC.QWidget {
        return qtc.QWidget_Find(@intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KXmlGuiWindow, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KXmlGuiWindow, p: QtC.QPoint ```
    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KXmlGuiWindow, p: QtC.QPointF ```
    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: QtC.KXmlGuiWindow, child: QtC.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.KXmlGuiWindow, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: QtC.KXmlGuiWindow, screen: QtC.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWidget_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow ```
    pub fn CreateWindowContainer(window: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer(@ptrCast(window));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.KXmlGuiWindow, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, title: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.KXmlGuiWindow, icon: QtC.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, icon: QtC.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.KXmlGuiWindow, iconText: []const u8 ```
    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, iconText: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.KXmlGuiWindow, pos: QtC.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, pos: QtC.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    ///
    /// Returns: ``` flag of qnamespace_enums.InputMethodHint ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: QtC.KXmlGuiWindow, hints: flag of qnamespace_enums.InputMethodHint ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KXmlGuiWindow, target: QtC.QPaintDevice, targetOffset: QtC.QPoint ```
    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KXmlGuiWindow, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KXmlGuiWindow, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KXmlGuiWindow, painter: QtC.QPainter, targetOffset: QtC.QPoint ```
    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KXmlGuiWindow, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KXmlGuiWindow, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.KXmlGuiWindow, rectangle: QtC.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.KXmlGuiWindow, typeVal: qnamespace_enums.GestureType, flags: flag of qnamespace_enums.GestureFlag ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.KXmlGuiWindow, key: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i32) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.KXmlGuiWindow, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget ```
    pub fn CreateWindowContainer2(window: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer2(@ptrCast(window), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget, flags: flag of qnamespace_enums.WindowType ```
    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i64) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KXmlGuiWindow, name: []const u8 ```
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
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KXmlGuiWindow, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KXmlGuiWindow, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KXmlGuiWindow, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KXmlGuiWindow, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KXmlGuiWindow, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kxmlguiwindow.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KXmlGuiWindow, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KXmlGuiWindow, obj: QtC.QObject ```
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
    /// ``` self: QtC.KXmlGuiWindow, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KXmlGuiWindow, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KXmlGuiWindow, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kxmlguiwindow.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguiwindow.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KXmlGuiWindow, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KXmlGuiWindow, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KXmlGuiWindow, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KXmlGuiWindow, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ``` metric: qpaintdevice_enums.PaintDeviceMetric, value: f64 ```
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#builderClient)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn BuilderClient(self: ?*anyopaque) QtC.KXMLGUIClient {
        return qtc.KXMLGUIBuilder_BuilderClient(@ptrCast(self));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#setBuilderClient)
    ///
    /// ``` self: QtC.KXmlGuiWindow, client: QtC.KXMLGUIClient ```
    pub fn SetBuilderClient(self: ?*anyopaque, client: ?*anyopaque) void {
        qtc.KXMLGUIBuilder_SetBuilderClient(@ptrCast(self), @ptrCast(client));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#widget)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KXMLGUIBuilder_Widget(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ``` self: QtC.KXmlGuiWindow, name: []const u8 ```
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
    /// ``` self: QtC.KXmlGuiWindow, doc: QtC.QDomDocument ```
    pub fn SetXMLGUIBuildDocument(self: ?*anyopaque, doc: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self), @ptrCast(doc));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn XmlguiBuildDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ``` self: QtC.KXmlGuiWindow, factory: QtC.KXMLGUIFactory ```
    pub fn SetFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self), @ptrCast(factory));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Factory(self: ?*anyopaque) QtC.KXMLGUIFactory {
        return qtc.KXMLGUIClient_Factory(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ParentClient(self: ?*anyopaque) QtC.KXMLGUIClient {
        return qtc.KXMLGUIClient_ParentClient(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ``` self: QtC.KXmlGuiWindow, child: QtC.KXMLGUIClient ```
    pub fn InsertChildClient(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ``` self: QtC.KXmlGuiWindow, child: QtC.KXMLGUIClient ```
    pub fn RemoveChildClient(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn ChildClients(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KXMLGUIClient, _arr.len) catch @panic("kxmlguiwindow.ChildClients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
    ///
    /// ``` self: QtC.KXmlGuiWindow, builder: QtC.KXMLGUIBuilder ```
    pub fn SetClientBuilder(self: ?*anyopaque, builder: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self), @ptrCast(builder));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ClientBuilder(self: ?*anyopaque) QtC.KXMLGUIBuilder {
        return qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ReloadXML(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ``` self: QtC.KXmlGuiWindow, name: []const u8, actionList: []QtC.QAction ```
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
    /// ``` self: QtC.KXmlGuiWindow, name: []const u8 ```
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
        var files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("kxmlguiwindow.FindMostRecentXMLFile: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.FindMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
    ///
    /// ``` self: QtC.KXmlGuiWindow, state: []const u8, action: []const u8 ```
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
    /// ``` self: QtC.KXmlGuiWindow, state: []const u8, action: []const u8 ```
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
    /// ``` self: QtC.KXmlGuiWindow, state: []const u8 ```
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
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QWidget ```
    pub fn BeginXMLPlug(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn EndXMLPlug(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QWidget ```
    pub fn PrepareXMLUnplug(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ``` self: QtC.KXmlGuiWindow, xmlfile: []const u8, localxmlfile: []const u8 ```
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.FindVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ``` self: QtC.KXmlGuiWindow, xmlfile: []const u8, localxmlfile: []const u8, merge: bool ```
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

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, caption: []const u8 ```
    pub fn SetCaption(self: ?*anyopaque, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KXmlGuiWindow_SetCaption(@ptrCast(self), caption_str);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, caption: []const u8 ```
    pub fn QBaseSetCaption(self: ?*anyopaque, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KXmlGuiWindow_QBaseSetCaption(@ptrCast(self), caption_str);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, caption: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetCaption(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetCaption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setPlainCaption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, caption: []const u8 ```
    pub fn SetPlainCaption(self: ?*anyopaque, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KXmlGuiWindow_SetPlainCaption(@ptrCast(self), caption_str);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setPlainCaption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, caption: []const u8 ```
    pub fn QBaseSetPlainCaption(self: ?*anyopaque, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KXmlGuiWindow_QBaseSetPlainCaption(@ptrCast(self), caption_str);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setPlainCaption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, caption: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetPlainCaption(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetPlainCaption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, keyEvent: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, keyEvent: ?*anyopaque) void {
        qtc.KXmlGuiWindow_KeyPressEvent(@ptrCast(self), @ptrCast(keyEvent));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, keyEvent: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, keyEvent: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(keyEvent));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, keyEvent: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXmlGuiWindow_CloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseCloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, param1: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#queryClose)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QueryClose(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_QueryClose(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#queryClose)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseQueryClose(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_QBaseQueryClose(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#queryClose)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) bool ```
    pub fn OnQueryClose(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnQueryClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.KConfigGroup ```
    pub fn SaveProperties(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXmlGuiWindow_SaveProperties(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveProperties)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.KConfigGroup ```
    pub fn QBaseSaveProperties(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseSaveProperties(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveProperties)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, param1: QtC.KConfigGroup) callconv(.c) void ```
    pub fn OnSaveProperties(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSaveProperties(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.KConfigGroup ```
    pub fn ReadProperties(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXmlGuiWindow_ReadProperties(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readProperties)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.KConfigGroup ```
    pub fn QBaseReadProperties(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseReadProperties(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readProperties)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, param1: QtC.KConfigGroup) callconv(.c) void ```
    pub fn OnReadProperties(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnReadProperties(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, sessionConfig: QtC.KConfig ```
    pub fn SaveGlobalProperties(self: ?*anyopaque, sessionConfig: ?*anyopaque) void {
        qtc.KXmlGuiWindow_SaveGlobalProperties(@ptrCast(self), @ptrCast(sessionConfig));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, sessionConfig: QtC.KConfig ```
    pub fn QBaseSaveGlobalProperties(self: ?*anyopaque, sessionConfig: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseSaveGlobalProperties(@ptrCast(self), @ptrCast(sessionConfig));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, sessionConfig: QtC.KConfig) callconv(.c) void ```
    pub fn OnSaveGlobalProperties(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSaveGlobalProperties(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readGlobalProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, sessionConfig: QtC.KConfig ```
    pub fn ReadGlobalProperties(self: ?*anyopaque, sessionConfig: ?*anyopaque) void {
        qtc.KXmlGuiWindow_ReadGlobalProperties(@ptrCast(self), @ptrCast(sessionConfig));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readGlobalProperties)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, sessionConfig: QtC.KConfig ```
    pub fn QBaseReadGlobalProperties(self: ?*anyopaque, sessionConfig: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseReadGlobalProperties(@ptrCast(self), @ptrCast(sessionConfig));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readGlobalProperties)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, sessionConfig: QtC.KConfig) callconv(.c) void ```
    pub fn OnReadGlobalProperties(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnReadGlobalProperties(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn CreatePopupMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.KXmlGuiWindow_CreatePopupMenu(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseCreatePopupMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.KXmlGuiWindow_QBaseCreatePopupMenu(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) QtC.QMenu ```
    pub fn OnCreatePopupMenu(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMenu) void {
        qtc.KXmlGuiWindow_OnCreatePopupMenu(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.KXmlGuiWindow_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.KXmlGuiWindow_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KXmlGuiWindow_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KXmlGuiWindow_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, visible: bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KXmlGuiWindow_SizeHint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KXmlGuiWindow_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.KXmlGuiWindow_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KXmlGuiWindow_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KXmlGuiWindow_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.KXmlGuiWindow_OnMinimumSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KXmlGuiWindow_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KXmlGuiWindow_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.KXmlGuiWindow_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.KXmlGuiWindow_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.KXmlGuiWindow_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnPaintEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnTabletEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnActionEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KXmlGuiWindow_NativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KXmlGuiWindow_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, eventType: [*:0]u8, message: ?*anyopaque, result: *isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnNativeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXmlGuiWindow_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, param1: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnChangeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KXmlGuiWindow_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KXmlGuiWindow_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KXmlGuiWindow_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.KXmlGuiWindow_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.KXmlGuiWindow_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.KXmlGuiWindow_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.KXmlGuiWindow_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.KXmlGuiWindow_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QPainter) void {
        qtc.KXmlGuiWindow_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXmlGuiWindow_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, param1: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.KXmlGuiWindow_InputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.KXmlGuiWindow_QBaseInputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.KXmlGuiWindow_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.KXmlGuiWindow_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.KXmlGuiWindow_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KXmlGuiWindow_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KXmlGuiWindow_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#containerTags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn ContainerTags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_ContainerTags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kxmlguiwindow.ContainerTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguiwindow.ContainerTags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#containerTags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn QBaseContainerTags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_QBaseContainerTags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kxmlguiwindow.ContainerTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguiwindow.ContainerTags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#containerTags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnContainerTags(self: ?*anyopaque, slot: fn () callconv(.c) [*][*:0]const u8) void {
        qtc.KXmlGuiWindow_OnContainerTags(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, parent: QtC.QWidget, index: i32, element: QtC.QDomElement, containerAction: QtC.QAction ```
    pub fn CreateContainer(self: ?*anyopaque, parent: ?*anyopaque, index: i32, element: ?*anyopaque, containerAction: ?**anyopaque) QtC.QWidget {
        return qtc.KXmlGuiWindow_CreateContainer(@ptrCast(self), @ptrCast(parent), @intCast(index), @ptrCast(element), @ptrCast(containerAction));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, parent: QtC.QWidget, index: i32, element: QtC.QDomElement, containerAction: QtC.QAction ```
    pub fn QBaseCreateContainer(self: ?*anyopaque, parent: ?*anyopaque, index: i32, element: ?*anyopaque, containerAction: ?**anyopaque) QtC.QWidget {
        return qtc.KXmlGuiWindow_QBaseCreateContainer(@ptrCast(self), @ptrCast(parent), @intCast(index), @ptrCast(element), @ptrCast(containerAction));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, parent: QtC.QWidget, index: i32, element: QtC.QDomElement, containerAction: QtC.QAction) callconv(.c) QtC.QWidget ```
    pub fn OnCreateContainer(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, ?**anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.KXmlGuiWindow_OnCreateContainer(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, container: QtC.QWidget, parent: QtC.QWidget, element: QtC.QDomElement, containerAction: QtC.QAction ```
    pub fn RemoveContainer(self: ?*anyopaque, container: ?*anyopaque, parent: ?*anyopaque, element: ?*anyopaque, containerAction: ?*anyopaque) void {
        qtc.KXmlGuiWindow_RemoveContainer(@ptrCast(self), @ptrCast(container), @ptrCast(parent), @ptrCast(element), @ptrCast(containerAction));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, container: QtC.QWidget, parent: QtC.QWidget, element: QtC.QDomElement, containerAction: QtC.QAction ```
    pub fn QBaseRemoveContainer(self: ?*anyopaque, container: ?*anyopaque, parent: ?*anyopaque, element: ?*anyopaque, containerAction: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseRemoveContainer(@ptrCast(self), @ptrCast(container), @ptrCast(parent), @ptrCast(element), @ptrCast(containerAction));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, container: QtC.QWidget, parent: QtC.QWidget, element: QtC.QDomElement, containerAction: QtC.QAction) callconv(.c) void ```
    pub fn OnRemoveContainer(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnRemoveContainer(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#customTags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn CustomTags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_CustomTags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kxmlguiwindow.CustomTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguiwindow.CustomTags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#customTags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn QBaseCustomTags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_QBaseCustomTags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kxmlguiwindow.CustomTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kxmlguiwindow.CustomTags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#customTags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnCustomTags(self: ?*anyopaque, slot: fn () callconv(.c) [*][*:0]const u8) void {
        qtc.KXmlGuiWindow_OnCustomTags(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, parent: QtC.QWidget, index: i32, element: QtC.QDomElement ```
    pub fn CreateCustomElement(self: ?*anyopaque, parent: ?*anyopaque, index: i32, element: ?*anyopaque) QtC.QAction {
        return qtc.KXmlGuiWindow_CreateCustomElement(@ptrCast(self), @ptrCast(parent), @intCast(index), @ptrCast(element));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, parent: QtC.QWidget, index: i32, element: QtC.QDomElement ```
    pub fn QBaseCreateCustomElement(self: ?*anyopaque, parent: ?*anyopaque, index: i32, element: ?*anyopaque) QtC.QAction {
        return qtc.KXmlGuiWindow_QBaseCreateCustomElement(@ptrCast(self), @ptrCast(parent), @intCast(index), @ptrCast(element));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, parent: QtC.QWidget, index: i32, element: QtC.QDomElement) callconv(.c) QtC.QAction ```
    pub fn OnCreateCustomElement(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QAction) void {
        qtc.KXmlGuiWindow_OnCreateCustomElement(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, element: QtC.QDomElement ```
    pub fn Action2(self: ?*anyopaque, element: ?*anyopaque) QtC.QAction {
        return qtc.KXmlGuiWindow_Action2(@ptrCast(self), @ptrCast(element));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, element: QtC.QDomElement ```
    pub fn QBaseAction2(self: ?*anyopaque, element: ?*anyopaque) QtC.QAction {
        return qtc.KXmlGuiWindow_QBaseAction2(@ptrCast(self), @ptrCast(element));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, element: QtC.QDomElement) callconv(.c) QtC.QAction ```
    pub fn OnAction2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAction) void {
        qtc.KXmlGuiWindow_OnAction2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn ActionCollection(self: ?*anyopaque) QtC.KActionCollection {
        return qtc.KXmlGuiWindow_ActionCollection(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseActionCollection(self: ?*anyopaque) QtC.KActionCollection {
        return qtc.KXmlGuiWindow_QBaseActionCollection(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) QtC.KActionCollection ```
    pub fn OnActionCollection(self: ?*anyopaque, slot: fn () callconv(.c) QtC.KActionCollection) void {
        qtc.KXmlGuiWindow_OnActionCollection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn ComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KXmlGuiWindow_ComponentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn QBaseComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KXmlGuiWindow_QBaseComponentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnComponentName(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.KXmlGuiWindow_OnComponentName(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn DomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KXmlGuiWindow_DomDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseDomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KXmlGuiWindow_QBaseDomDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) QtC.QDomDocument ```
    pub fn OnDomDocument(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QDomDocument) void {
        qtc.KXmlGuiWindow_OnDomDocument(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn XmlFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KXmlGuiWindow_XmlFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn QBaseXmlFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KXmlGuiWindow_QBaseXmlFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnXmlFile(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.KXmlGuiWindow_OnXmlFile(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn LocalXMLFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KXmlGuiWindow_LocalXMLFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn QBaseLocalXMLFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KXmlGuiWindow_QBaseLocalXMLFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnLocalXMLFile(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.KXmlGuiWindow_OnLocalXMLFile(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, componentName: []const u8, componentDisplayName: []const u8 ```
    pub fn SetComponentName(self: ?*anyopaque, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KXmlGuiWindow_SetComponentName(@ptrCast(self), componentName_str, componentDisplayName_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, componentName: []const u8, componentDisplayName: []const u8 ```
    pub fn QBaseSetComponentName(self: ?*anyopaque, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KXmlGuiWindow_QBaseSetComponentName(@ptrCast(self), componentName_str, componentDisplayName_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, componentName: [*:0]const u8, componentDisplayName: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetComponentName(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetComponentName(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, file: []const u8, merge: bool, setXMLDoc: bool ```
    pub fn SetXMLFile(self: ?*anyopaque, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXmlGuiWindow_SetXMLFile(@ptrCast(self), file_str, merge, setXMLDoc);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, file: []const u8, merge: bool, setXMLDoc: bool ```
    pub fn QBaseSetXMLFile(self: ?*anyopaque, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXmlGuiWindow_QBaseSetXMLFile(@ptrCast(self), file_str, merge, setXMLDoc);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, file: [*:0]const u8, merge: bool, setXMLDoc: bool) callconv(.c) void ```
    pub fn OnSetXMLFile(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetXMLFile(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, file: []const u8 ```
    pub fn SetLocalXMLFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXmlGuiWindow_SetLocalXMLFile(@ptrCast(self), file_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, file: []const u8 ```
    pub fn QBaseSetLocalXMLFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KXmlGuiWindow_QBaseSetLocalXMLFile(@ptrCast(self), file_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, file: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetLocalXMLFile(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetLocalXMLFile(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, document: []const u8, merge: bool ```
    pub fn SetXML(self: ?*anyopaque, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KXmlGuiWindow_SetXML(@ptrCast(self), document_str, merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, document: []const u8, merge: bool ```
    pub fn QBaseSetXML(self: ?*anyopaque, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KXmlGuiWindow_QBaseSetXML(@ptrCast(self), document_str, merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, document: [*:0]const u8, merge: bool) callconv(.c) void ```
    pub fn OnSetXML(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetXML(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, document: QtC.QDomDocument, merge: bool ```
    pub fn SetDOMDocument(self: ?*anyopaque, document: ?*anyopaque, merge: bool) void {
        qtc.KXmlGuiWindow_SetDOMDocument(@ptrCast(self), @ptrCast(document), merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, document: QtC.QDomDocument, merge: bool ```
    pub fn QBaseSetDOMDocument(self: ?*anyopaque, document: ?*anyopaque, merge: bool) void {
        qtc.KXmlGuiWindow_QBaseSetDOMDocument(@ptrCast(self), @ptrCast(document), merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, document: QtC.QDomDocument, merge: bool) callconv(.c) void ```
    pub fn OnSetDOMDocument(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSetDOMDocument(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, newstate: []const u8, reverse: kxmlguiclient_enums.ReverseStateChange ```
    pub fn StateChanged(self: ?*anyopaque, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_StateChanged(@ptrCast(self), newstate_str, @intCast(reverse));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, newstate: []const u8, reverse: kxmlguiclient_enums.ReverseStateChange ```
    pub fn QBaseStateChanged(self: ?*anyopaque, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_QBaseStateChanged(@ptrCast(self), newstate_str, @intCast(reverse));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, newstate: [*:0]const u8, reverse: kxmlguiclient_enums.ReverseStateChange) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnStateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.KConfig, param2: i32 ```
    pub fn SavePropertiesInternal(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.KXmlGuiWindow_SavePropertiesInternal(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.KConfig, param2: i32 ```
    pub fn QBaseSavePropertiesInternal(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.KXmlGuiWindow_QBaseSavePropertiesInternal(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, param1: QtC.KConfig, param2: i32) callconv(.c) void ```
    pub fn OnSavePropertiesInternal(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSavePropertiesInternal(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.KConfig, param2: i32 ```
    pub fn ReadPropertiesInternal(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) bool {
        return qtc.KXmlGuiWindow_ReadPropertiesInternal(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, param1: QtC.KConfig, param2: i32 ```
    pub fn QBaseReadPropertiesInternal(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) bool {
        return qtc.KXmlGuiWindow_QBaseReadPropertiesInternal(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, param1: QtC.KConfig, param2: i32) callconv(.c) bool ```
    pub fn OnReadPropertiesInternal(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnReadPropertiesInternal(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#settingsDirty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SettingsDirty(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_SettingsDirty(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#settingsDirty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseSettingsDirty(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_QBaseSettingsDirty(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#settingsDirty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) bool ```
    pub fn OnSettingsDirty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnSettingsDirty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SaveAutoSaveSettings(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_SaveAutoSaveSettings(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseSaveAutoSaveSettings(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseSaveAutoSaveSettings(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) void ```
    pub fn OnSaveAutoSaveSettings(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnSaveAutoSaveSettings(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnUpdateMicroFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnCreate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnDestroy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnFocusNextChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnFocusPreviousChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KXmlGuiWindow_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KXmlGuiWindow_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KXmlGuiWindow_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KXmlGuiWindow_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KXmlGuiWindow_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KXmlGuiWindow_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KXmlGuiWindow_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KXmlGuiWindow_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KXmlGuiWindow_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.KXmlGuiWindow_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.KXmlGuiWindow_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.KXmlGuiWindow_OnGetDecodedMetricF(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn StandardsXmlFileLocation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KXmlGuiWindow_StandardsXmlFileLocation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, allocator: std.mem.Allocator ```
    pub fn QBaseStandardsXmlFileLocation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KXmlGuiWindow_QBaseStandardsXmlFileLocation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kxmlguiwindow.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnStandardsXmlFileLocation(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.KXmlGuiWindow_OnStandardsXmlFileLocation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn LoadStandardsXmlFile(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_LoadStandardsXmlFile(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QBaseLoadStandardsXmlFile(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_QBaseLoadStandardsXmlFile(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn () callconv(.c) void ```
    pub fn OnLoadStandardsXmlFile(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KXmlGuiWindow_OnLoadStandardsXmlFile(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KXmlGuiWindow, slot: fn (self: QtC.KXmlGuiWindow, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#dtor.KXmlGuiWindow)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KXmlGuiWindow ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kxmlguiwindow.html#types
pub const enums = struct {
    pub const StandardWindowOption = enum {
        pub const ToolBar: i32 = 1;
        pub const Keys: i32 = 2;
        pub const StatusBar: i32 = 4;
        pub const Save: i32 = 8;
        pub const Create: i32 = 16;
        pub const Default: i32 = 31;
    };
};
