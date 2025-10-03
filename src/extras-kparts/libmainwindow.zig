const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kxmlguiclient_enums = @import("../extras-kxmlgui/libkxmlguiclient.zig").enums;
const kxmlguiwindow_enums = @import("../extras-kxmlgui/libkxmlguiwindow.zig").enums;
const qmainwindow_enums = @import("../libqmainwindow.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qtabwidget_enums = @import("../libqtabwidget.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// https://api.kde.org/kparts-mainwindow.html
pub const kparts__mainwindow = struct {
    /// New constructs a new KParts::MainWindow object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.KParts__MainWindow {
        return qtc.KParts__MainWindow_new(@ptrCast(parent));
    }

    /// New2 constructs a new KParts::MainWindow object.
    ///
    ///
    pub fn New2() QtC.KParts__MainWindow {
        return qtc.KParts__MainWindow_new2();
    }

    /// New3 constructs a new KParts::MainWindow object.
    ///
    /// ``` parent: QtC.QWidget, f: flag of qnamespace_enums.WindowType ```
    pub fn New3(parent: ?*anyopaque, f: i64) QtC.KParts__MainWindow {
        return qtc.KParts__MainWindow_new3(@ptrCast(parent), @intCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KParts__MainWindow_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KParts__MainWindow, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KParts__MainWindow_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KParts__MainWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KParts__MainWindow_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KParts__MainWindow_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KParts__MainWindow_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KParts__MainWindow_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#configureToolbars)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ConfigureToolbars(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_ConfigureToolbars(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#configureToolbars)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) void ```
    pub fn OnConfigureToolbars(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__MainWindow_OnConfigureToolbars(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#configureToolbars)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseConfigureToolbars(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseConfigureToolbars(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#createGUI)
    ///
    /// ``` self: QtC.KParts__MainWindow, part: QtC.KParts__Part ```
    pub fn CreateGUI(self: ?*anyopaque, part: ?*anyopaque) void {
        qtc.KParts__MainWindow_CreateGUI(@ptrCast(self), @ptrCast(part));
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#createGUI)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, part: QtC.KParts__Part) callconv(.c) void ```
    pub fn OnCreateGUI(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnCreateGUI(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#createGUI)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__MainWindow, part: QtC.KParts__Part ```
    pub fn QBaseCreateGUI(self: ?*anyopaque, part: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseCreateGUI(@ptrCast(self), @ptrCast(part));
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#setWindowTitleHandling)
    ///
    /// ``` self: QtC.KParts__MainWindow, enabled: bool ```
    pub fn SetWindowTitleHandling(self: ?*anyopaque, enabled: bool) void {
        qtc.KParts__MainWindow_SetWindowTitleHandling(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#setWindowTitleHandling)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, enabled: bool) callconv(.c) void ```
    pub fn OnSetWindowTitleHandling(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSetWindowTitleHandling(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#setWindowTitleHandling)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__MainWindow, enabled: bool ```
    pub fn QBaseSetWindowTitleHandling(self: ?*anyopaque, enabled: bool) void {
        qtc.KParts__MainWindow_QBaseSetWindowTitleHandling(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#slotSetStatusBarText)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: []const u8 ```
    pub fn SlotSetStatusBarText(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KParts__MainWindow_SlotSetStatusBarText(@ptrCast(self), param1_str);
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#slotSetStatusBarText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, param1: [*:0]const u8) callconv(.c) void ```
    pub fn OnSlotSetStatusBarText(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSlotSetStatusBarText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#slotSetStatusBarText)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: []const u8 ```
    pub fn QBaseSlotSetStatusBarText(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KParts__MainWindow_QBaseSlotSetStatusBarText(@ptrCast(self), param1_str);
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#saveNewToolbarConfig)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SaveNewToolbarConfig(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_SaveNewToolbarConfig(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#saveNewToolbarConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) void ```
    pub fn OnSaveNewToolbarConfig(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSaveNewToolbarConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#saveNewToolbarConfig)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseSaveNewToolbarConfig(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseSaveNewToolbarConfig(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#createShellGUI)
    ///
    /// ``` self: QtC.KParts__MainWindow, create: bool ```
    pub fn CreateShellGUI(self: ?*anyopaque, create: bool) void {
        qtc.KParts__MainWindow_CreateShellGUI(@ptrCast(self), create);
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#createShellGUI)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, create: bool) callconv(.c) void ```
    pub fn OnCreateShellGUI(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnCreateShellGUI(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kparts-mainwindow.html#createShellGUI)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__MainWindow, create: bool ```
    pub fn QBaseCreateShellGUI(self: ?*anyopaque, create: bool) void {
        qtc.KParts__MainWindow_QBaseCreateShellGUI(@ptrCast(self), create);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KParts__MainWindow_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KParts__MainWindow_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setHelpMenuEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SetHelpMenuEnabled(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_SetHelpMenuEnabled(@ptrCast(self));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#isHelpMenuEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsHelpMenuEnabled(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_IsHelpMenuEnabled(@ptrCast(self));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setStandardToolBarMenuEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow, showToolBarMenu: bool ```
    pub fn SetStandardToolBarMenuEnabled(self: ?*anyopaque, showToolBarMenu: bool) void {
        qtc.KXmlGuiWindow_SetStandardToolBarMenuEnabled(@ptrCast(self), showToolBarMenu);
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#isStandardToolBarMenuEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsStandardToolBarMenuEnabled(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_IsStandardToolBarMenuEnabled(@ptrCast(self));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#createStandardStatusBarAction)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn CreateStandardStatusBarAction(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_CreateStandardStatusBarAction(@ptrCast(self));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SetupGUI(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_SetupGUI(@ptrCast(self));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ``` self: QtC.KParts__MainWindow, defaultSize: QtC.QSize ```
    pub fn SetupGUI2(self: ?*anyopaque, defaultSize: ?*anyopaque) void {
        qtc.KXmlGuiWindow_SetupGUI2(@ptrCast(self), @ptrCast(defaultSize));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#toolBarMenuAction)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ToolBarMenuAction(self: ?*anyopaque) QtC.QAction {
        return qtc.KXmlGuiWindow_ToolBarMenuAction(@ptrCast(self));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupToolbarMenuActions)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SetupToolbarMenuActions(self: ?*anyopaque) void {
        qtc.KXmlGuiWindow_SetupToolbarMenuActions(@ptrCast(self));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#toolBarNames)
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn ToolBarNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KXmlGuiWindow_ToolBarNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kparts::mainwindow.ToolBarNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kparts::mainwindow.ToolBarNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setCommandBarEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow, showCommandBar: bool ```
    pub fn SetCommandBarEnabled(self: ?*anyopaque, showCommandBar: bool) void {
        qtc.KXmlGuiWindow_SetCommandBarEnabled(@ptrCast(self), showCommandBar);
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#isCommandBarEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsCommandBarEnabled(self: ?*anyopaque) bool {
        return qtc.KXmlGuiWindow_IsCommandBarEnabled(@ptrCast(self));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
    ///
    /// ``` self: QtC.KParts__MainWindow, newstate: []const u8, reverse: bool ```
    pub fn SlotStateChanged2(self: ?*anyopaque, newstate: []const u8, reverse: bool) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KXmlGuiWindow_SlotStateChanged2(@ptrCast(self), newstate_str, reverse);
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#isToolBarVisible)
    ///
    /// ``` self: QtC.KParts__MainWindow, name: []const u8 ```
    pub fn IsToolBarVisible(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KXmlGuiWindow_IsToolBarVisible(@ptrCast(self), name_str);
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setToolBarVisible)
    ///
    /// ``` self: QtC.KParts__MainWindow, name: []const u8, visible: bool ```
    pub fn SetToolBarVisible(self: ?*anyopaque, name: []const u8, visible: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KXmlGuiWindow_SetToolBarVisible(@ptrCast(self), name_str, visible);
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setHelpMenuEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow, showHelpMenu: bool ```
    pub fn SetHelpMenuEnabled1(self: ?*anyopaque, showHelpMenu: bool) void {
        qtc.KXmlGuiWindow_SetHelpMenuEnabled1(@ptrCast(self), showHelpMenu);
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#createGUI)
    ///
    /// ``` self: QtC.KParts__MainWindow, xmlfile: []const u8 ```
    pub fn CreateGUI1(self: ?*anyopaque, xmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        qtc.KXmlGuiWindow_CreateGUI1(@ptrCast(self), xmlfile_str);
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ``` self: QtC.KParts__MainWindow, options: flag of kxmlguiwindow_enums.StandardWindowOption ```
    pub fn SetupGUI1(self: ?*anyopaque, options: i32) void {
        qtc.KXmlGuiWindow_SetupGUI1(@ptrCast(self), @intCast(options));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ``` self: QtC.KParts__MainWindow, options: flag of kxmlguiwindow_enums.StandardWindowOption, xmlfile: []const u8 ```
    pub fn SetupGUI22(self: ?*anyopaque, options: i32, xmlfile: []const u8) void {
        const xmlfile_str = qtc.libqt_string{
            .len = xmlfile.len,
            .data = xmlfile.ptr,
        };
        qtc.KXmlGuiWindow_SetupGUI22(@ptrCast(self), @intCast(options), xmlfile_str);
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ``` self: QtC.KParts__MainWindow, defaultSize: QtC.QSize, options: flag of kxmlguiwindow_enums.StandardWindowOption ```
    pub fn SetupGUI23(self: ?*anyopaque, defaultSize: ?*anyopaque, options: i32) void {
        qtc.KXmlGuiWindow_SetupGUI23(@ptrCast(self), @ptrCast(defaultSize), @intCast(options));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#setupGUI)
    ///
    /// ``` self: QtC.KParts__MainWindow, defaultSize: QtC.QSize, options: flag of kxmlguiwindow_enums.StandardWindowOption, xmlfile: []const u8 ```
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.ClassNameOfToplevel: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#restore)
    ///
    /// ``` self: QtC.KParts__MainWindow, numberOfInstances: i32 ```
    pub fn Restore(self: ?*anyopaque, numberOfInstances: i32) bool {
        return qtc.KMainWindow_Restore(@ptrCast(self), @intCast(numberOfInstances));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#hasMenuBar)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
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
        const _ret = allocator.alloc(QtC.KMainWindow, _arr.len) catch @panic("kparts::mainwindow.MemberList: Memory allocation failed");
        const _data: [*]QtC.KMainWindow = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#toolBar)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ToolBar(self: ?*anyopaque) QtC.KToolBar {
        return qtc.KMainWindow_ToolBar(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#toolBars)
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn ToolBars(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KToolBar {
        const _arr: qtc.libqt_list = qtc.KMainWindow_ToolBars(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KToolBar, _arr.len) catch @panic("kparts::mainwindow.ToolBars: Memory allocation failed");
        const _data: [*]QtC.KToolBar = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SetAutoSaveSettings(self: ?*anyopaque) void {
        qtc.KMainWindow_SetAutoSaveSettings(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setAutoSaveSettings)
    ///
    /// ``` self: QtC.KParts__MainWindow, group: QtC.KConfigGroup ```
    pub fn SetAutoSaveSettings2(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.KMainWindow_SetAutoSaveSettings2(@ptrCast(self), @ptrCast(group));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#resetAutoSaveSettings)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ResetAutoSaveSettings(self: ?*anyopaque) void {
        qtc.KMainWindow_ResetAutoSaveSettings(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#autoSaveSettings)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn AutoSaveSettings(self: ?*anyopaque) bool {
        return qtc.KMainWindow_AutoSaveSettings(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#autoSaveGroup)
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn AutoSaveGroup(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KMainWindow_AutoSaveGroup(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.AutoSaveGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#autoSaveConfigGroup)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn AutoSaveConfigGroup(self: ?*anyopaque) QtC.KConfigGroup {
        return qtc.KMainWindow_AutoSaveConfigGroup(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setStateConfigGroup)
    ///
    /// ``` self: QtC.KParts__MainWindow, configGroup: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn StateConfigGroup(self: ?*anyopaque) QtC.KConfigGroup {
        return qtc.KMainWindow_StateConfigGroup(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveMainWindowSettings)
    ///
    /// ``` self: QtC.KParts__MainWindow, config: QtC.KConfigGroup ```
    pub fn SaveMainWindowSettings(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KMainWindow_SaveMainWindowSettings(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#dbusName)
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn DbusName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KMainWindow_DbusName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.DbusName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// ``` self: QtC.KParts__MainWindow, caption: []const u8, modified: bool ```
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
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, caption: [*:0]const u8, modified: bool) callconv(.c) void ```
    pub fn OnSetCaption2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KMainWindow_OnSetCaption2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KParts__MainWindow, caption: []const u8, modified: bool ```
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
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn AppHelpActivated(self: ?*anyopaque) void {
        qtc.KMainWindow_AppHelpActivated(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setSettingsDirty)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SetSettingsDirty(self: ?*anyopaque) void {
        qtc.KMainWindow_SetSettingsDirty(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#restore)
    ///
    /// ``` self: QtC.KParts__MainWindow, numberOfInstances: i32, show: bool ```
    pub fn Restore2(self: ?*anyopaque, numberOfInstances: i32, show: bool) bool {
        return qtc.KMainWindow_Restore2(@ptrCast(self), @intCast(numberOfInstances), show);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#toolBar)
    ///
    /// ``` self: QtC.KParts__MainWindow, name: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, groupName: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, groupName: []const u8, saveWindowSize: bool ```
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
    /// ``` self: QtC.KParts__MainWindow, group: QtC.KConfigGroup, saveWindowSize: bool ```
    pub fn SetAutoSaveSettings23(self: ?*anyopaque, group: ?*anyopaque, saveWindowSize: bool) void {
        qtc.KMainWindow_SetAutoSaveSettings23(@ptrCast(self), @ptrCast(group), saveWindowSize);
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#iconSize)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IconSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QMainWindow_IconSize(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setIconSize)
    ///
    /// ``` self: QtC.KParts__MainWindow, iconSize: QtC.QSize ```
    pub fn SetIconSize(self: ?*anyopaque, iconSize: ?*anyopaque) void {
        qtc.QMainWindow_SetIconSize(@ptrCast(self), @ptrCast(iconSize));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyle)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    ///
    /// Returns: ``` qnamespace_enums.ToolButtonStyle ```
    pub fn ToolButtonStyle(self: ?*anyopaque) i32 {
        return qtc.QMainWindow_ToolButtonStyle(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setToolButtonStyle)
    ///
    /// ``` self: QtC.KParts__MainWindow, toolButtonStyle: qnamespace_enums.ToolButtonStyle ```
    pub fn SetToolButtonStyle(self: ?*anyopaque, toolButtonStyle: i32) void {
        qtc.QMainWindow_SetToolButtonStyle(@ptrCast(self), @intCast(toolButtonStyle));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isAnimated)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsAnimated(self: ?*anyopaque) bool {
        return qtc.QMainWindow_IsAnimated(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isDockNestingEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsDockNestingEnabled(self: ?*anyopaque) bool {
        return qtc.QMainWindow_IsDockNestingEnabled(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#documentMode)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn DocumentMode(self: ?*anyopaque) bool {
        return qtc.QMainWindow_DocumentMode(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDocumentMode)
    ///
    /// ``` self: QtC.KParts__MainWindow, enabled: bool ```
    pub fn SetDocumentMode(self: ?*anyopaque, enabled: bool) void {
        qtc.QMainWindow_SetDocumentMode(@ptrCast(self), enabled);
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabShape)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    ///
    /// Returns: ``` qtabwidget_enums.TabShape ```
    pub fn TabShape(self: ?*anyopaque) i32 {
        return qtc.QMainWindow_TabShape(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setTabShape)
    ///
    /// ``` self: QtC.KParts__MainWindow, tabShape: qtabwidget_enums.TabShape ```
    pub fn SetTabShape(self: ?*anyopaque, tabShape: i32) void {
        qtc.QMainWindow_SetTabShape(@ptrCast(self), @intCast(tabShape));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabPosition)
    ///
    /// ``` self: QtC.KParts__MainWindow, area: qnamespace_enums.DockWidgetArea ```
    ///
    /// Returns: ``` qtabwidget_enums.TabPosition ```
    pub fn TabPosition(self: ?*anyopaque, area: i32) i32 {
        return qtc.QMainWindow_TabPosition(@ptrCast(self), @intCast(area));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setTabPosition)
    ///
    /// ``` self: QtC.KParts__MainWindow, areas: flag of qnamespace_enums.DockWidgetArea, tabPosition: qtabwidget_enums.TabPosition ```
    pub fn SetTabPosition(self: ?*anyopaque, areas: i32, tabPosition: i32) void {
        qtc.QMainWindow_SetTabPosition(@ptrCast(self), @intCast(areas), @intCast(tabPosition));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDockOptions)
    ///
    /// ``` self: QtC.KParts__MainWindow, options: flag of qmainwindow_enums.DockOption ```
    pub fn SetDockOptions(self: ?*anyopaque, options: i32) void {
        qtc.QMainWindow_SetDockOptions(@ptrCast(self), @intCast(options));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#dockOptions)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    ///
    /// Returns: ``` flag of qmainwindow_enums.DockOption ```
    pub fn DockOptions(self: ?*anyopaque) i32 {
        return qtc.QMainWindow_DockOptions(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#isSeparator)
    ///
    /// ``` self: QtC.KParts__MainWindow, pos: QtC.QPoint ```
    pub fn IsSeparator(self: ?*anyopaque, pos: ?*anyopaque) bool {
        return qtc.QMainWindow_IsSeparator(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#menuBar)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn MenuBar(self: ?*anyopaque) QtC.QMenuBar {
        return qtc.QMainWindow_MenuBar(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setMenuBar)
    ///
    /// ``` self: QtC.KParts__MainWindow, menubar: QtC.QMenuBar ```
    pub fn SetMenuBar(self: ?*anyopaque, menubar: ?*anyopaque) void {
        qtc.QMainWindow_SetMenuBar(@ptrCast(self), @ptrCast(menubar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#menuWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn MenuWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QMainWindow_MenuWidget(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setMenuWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow, menubar: QtC.QWidget ```
    pub fn SetMenuWidget(self: ?*anyopaque, menubar: ?*anyopaque) void {
        qtc.QMainWindow_SetMenuWidget(@ptrCast(self), @ptrCast(menubar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#statusBar)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn StatusBar(self: ?*anyopaque) QtC.QStatusBar {
        return qtc.QMainWindow_StatusBar(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setStatusBar)
    ///
    /// ``` self: QtC.KParts__MainWindow, statusbar: QtC.QStatusBar ```
    pub fn SetStatusBar(self: ?*anyopaque, statusbar: ?*anyopaque) void {
        qtc.QMainWindow_SetStatusBar(@ptrCast(self), @ptrCast(statusbar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#centralWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn CentralWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QMainWindow_CentralWidget(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setCentralWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow, widget: QtC.QWidget ```
    pub fn SetCentralWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QMainWindow_SetCentralWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#takeCentralWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn TakeCentralWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QMainWindow_TakeCentralWidget(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setCorner)
    ///
    /// ``` self: QtC.KParts__MainWindow, corner: qnamespace_enums.Corner, area: qnamespace_enums.DockWidgetArea ```
    pub fn SetCorner(self: ?*anyopaque, corner: i32, area: i32) void {
        qtc.QMainWindow_SetCorner(@ptrCast(self), @intCast(corner), @intCast(area));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#corner)
    ///
    /// ``` self: QtC.KParts__MainWindow, corner: qnamespace_enums.Corner ```
    ///
    /// Returns: ``` qnamespace_enums.DockWidgetArea ```
    pub fn Corner(self: ?*anyopaque, corner: i32) i32 {
        return qtc.QMainWindow_Corner(@ptrCast(self), @intCast(corner));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn AddToolBarBreak(self: ?*anyopaque) void {
        qtc.QMainWindow_AddToolBarBreak(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#insertToolBarBreak)
    ///
    /// ``` self: QtC.KParts__MainWindow, before: QtC.QToolBar ```
    pub fn InsertToolBarBreak(self: ?*anyopaque, before: ?*anyopaque) void {
        qtc.QMainWindow_InsertToolBarBreak(@ptrCast(self), @ptrCast(before));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
    ///
    /// ``` self: QtC.KParts__MainWindow, area: qnamespace_enums.ToolBarArea, toolbar: QtC.QToolBar ```
    pub fn AddToolBar(self: ?*anyopaque, area: i32, toolbar: ?*anyopaque) void {
        qtc.QMainWindow_AddToolBar(@ptrCast(self), @intCast(area), @ptrCast(toolbar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
    ///
    /// ``` self: QtC.KParts__MainWindow, toolbar: QtC.QToolBar ```
    pub fn AddToolBar2(self: ?*anyopaque, toolbar: ?*anyopaque) void {
        qtc.QMainWindow_AddToolBar2(@ptrCast(self), @ptrCast(toolbar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBar)
    ///
    /// ``` self: QtC.KParts__MainWindow, title: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, before: QtC.QToolBar, toolbar: QtC.QToolBar ```
    pub fn InsertToolBar(self: ?*anyopaque, before: ?*anyopaque, toolbar: ?*anyopaque) void {
        qtc.QMainWindow_InsertToolBar(@ptrCast(self), @ptrCast(before), @ptrCast(toolbar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBar)
    ///
    /// ``` self: QtC.KParts__MainWindow, toolbar: QtC.QToolBar ```
    pub fn RemoveToolBar(self: ?*anyopaque, toolbar: ?*anyopaque) void {
        qtc.QMainWindow_RemoveToolBar(@ptrCast(self), @ptrCast(toolbar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeToolBarBreak)
    ///
    /// ``` self: QtC.KParts__MainWindow, before: QtC.QToolBar ```
    pub fn RemoveToolBarBreak(self: ?*anyopaque, before: ?*anyopaque) void {
        qtc.QMainWindow_RemoveToolBarBreak(@ptrCast(self), @ptrCast(before));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#unifiedTitleAndToolBarOnMac)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn UnifiedTitleAndToolBarOnMac(self: ?*anyopaque) bool {
        return qtc.QMainWindow_UnifiedTitleAndToolBarOnMac(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolBarArea)
    ///
    /// ``` self: QtC.KParts__MainWindow, toolbar: QtC.QToolBar ```
    ///
    /// Returns: ``` qnamespace_enums.ToolBarArea ```
    pub fn ToolBarArea(self: ?*anyopaque, toolbar: ?*anyopaque) i32 {
        return qtc.QMainWindow_ToolBarArea(@ptrCast(self), @ptrCast(toolbar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolBarBreak)
    ///
    /// ``` self: QtC.KParts__MainWindow, toolbar: QtC.QToolBar ```
    pub fn ToolBarBreak(self: ?*anyopaque, toolbar: ?*anyopaque) bool {
        return qtc.QMainWindow_ToolBarBreak(@ptrCast(self), @ptrCast(toolbar));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow, area: qnamespace_enums.DockWidgetArea, dockwidget: QtC.QDockWidget ```
    pub fn AddDockWidget(self: ?*anyopaque, area: i32, dockwidget: ?*anyopaque) void {
        qtc.QMainWindow_AddDockWidget(@ptrCast(self), @intCast(area), @ptrCast(dockwidget));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addDockWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow, area: qnamespace_enums.DockWidgetArea, dockwidget: QtC.QDockWidget, orientation: qnamespace_enums.Orientation ```
    pub fn AddDockWidget2(self: ?*anyopaque, area: i32, dockwidget: ?*anyopaque, orientation: i32) void {
        qtc.QMainWindow_AddDockWidget2(@ptrCast(self), @intCast(area), @ptrCast(dockwidget), @intCast(orientation));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#splitDockWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow, after: QtC.QDockWidget, dockwidget: QtC.QDockWidget, orientation: qnamespace_enums.Orientation ```
    pub fn SplitDockWidget(self: ?*anyopaque, after: ?*anyopaque, dockwidget: ?*anyopaque, orientation: i32) void {
        qtc.QMainWindow_SplitDockWidget(@ptrCast(self), @ptrCast(after), @ptrCast(dockwidget), @intCast(orientation));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifyDockWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow, first: QtC.QDockWidget, second: QtC.QDockWidget ```
    pub fn TabifyDockWidget(self: ?*anyopaque, first: ?*anyopaque, second: ?*anyopaque) void {
        qtc.QMainWindow_TabifyDockWidget(@ptrCast(self), @ptrCast(first), @ptrCast(second));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgets)
    ///
    /// ``` self: QtC.KParts__MainWindow, dockwidget: QtC.QDockWidget, allocator: std.mem.Allocator ```
    pub fn TabifiedDockWidgets(self: ?*anyopaque, dockwidget: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QDockWidget {
        const _arr: qtc.libqt_list = qtc.QMainWindow_TabifiedDockWidgets(@ptrCast(self), @ptrCast(dockwidget));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QDockWidget, _arr.len) catch @panic("kparts::mainwindow.TabifiedDockWidgets: Memory allocation failed");
        const _data: [*]QtC.QDockWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#removeDockWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow, dockwidget: QtC.QDockWidget ```
    pub fn RemoveDockWidget(self: ?*anyopaque, dockwidget: ?*anyopaque) void {
        qtc.QMainWindow_RemoveDockWidget(@ptrCast(self), @ptrCast(dockwidget));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreDockWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow, dockwidget: QtC.QDockWidget ```
    pub fn RestoreDockWidget(self: ?*anyopaque, dockwidget: ?*anyopaque) bool {
        return qtc.QMainWindow_RestoreDockWidget(@ptrCast(self), @ptrCast(dockwidget));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#dockWidgetArea)
    ///
    /// ``` self: QtC.KParts__MainWindow, dockwidget: QtC.QDockWidget ```
    ///
    /// Returns: ``` qnamespace_enums.DockWidgetArea ```
    pub fn DockWidgetArea(self: ?*anyopaque, dockwidget: ?*anyopaque) i32 {
        return qtc.QMainWindow_DockWidgetArea(@ptrCast(self), @ptrCast(dockwidget));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#resizeDocks)
    ///
    /// ``` self: QtC.KParts__MainWindow, docks: []QtC.QDockWidget, sizes: []i32, orientation: qnamespace_enums.Orientation ```
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
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn SaveState(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMainWindow_SaveState(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kparts::mainwindow.SaveState: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
    ///
    /// ``` self: QtC.KParts__MainWindow, state: []u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, enabled: bool ```
    pub fn SetAnimated(self: ?*anyopaque, enabled: bool) void {
        qtc.QMainWindow_SetAnimated(@ptrCast(self), enabled);
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setDockNestingEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow, enabled: bool ```
    pub fn SetDockNestingEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QMainWindow_SetDockNestingEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#setUnifiedTitleAndToolBarOnMac)
    ///
    /// ``` self: QtC.KParts__MainWindow, set: bool ```
    pub fn SetUnifiedTitleAndToolBarOnMac(self: ?*anyopaque, set: bool) void {
        qtc.QMainWindow_SetUnifiedTitleAndToolBarOnMac(@ptrCast(self), set);
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
    ///
    /// ``` self: QtC.KParts__MainWindow, iconSize: QtC.QSize ```
    pub fn IconSizeChanged(self: ?*anyopaque, iconSize: ?*anyopaque) void {
        qtc.QMainWindow_IconSizeChanged(@ptrCast(self), @ptrCast(iconSize));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#iconSizeChanged)
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, iconSize: QtC.QSize) callconv(.c) void ```
    pub fn OnIconSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMainWindow_Connect_IconSizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
    ///
    /// ``` self: QtC.KParts__MainWindow, toolButtonStyle: qnamespace_enums.ToolButtonStyle ```
    pub fn ToolButtonStyleChanged(self: ?*anyopaque, toolButtonStyle: i32) void {
        qtc.QMainWindow_ToolButtonStyleChanged(@ptrCast(self), @intCast(toolButtonStyle));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#toolButtonStyleChanged)
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, toolButtonStyle: qnamespace_enums.ToolButtonStyle) callconv(.c) void ```
    pub fn OnToolButtonStyleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QMainWindow_Connect_ToolButtonStyleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
    ///
    /// ``` self: QtC.KParts__MainWindow, dockWidget: QtC.QDockWidget ```
    pub fn TabifiedDockWidgetActivated(self: ?*anyopaque, dockWidget: ?*anyopaque) void {
        qtc.QMainWindow_TabifiedDockWidgetActivated(@ptrCast(self), @ptrCast(dockWidget));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#tabifiedDockWidgetActivated)
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, dockWidget: QtC.QDockWidget) callconv(.c) void ```
    pub fn OnTabifiedDockWidgetActivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMainWindow_Connect_TabifiedDockWidgetActivated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#addToolBarBreak)
    ///
    /// ``` self: QtC.KParts__MainWindow, area: qnamespace_enums.ToolBarArea ```
    pub fn AddToolBarBreak1(self: ?*anyopaque, area: i32) void {
        qtc.QMainWindow_AddToolBarBreak1(@ptrCast(self), @intCast(area));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#saveState)
    ///
    /// ``` self: QtC.KParts__MainWindow, version: i32, allocator: std.mem.Allocator ```
    pub fn SaveState1(self: ?*anyopaque, version: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QMainWindow_SaveState1(@ptrCast(self), @intCast(version));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kparts::mainwindow.SaveState1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#restoreState)
    ///
    /// ``` self: QtC.KParts__MainWindow, state: []u8, version: i32 ```
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
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: QtC.KParts__MainWindow, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    ///
    /// Returns: ``` qnamespace_enums.WindowModality ```
    pub fn WindowModality(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: QtC.KParts__MainWindow, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: QtC.KParts__MainWindow, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: QtC.KParts__MainWindow, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.KParts__MainWindow, minimumSize: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.KParts__MainWindow, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.KParts__MainWindow, maximumSize: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.KParts__MainWindow, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: QtC.KParts__MainWindow, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: QtC.KParts__MainWindow, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: QtC.KParts__MainWindow, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: QtC.KParts__MainWindow, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.KParts__MainWindow, sizeIncrement: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.KParts__MainWindow, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.KParts__MainWindow, baseSize: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.KParts__MainWindow, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.KParts__MainWindow, fixedSize: QtC.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.KParts__MainWindow, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: QtC.KParts__MainWindow, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: QtC.KParts__MainWindow, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QPoint ```
    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QPoint ```
    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QPoint ```
    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QPoint ```
    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: QtC.KParts__MainWindow, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: QtC.KParts__MainWindow, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn BackgroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: QtC.KParts__MainWindow, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn ForegroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ``` self: QtC.KParts__MainWindow, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: QtC.KParts__MainWindow, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: QtC.KParts__MainWindow, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: QtC.KParts__MainWindow, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.KParts__MainWindow, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.KParts__MainWindow, mask: QtC.QRegion ```
    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KParts__MainWindow, target: QtC.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KParts__MainWindow, painter: QtC.QPainter ```
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.KParts__MainWindow, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.KParts__MainWindow, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: QtC.KParts__MainWindow, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.KParts__MainWindow, windowTitle: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, styleSheet: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: QtC.KParts__MainWindow, icon: QtC.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: QtC.KParts__MainWindow, windowIconText: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: QtC.KParts__MainWindow, windowRole: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: QtC.KParts__MainWindow, filePath: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: QtC.KParts__MainWindow, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: QtC.KParts__MainWindow, toolTip: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: QtC.KParts__MainWindow, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: QtC.KParts__MainWindow, statusTip: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: QtC.KParts__MainWindow, whatsThis: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: QtC.KParts__MainWindow, name: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: QtC.KParts__MainWindow, description: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: QtC.KParts__MainWindow, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.KParts__MainWindow, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocus2(self: ?*anyopaque, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    ///
    /// Returns: ``` qnamespace_enums.FocusPolicy ```
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.KParts__MainWindow, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
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
    /// ``` self: QtC.KParts__MainWindow, focusProxy: QtC.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    ///
    /// Returns: ``` qnamespace_enums.ContextMenuPolicy ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: QtC.KParts__MainWindow, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QCursor ```
    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.KParts__MainWindow, key: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.KParts__MainWindow, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.KParts__MainWindow, id: i32 ```
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
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QWidget_Update(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KParts__MainWindow, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QRect ```
    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QRegion ```
    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KParts__MainWindow, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QRect ```
    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QRegion ```
    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: QtC.KParts__MainWindow, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.KParts__MainWindow, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QPoint ```
    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.KParts__MainWindow, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QSize ```
    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.KParts__MainWindow, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.KParts__MainWindow, geometry: QtC.QRect ```
    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kparts::mainwindow.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: QtC.KParts__MainWindow, geometry: []u8 ```
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
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowState ```
    pub fn WindowState(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: QtC.KParts__MainWindow, state: flag of qnamespace_enums.WindowState ```
    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: QtC.KParts__MainWindow, state: flag of qnamespace_enums.WindowState ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.KParts__MainWindow, sizePolicy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.KParts__MainWindow, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.KParts__MainWindow, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.KParts__MainWindow, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: QtC.KParts__MainWindow, layout: QtC.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.KParts__MainWindow, parent: QtC.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.KParts__MainWindow, parent: QtC.QWidget, f: flag of qnamespace_enums.WindowType ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.KParts__MainWindow, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.KParts__MainWindow, dx: i32, dy: i32, param3: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: QtC.KParts__MainWindow, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KParts__MainWindow, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: QtC.KParts__MainWindow, actions: []QtC.QAction ```
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
    /// ``` self: QtC.KParts__MainWindow, before: QtC.QAction, actions: []QtC.QAction ```
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
    /// ``` self: QtC.KParts__MainWindow, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: QtC.KParts__MainWindow, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("kparts::mainwindow.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.KParts__MainWindow, text: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, icon: QtC.QIcon, text: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, text: []const u8, shortcut: QtC.QKeySequence ```
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
    /// ``` self: QtC.KParts__MainWindow, icon: QtC.QIcon, text: []const u8, shortcut: QtC.QKeySequence ```
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
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.KParts__MainWindow, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowType ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: QtC.KParts__MainWindow, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
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
    /// ``` self: QtC.KParts__MainWindow, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KParts__MainWindow, p: QtC.QPoint ```
    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.KParts__MainWindow, p: QtC.QPointF ```
    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: QtC.KParts__MainWindow, child: QtC.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.KParts__MainWindow, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: QtC.KParts__MainWindow, screen: QtC.QScreen ```
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
    /// ``` self: QtC.KParts__MainWindow, title: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, title: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.KParts__MainWindow, icon: QtC.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, icon: QtC.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.KParts__MainWindow, iconText: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, iconText: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.KParts__MainWindow, pos: QtC.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, pos: QtC.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    ///
    /// Returns: ``` flag of qnamespace_enums.InputMethodHint ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: QtC.KParts__MainWindow, hints: flag of qnamespace_enums.InputMethodHint ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KParts__MainWindow, target: QtC.QPaintDevice, targetOffset: QtC.QPoint ```
    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KParts__MainWindow, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KParts__MainWindow, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KParts__MainWindow, painter: QtC.QPainter, targetOffset: QtC.QPoint ```
    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KParts__MainWindow, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.KParts__MainWindow, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.KParts__MainWindow, rectangle: QtC.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.KParts__MainWindow, typeVal: qnamespace_enums.GestureType, flags: flag of qnamespace_enums.GestureFlag ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.KParts__MainWindow, key: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i32) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.KParts__MainWindow, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: qnamespace_enums.WidgetAttribute, on: bool ```
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
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KParts__MainWindow, name: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KParts__MainWindow, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KParts__MainWindow, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KParts__MainWindow, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KParts__MainWindow, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KParts__MainWindow, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kparts::mainwindow.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KParts__MainWindow, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KParts__MainWindow, obj: QtC.QObject ```
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
    /// ``` self: QtC.KParts__MainWindow, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KParts__MainWindow, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KParts__MainWindow, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kparts::mainwindow.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kparts::mainwindow.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KParts__MainWindow, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KParts__MainWindow, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KParts__MainWindow, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KParts__MainWindow, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
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
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn BuilderClient(self: ?*anyopaque) QtC.KXMLGUIClient {
        return qtc.KXMLGUIBuilder_BuilderClient(@ptrCast(self));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#setBuilderClient)
    ///
    /// ``` self: QtC.KParts__MainWindow, client: QtC.KXMLGUIClient ```
    pub fn SetBuilderClient(self: ?*anyopaque, client: ?*anyopaque) void {
        qtc.KXMLGUIBuilder_SetBuilderClient(@ptrCast(self), @ptrCast(client));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#widget)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.KXMLGUIBuilder_Widget(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// ``` self: QtC.KParts__MainWindow, name: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, doc: QtC.QDomDocument ```
    pub fn SetXMLGUIBuildDocument(self: ?*anyopaque, doc: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetXMLGUIBuildDocument(@ptrCast(self), @ptrCast(doc));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn XmlguiBuildDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KXMLGUIClient_XmlguiBuildDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setFactory)
    ///
    /// ``` self: QtC.KParts__MainWindow, factory: QtC.KXMLGUIFactory ```
    pub fn SetFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetFactory(@ptrCast(self), @ptrCast(factory));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#factory)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Factory(self: ?*anyopaque) QtC.KXMLGUIFactory {
        return qtc.KXMLGUIClient_Factory(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#parentClient)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ParentClient(self: ?*anyopaque) QtC.KXMLGUIClient {
        return qtc.KXMLGUIClient_ParentClient(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#insertChildClient)
    ///
    /// ``` self: QtC.KParts__MainWindow, child: QtC.KXMLGUIClient ```
    pub fn InsertChildClient(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.KXMLGUIClient_InsertChildClient(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#removeChildClient)
    ///
    /// ``` self: QtC.KParts__MainWindow, child: QtC.KXMLGUIClient ```
    pub fn RemoveChildClient(self: ?*anyopaque, child: ?*anyopaque) void {
        qtc.KXMLGUIClient_RemoveChildClient(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#childClients)
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn ChildClients(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KXMLGUIClient {
        const _arr: qtc.libqt_list = qtc.KXMLGUIClient_ChildClients(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KXMLGUIClient, _arr.len) catch @panic("kparts::mainwindow.ChildClients: Memory allocation failed");
        const _data: [*]QtC.KXMLGUIClient = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
    ///
    /// ``` self: QtC.KParts__MainWindow, builder: QtC.KXMLGUIBuilder ```
    pub fn SetClientBuilder(self: ?*anyopaque, builder: ?*anyopaque) void {
        qtc.KXMLGUIClient_SetClientBuilder(@ptrCast(self), @ptrCast(builder));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#clientBuilder)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ClientBuilder(self: ?*anyopaque) QtC.KXMLGUIBuilder {
        return qtc.KXMLGUIClient_ClientBuilder(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#reloadXML)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ReloadXML(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_ReloadXML(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#plugActionList)
    ///
    /// ``` self: QtC.KParts__MainWindow, name: []const u8, actionList: []QtC.QAction ```
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
    /// ``` self: QtC.KParts__MainWindow, name: []const u8 ```
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
        var files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("kparts::mainwindow.FindMostRecentXMLFile: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.FindMostRecentXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
    ///
    /// ``` self: QtC.KParts__MainWindow, state: []const u8, action: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, state: []const u8, action: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, state: []const u8 ```
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
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QWidget ```
    pub fn BeginXMLPlug(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXMLGUIClient_BeginXMLPlug(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn EndXMLPlug(self: ?*anyopaque) void {
        qtc.KXMLGUIClient_EndXMLPlug(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QWidget ```
    pub fn PrepareXMLUnplug(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KXMLGUIClient_PrepareXMLUnplug(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ``` self: QtC.KParts__MainWindow, xmlfile: []const u8, localxmlfile: []const u8 ```
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.FindVersionNumber: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
    ///
    /// ``` self: QtC.KParts__MainWindow, xmlfile: []const u8, localxmlfile: []const u8, merge: bool ```
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

    /// Inherited from KParts::PartBase
    ///
    /// [Qt documentation](https://api.kde.org/kparts-partbase.html#setPartObject)
    ///
    /// ``` self: QtC.KParts__MainWindow, object: QtC.QObject ```
    pub fn SetPartObject(self: ?*anyopaque, object: ?*anyopaque) void {
        qtc.KParts__PartBase_SetPartObject(@ptrCast(self), @ptrCast(object));
    }

    /// Inherited from KParts::PartBase
    ///
    /// [Qt documentation](https://api.kde.org/kparts-partbase.html#partObject)
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn PartObject(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__PartBase_PartObject(@ptrCast(self));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#guiFactory)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn GuiFactory(self: ?*anyopaque) QtC.KXMLGUIFactory {
        return qtc.KParts__MainWindow_GuiFactory(@ptrCast(self));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#guiFactory)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseGuiFactory(self: ?*anyopaque) QtC.KXMLGUIFactory {
        return qtc.KParts__MainWindow_QBaseGuiFactory(@ptrCast(self));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#guiFactory)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) QtC.KXMLGUIFactory ```
    pub fn OnGuiFactory(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KXMLGUIFactory) void {
        qtc.KParts__MainWindow_OnGuiFactory(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, config: QtC.KConfigGroup ```
    pub fn ApplyMainWindowSettings(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KParts__MainWindow_ApplyMainWindowSettings(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, config: QtC.KConfigGroup ```
    pub fn QBaseApplyMainWindowSettings(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseApplyMainWindowSettings(@ptrCast(self), @ptrCast(config));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#applyMainWindowSettings)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, config: QtC.KConfigGroup) callconv(.c) void ```
    pub fn OnApplyMainWindowSettings(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnApplyMainWindowSettings(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, newstate: []const u8 ```
    pub fn SlotStateChanged(self: ?*anyopaque, newstate: []const u8) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__MainWindow_SlotStateChanged(@ptrCast(self), newstate_str);
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, newstate: []const u8 ```
    pub fn QBaseSlotStateChanged(self: ?*anyopaque, newstate: []const u8) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__MainWindow_QBaseSlotStateChanged(@ptrCast(self), newstate_str);
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#slotStateChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, newstate: [*:0]const u8) callconv(.c) void ```
    pub fn OnSlotStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSlotStateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__MainWindow_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, caption: []const u8 ```
    pub fn SetCaption(self: ?*anyopaque, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KParts__MainWindow_SetCaption(@ptrCast(self), caption_str);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, caption: []const u8 ```
    pub fn QBaseSetCaption(self: ?*anyopaque, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KParts__MainWindow_QBaseSetCaption(@ptrCast(self), caption_str);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setCaption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, caption: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetCaption(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSetCaption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setPlainCaption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, caption: []const u8 ```
    pub fn SetPlainCaption(self: ?*anyopaque, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KParts__MainWindow_SetPlainCaption(@ptrCast(self), caption_str);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setPlainCaption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, caption: []const u8 ```
    pub fn QBaseSetPlainCaption(self: ?*anyopaque, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KParts__MainWindow_QBaseSetPlainCaption(@ptrCast(self), caption_str);
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#setPlainCaption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, caption: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetPlainCaption(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSetPlainCaption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, keyEvent: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, keyEvent: ?*anyopaque) void {
        qtc.KParts__MainWindow_KeyPressEvent(@ptrCast(self), @ptrCast(keyEvent));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, keyEvent: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, keyEvent: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(keyEvent));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, keyEvent: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KParts__MainWindow_CloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseCloseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, param1: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#queryClose)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QueryClose(self: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_QueryClose(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#queryClose)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseQueryClose(self: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_QBaseQueryClose(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#queryClose)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) bool ```
    pub fn OnQueryClose(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__MainWindow_OnQueryClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.KConfigGroup ```
    pub fn SaveProperties(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KParts__MainWindow_SaveProperties(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveProperties)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.KConfigGroup ```
    pub fn QBaseSaveProperties(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseSaveProperties(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveProperties)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, param1: QtC.KConfigGroup) callconv(.c) void ```
    pub fn OnSaveProperties(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSaveProperties(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.KConfigGroup ```
    pub fn ReadProperties(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KParts__MainWindow_ReadProperties(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readProperties)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.KConfigGroup ```
    pub fn QBaseReadProperties(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseReadProperties(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readProperties)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, param1: QtC.KConfigGroup) callconv(.c) void ```
    pub fn OnReadProperties(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnReadProperties(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, sessionConfig: QtC.KConfig ```
    pub fn SaveGlobalProperties(self: ?*anyopaque, sessionConfig: ?*anyopaque) void {
        qtc.KParts__MainWindow_SaveGlobalProperties(@ptrCast(self), @ptrCast(sessionConfig));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, sessionConfig: QtC.KConfig ```
    pub fn QBaseSaveGlobalProperties(self: ?*anyopaque, sessionConfig: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseSaveGlobalProperties(@ptrCast(self), @ptrCast(sessionConfig));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveGlobalProperties)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, sessionConfig: QtC.KConfig) callconv(.c) void ```
    pub fn OnSaveGlobalProperties(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSaveGlobalProperties(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readGlobalProperties)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, sessionConfig: QtC.KConfig ```
    pub fn ReadGlobalProperties(self: ?*anyopaque, sessionConfig: ?*anyopaque) void {
        qtc.KParts__MainWindow_ReadGlobalProperties(@ptrCast(self), @ptrCast(sessionConfig));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readGlobalProperties)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, sessionConfig: QtC.KConfig ```
    pub fn QBaseReadGlobalProperties(self: ?*anyopaque, sessionConfig: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseReadGlobalProperties(@ptrCast(self), @ptrCast(sessionConfig));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readGlobalProperties)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, sessionConfig: QtC.KConfig) callconv(.c) void ```
    pub fn OnReadGlobalProperties(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnReadGlobalProperties(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn CreatePopupMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.KParts__MainWindow_CreatePopupMenu(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseCreatePopupMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.KParts__MainWindow_QBaseCreatePopupMenu(@ptrCast(self));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#createPopupMenu)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) QtC.QMenu ```
    pub fn OnCreatePopupMenu(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMenu) void {
        qtc.KParts__MainWindow_OnCreatePopupMenu(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QMainWindow
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qmainwindow.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.KParts__MainWindow_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.KParts__MainWindow_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__MainWindow_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KParts__MainWindow_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.KParts__MainWindow_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, visible: bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KParts__MainWindow_SizeHint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KParts__MainWindow_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.KParts__MainWindow_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KParts__MainWindow_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.KParts__MainWindow_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.KParts__MainWindow_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KParts__MainWindow_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KParts__MainWindow_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.KParts__MainWindow_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__MainWindow_OnHasHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.KParts__MainWindow_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.KParts__MainWindow_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.KParts__MainWindow_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_PaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBasePaintEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnTabletEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnActionEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KParts__MainWindow_NativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KParts__MainWindow_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, eventType: [*:0]u8, message: ?*anyopaque, result: *isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KParts__MainWindow_OnNativeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KParts__MainWindow_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, param1: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KParts__MainWindow_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.KParts__MainWindow_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.KParts__MainWindow_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KParts__MainWindow_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnInitPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.KParts__MainWindow_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.KParts__MainWindow_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.KParts__MainWindow_OnRedirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.KParts__MainWindow_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.KParts__MainWindow_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.KParts__MainWindow_OnSharedPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KParts__MainWindow_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, param1: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.KParts__MainWindow_InputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.KParts__MainWindow_QBaseInputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.KParts__MainWindow_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.KParts__MainWindow_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.KParts__MainWindow_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.KParts__MainWindow_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__MainWindow_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__MainWindow_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__MainWindow_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#containerTags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn ContainerTags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KParts__MainWindow_ContainerTags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kparts::mainwindow.ContainerTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kparts::mainwindow.ContainerTags: Memory allocation failed");
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
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn QBaseContainerTags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KParts__MainWindow_QBaseContainerTags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kparts::mainwindow.ContainerTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kparts::mainwindow.ContainerTags: Memory allocation failed");
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
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnContainerTags(self: ?*anyopaque, callback: *const fn () callconv(.c) [*][*:0]const u8) void {
        qtc.KParts__MainWindow_OnContainerTags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, parent: QtC.QWidget, index: i32, element: QtC.QDomElement, containerAction: QtC.QAction ```
    pub fn CreateContainer(self: ?*anyopaque, parent: ?*anyopaque, index: i32, element: ?*anyopaque, containerAction: ?**anyopaque) QtC.QWidget {
        return qtc.KParts__MainWindow_CreateContainer(@ptrCast(self), @ptrCast(parent), @intCast(index), @ptrCast(element), @ptrCast(containerAction));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, parent: QtC.QWidget, index: i32, element: QtC.QDomElement, containerAction: QtC.QAction ```
    pub fn QBaseCreateContainer(self: ?*anyopaque, parent: ?*anyopaque, index: i32, element: ?*anyopaque, containerAction: ?**anyopaque) QtC.QWidget {
        return qtc.KParts__MainWindow_QBaseCreateContainer(@ptrCast(self), @ptrCast(parent), @intCast(index), @ptrCast(element), @ptrCast(containerAction));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createContainer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, parent: QtC.QWidget, index: i32, element: QtC.QDomElement, containerAction: QtC.QAction) callconv(.c) QtC.QWidget ```
    pub fn OnCreateContainer(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, ?**anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.KParts__MainWindow_OnCreateContainer(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, container: QtC.QWidget, parent: QtC.QWidget, element: QtC.QDomElement, containerAction: QtC.QAction ```
    pub fn RemoveContainer(self: ?*anyopaque, container: ?*anyopaque, parent: ?*anyopaque, element: ?*anyopaque, containerAction: ?*anyopaque) void {
        qtc.KParts__MainWindow_RemoveContainer(@ptrCast(self), @ptrCast(container), @ptrCast(parent), @ptrCast(element), @ptrCast(containerAction));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, container: QtC.QWidget, parent: QtC.QWidget, element: QtC.QDomElement, containerAction: QtC.QAction ```
    pub fn QBaseRemoveContainer(self: ?*anyopaque, container: ?*anyopaque, parent: ?*anyopaque, element: ?*anyopaque, containerAction: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseRemoveContainer(@ptrCast(self), @ptrCast(container), @ptrCast(parent), @ptrCast(element), @ptrCast(containerAction));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#removeContainer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, container: QtC.QWidget, parent: QtC.QWidget, element: QtC.QDomElement, containerAction: QtC.QAction) callconv(.c) void ```
    pub fn OnRemoveContainer(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnRemoveContainer(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#customTags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn CustomTags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KParts__MainWindow_CustomTags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kparts::mainwindow.CustomTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kparts::mainwindow.CustomTags: Memory allocation failed");
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
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn QBaseCustomTags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KParts__MainWindow_QBaseCustomTags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kparts::mainwindow.CustomTags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kparts::mainwindow.CustomTags: Memory allocation failed");
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
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnCustomTags(self: ?*anyopaque, callback: *const fn () callconv(.c) [*][*:0]const u8) void {
        qtc.KParts__MainWindow_OnCustomTags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, parent: QtC.QWidget, index: i32, element: QtC.QDomElement ```
    pub fn CreateCustomElement(self: ?*anyopaque, parent: ?*anyopaque, index: i32, element: ?*anyopaque) QtC.QAction {
        return qtc.KParts__MainWindow_CreateCustomElement(@ptrCast(self), @ptrCast(parent), @intCast(index), @ptrCast(element));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, parent: QtC.QWidget, index: i32, element: QtC.QDomElement ```
    pub fn QBaseCreateCustomElement(self: ?*anyopaque, parent: ?*anyopaque, index: i32, element: ?*anyopaque) QtC.QAction {
        return qtc.KParts__MainWindow_QBaseCreateCustomElement(@ptrCast(self), @ptrCast(parent), @intCast(index), @ptrCast(element));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, parent: QtC.QWidget, index: i32, element: QtC.QDomElement) callconv(.c) QtC.QAction ```
    pub fn OnCreateCustomElement(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QAction) void {
        qtc.KParts__MainWindow_OnCreateCustomElement(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, client: QtC.KXMLGUIClient ```
    pub fn FinalizeGUI(self: ?*anyopaque, client: ?*anyopaque) void {
        qtc.KParts__MainWindow_FinalizeGUI(@ptrCast(self), @ptrCast(client));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, client: QtC.KXMLGUIClient ```
    pub fn QBaseFinalizeGUI(self: ?*anyopaque, client: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseFinalizeGUI(@ptrCast(self), @ptrCast(client));
    }

    /// Inherited from KXMLGUIBuilder
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, client: QtC.KXMLGUIClient) callconv(.c) void ```
    pub fn OnFinalizeGUI(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnFinalizeGUI(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, element: QtC.QDomElement ```
    pub fn Action2(self: ?*anyopaque, element: ?*anyopaque) QtC.QAction {
        return qtc.KParts__MainWindow_Action2(@ptrCast(self), @ptrCast(element));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, element: QtC.QDomElement ```
    pub fn QBaseAction2(self: ?*anyopaque, element: ?*anyopaque) QtC.QAction {
        return qtc.KParts__MainWindow_QBaseAction2(@ptrCast(self), @ptrCast(element));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#action)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, element: QtC.QDomElement) callconv(.c) QtC.QAction ```
    pub fn OnAction2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAction) void {
        qtc.KParts__MainWindow_OnAction2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn ActionCollection(self: ?*anyopaque) QtC.KActionCollection {
        return qtc.KParts__MainWindow_ActionCollection(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseActionCollection(self: ?*anyopaque) QtC.KActionCollection {
        return qtc.KParts__MainWindow_QBaseActionCollection(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#actionCollection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) QtC.KActionCollection ```
    pub fn OnActionCollection(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KActionCollection) void {
        qtc.KParts__MainWindow_OnActionCollection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn ComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__MainWindow_ComponentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn QBaseComponentName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__MainWindow_QBaseComponentName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.ComponentName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#componentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnComponentName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__MainWindow_OnComponentName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn DomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KParts__MainWindow_DomDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseDomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.KParts__MainWindow_QBaseDomDocument(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#domDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) QtC.QDomDocument ```
    pub fn OnDomDocument(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QDomDocument) void {
        qtc.KParts__MainWindow_OnDomDocument(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn XmlFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__MainWindow_XmlFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn QBaseXmlFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__MainWindow_QBaseXmlFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.XmlFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#xmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnXmlFile(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__MainWindow_OnXmlFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn LocalXMLFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__MainWindow_LocalXMLFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn QBaseLocalXMLFile(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__MainWindow_QBaseLocalXMLFile(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.LocalXMLFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#localXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnLocalXMLFile(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__MainWindow_OnLocalXMLFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, componentName: []const u8, componentDisplayName: []const u8 ```
    pub fn SetComponentName(self: ?*anyopaque, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__MainWindow_SetComponentName(@ptrCast(self), componentName_str, componentDisplayName_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, componentName: []const u8, componentDisplayName: []const u8 ```
    pub fn QBaseSetComponentName(self: ?*anyopaque, componentName: []const u8, componentDisplayName: []const u8) void {
        const componentName_str = qtc.libqt_string{
            .len = componentName.len,
            .data = componentName.ptr,
        };
        const componentDisplayName_str = qtc.libqt_string{
            .len = componentDisplayName.len,
            .data = componentDisplayName.ptr,
        };
        qtc.KParts__MainWindow_QBaseSetComponentName(@ptrCast(self), componentName_str, componentDisplayName_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setComponentName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, componentName: [*:0]const u8, componentDisplayName: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetComponentName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSetComponentName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, file: []const u8, merge: bool, setXMLDoc: bool ```
    pub fn SetXMLFile(self: ?*anyopaque, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__MainWindow_SetXMLFile(@ptrCast(self), file_str, merge, setXMLDoc);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, file: []const u8, merge: bool, setXMLDoc: bool ```
    pub fn QBaseSetXMLFile(self: ?*anyopaque, file: []const u8, merge: bool, setXMLDoc: bool) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__MainWindow_QBaseSetXMLFile(@ptrCast(self), file_str, merge, setXMLDoc);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, file: [*:0]const u8, merge: bool, setXMLDoc: bool) callconv(.c) void ```
    pub fn OnSetXMLFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, bool, bool) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSetXMLFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, file: []const u8 ```
    pub fn SetLocalXMLFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__MainWindow_SetLocalXMLFile(@ptrCast(self), file_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, file: []const u8 ```
    pub fn QBaseSetLocalXMLFile(self: ?*anyopaque, file: []const u8) void {
        const file_str = qtc.libqt_string{
            .len = file.len,
            .data = file.ptr,
        };
        qtc.KParts__MainWindow_QBaseSetLocalXMLFile(@ptrCast(self), file_str);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, file: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetLocalXMLFile(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSetLocalXMLFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, document: []const u8, merge: bool ```
    pub fn SetXML(self: ?*anyopaque, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__MainWindow_SetXML(@ptrCast(self), document_str, merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, document: []const u8, merge: bool ```
    pub fn QBaseSetXML(self: ?*anyopaque, document: []const u8, merge: bool) void {
        const document_str = qtc.libqt_string{
            .len = document.len,
            .data = document.ptr,
        };
        qtc.KParts__MainWindow_QBaseSetXML(@ptrCast(self), document_str, merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setXML)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, document: [*:0]const u8, merge: bool) callconv(.c) void ```
    pub fn OnSetXML(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSetXML(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, document: QtC.QDomDocument, merge: bool ```
    pub fn SetDOMDocument(self: ?*anyopaque, document: ?*anyopaque, merge: bool) void {
        qtc.KParts__MainWindow_SetDOMDocument(@ptrCast(self), @ptrCast(document), merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, document: QtC.QDomDocument, merge: bool ```
    pub fn QBaseSetDOMDocument(self: ?*anyopaque, document: ?*anyopaque, merge: bool) void {
        qtc.KParts__MainWindow_QBaseSetDOMDocument(@ptrCast(self), @ptrCast(document), merge);
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, document: QtC.QDomDocument, merge: bool) callconv(.c) void ```
    pub fn OnSetDOMDocument(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSetDOMDocument(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, newstate: []const u8, reverse: kxmlguiclient_enums.ReverseStateChange ```
    pub fn StateChanged(self: ?*anyopaque, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__MainWindow_StateChanged(@ptrCast(self), newstate_str, @intCast(reverse));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, newstate: []const u8, reverse: kxmlguiclient_enums.ReverseStateChange ```
    pub fn QBaseStateChanged(self: ?*anyopaque, newstate: []const u8, reverse: i32) void {
        const newstate_str = qtc.libqt_string{
            .len = newstate.len,
            .data = newstate.ptr,
        };
        qtc.KParts__MainWindow_QBaseStateChanged(@ptrCast(self), newstate_str, @intCast(reverse));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#stateChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, newstate: [*:0]const u8, reverse: kxmlguiclient_enums.ReverseStateChange) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnStateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn CheckAmbiguousShortcuts(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_CheckAmbiguousShortcuts(@ptrCast(self));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseCheckAmbiguousShortcuts(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseCheckAmbiguousShortcuts(@ptrCast(self));
    }

    /// Inherited from KXmlGuiWindow
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiwindow.html#checkAmbiguousShortcuts)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) void ```
    pub fn OnCheckAmbiguousShortcuts(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__MainWindow_OnCheckAmbiguousShortcuts(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.KConfig, param2: i32 ```
    pub fn SavePropertiesInternal(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.KParts__MainWindow_SavePropertiesInternal(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.KConfig, param2: i32 ```
    pub fn QBaseSavePropertiesInternal(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) void {
        qtc.KParts__MainWindow_QBaseSavePropertiesInternal(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#savePropertiesInternal)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, param1: QtC.KConfig, param2: i32) callconv(.c) void ```
    pub fn OnSavePropertiesInternal(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSavePropertiesInternal(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.KConfig, param2: i32 ```
    pub fn ReadPropertiesInternal(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) bool {
        return qtc.KParts__MainWindow_ReadPropertiesInternal(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, param1: QtC.KConfig, param2: i32 ```
    pub fn QBaseReadPropertiesInternal(self: ?*anyopaque, param1: ?*anyopaque, param2: i32) bool {
        return qtc.KParts__MainWindow_QBaseReadPropertiesInternal(@ptrCast(self), @ptrCast(param1), @intCast(param2));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#readPropertiesInternal)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, param1: QtC.KConfig, param2: i32) callconv(.c) bool ```
    pub fn OnReadPropertiesInternal(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KParts__MainWindow_OnReadPropertiesInternal(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#settingsDirty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SettingsDirty(self: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_SettingsDirty(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#settingsDirty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseSettingsDirty(self: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_QBaseSettingsDirty(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#settingsDirty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) bool ```
    pub fn OnSettingsDirty(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__MainWindow_OnSettingsDirty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SaveAutoSaveSettings(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_SaveAutoSaveSettings(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseSaveAutoSaveSettings(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseSaveAutoSaveSettings(@ptrCast(self));
    }

    /// Inherited from KMainWindow
    ///
    /// [Qt documentation](https://api.kde.org/kmainwindow.html#saveAutoSaveSettings)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) void ```
    pub fn OnSaveAutoSaveSettings(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__MainWindow_OnSaveAutoSaveSettings(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__MainWindow_OnUpdateMicroFocus(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__MainWindow_OnCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__MainWindow_OnDestroy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__MainWindow_OnFocusNextChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KParts__MainWindow_OnFocusPreviousChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__MainWindow_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KParts__MainWindow_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KParts__MainWindow_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KParts__MainWindow_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KParts__MainWindow_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KParts__MainWindow_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__MainWindow_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KParts__MainWindow_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KParts__MainWindow_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KParts__MainWindow_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KParts__MainWindow_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.KParts__MainWindow_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.KParts__MainWindow_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.KParts__MainWindow_OnGetDecodedMetricF(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn StandardsXmlFileLocation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__MainWindow_StandardsXmlFileLocation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, allocator: std.mem.Allocator ```
    pub fn QBaseStandardsXmlFileLocation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KParts__MainWindow_QBaseStandardsXmlFileLocation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kparts::mainwindow.StandardsXmlFileLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnStandardsXmlFileLocation(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KParts__MainWindow_OnStandardsXmlFileLocation(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn LoadStandardsXmlFile(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_LoadStandardsXmlFile(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QBaseLoadStandardsXmlFile(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_QBaseLoadStandardsXmlFile(@ptrCast(self));
    }

    /// Inherited from KXMLGUIClient
    ///
    /// [Qt documentation](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn () callconv(.c) void ```
    pub fn OnLoadStandardsXmlFile(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KParts__MainWindow_OnLoadStandardsXmlFile(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KParts__MainWindow, callback: *const fn (self: QtC.KParts__MainWindow, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KParts__MainWindow ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KParts__MainWindow_Delete(@ptrCast(self));
    }
};
