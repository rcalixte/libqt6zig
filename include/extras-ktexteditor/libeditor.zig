const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KAboutData = @import("libqt6").KAboutData;
const KSyntaxHighlighting__Repository = @import("libqt6").KSyntaxHighlighting__Repository;
const KSyntaxHighlighting__Theme = @import("libqt6").KSyntaxHighlighting__Theme;
const KTextEditor__Application = @import("libqt6").KTextEditor__Application;
const KTextEditor__Command = @import("libqt6").KTextEditor__Command;
const KTextEditor__ConfigPage = @import("libqt6").KTextEditor__ConfigPage;
const KTextEditor__Document = @import("libqt6").KTextEditor__Document;
const KTextEditor__View = @import("libqt6").KTextEditor__View;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html)
pub const KTextEditor__Editor = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__Editor,

    pub const _is_KTextEditor__Editor = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn MetaObject(self: KTextEditor__Editor) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__Editor_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KTextEditor__Editor, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__Editor_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KTextEditor__Editor, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__Editor_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__editor.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#instance)
    ///
    pub fn Instance() KTextEditor__Editor {
        return .{ .ptr = qtc.KTextEditor__Editor_Instance() };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#setApplication)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` application: KTextEditor__Application `
    ///
    pub fn SetApplication(self: KTextEditor__Editor, application: anytype) void {
        comptime _ = @TypeOf(application)._is_KTextEditor__Application;
        qtc.KTextEditor__Editor_SetApplication(@ptrCast(self.ptr), @ptrCast(application.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#application)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn Application(self: KTextEditor__Editor) KTextEditor__Application {
        return .{ .ptr = qtc.KTextEditor__Editor_Application(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#createDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` parent: QObject `
    ///
    pub fn CreateDocument(self: KTextEditor__Editor, parent: anytype) KTextEditor__Document {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KTextEditor__Editor_CreateDocument(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#documents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Documents(self: KTextEditor__Editor, allocator: std.mem.Allocator) []KTextEditor__Document {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Editor_Documents(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__Document, _arr.len) catch @panic("ktexteditor__editor.Documents: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__Document = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#documentCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` editor: KTextEditor__Editor `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn DocumentCreated(self: KTextEditor__Editor, editor: anytype, document: anytype) void {
        comptime _ = @TypeOf(editor)._is_KTextEditor__Editor;
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Editor_DocumentCreated(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#documentCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` callback: *const fn (self: KTextEditor__Editor, editor: KTextEditor__Editor, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn OnDocumentCreated(self: KTextEditor__Editor, callback: *const fn (KTextEditor__Editor, KTextEditor__Editor, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Editor_Connect_DocumentCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#aboutData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn AboutData(self: KTextEditor__Editor) KAboutData {
        return .{ .ptr = qtc.KTextEditor__Editor_AboutData(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#defaultEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultEncoding(self: KTextEditor__Editor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Editor_DefaultEncoding(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__editor.DefaultEncoding: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` parent: QWidget `
    ///
    pub fn ConfigDialog(self: KTextEditor__Editor, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.KTextEditor__Editor_ConfigDialog(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configPages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn ConfigPages(self: KTextEditor__Editor) i32 {
        return qtc.KTextEditor__Editor_ConfigPages(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` number: i32 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn ConfigPage(self: KTextEditor__Editor, number: i32, parent: anytype) KTextEditor__ConfigPage {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KTextEditor__Editor_ConfigPage(@ptrCast(self.ptr), @bitCast(number), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` editor: KTextEditor__Editor `
    ///
    pub fn ConfigChanged(self: KTextEditor__Editor, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_KTextEditor__Editor;
        qtc.KTextEditor__Editor_ConfigChanged(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` callback: *const fn (self: KTextEditor__Editor, editor: KTextEditor__Editor) callconv(.c) void `
    ///
    pub fn OnConfigChanged(self: KTextEditor__Editor, callback: *const fn (KTextEditor__Editor, KTextEditor__Editor) callconv(.c) void) void {
        qtc.KTextEditor__Editor_Connect_ConfigChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn Font(self: KTextEditor__Editor) QFont {
        return .{ .ptr = qtc.KTextEditor__Editor_Font(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn Theme(self: KTextEditor__Editor) KSyntaxHighlighting__Theme {
        return .{ .ptr = qtc.KTextEditor__Editor_Theme(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#repository)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn Repository(self: KTextEditor__Editor) KSyntaxHighlighting__Repository {
        return .{ .ptr = qtc.KTextEditor__Editor_Repository(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#repositoryReloaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` editor: KTextEditor__Editor `
    ///
    pub fn RepositoryReloaded(self: KTextEditor__Editor, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_KTextEditor__Editor;
        qtc.KTextEditor__Editor_RepositoryReloaded(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#repositoryReloaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` callback: *const fn (self: KTextEditor__Editor, editor: KTextEditor__Editor) callconv(.c) void `
    ///
    pub fn OnRepositoryReloaded(self: KTextEditor__Editor, callback: *const fn (KTextEditor__Editor, KTextEditor__Editor) callconv(.c) void) void {
        qtc.KTextEditor__Editor_Connect_RepositoryReloaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#queryCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` cmd: []const u8 `
    ///
    pub fn QueryCommand(self: KTextEditor__Editor, cmd: []const u8) KTextEditor__Command {
        const cmd_str = qtc.libqt_string{
            .len = cmd.len,
            .data = cmd.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Editor_QueryCommand(@ptrCast(self.ptr), cmd_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#commands)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Commands(self: KTextEditor__Editor, allocator: std.mem.Allocator) []KTextEditor__Command {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Editor_Commands(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__Command, _arr.len) catch @panic("ktexteditor__editor.Commands: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__Command = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#commandList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CommandList(self: KTextEditor__Editor, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Editor_CommandList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ktexteditor__editor.CommandList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__editor.CommandList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#unregisterVariable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` variableName: []const u8 `
    ///
    pub fn UnregisterVariable(self: KTextEditor__Editor, variableName: []const u8) bool {
        const variableName_str = qtc.libqt_string{
            .len = variableName.len,
            .data = variableName.ptr,
        };
        return qtc.KTextEditor__Editor_UnregisterVariable(@ptrCast(self.ptr), variableName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#expandVariable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` variable: []const u8 `
    ///
    /// ` view: KTextEditor__View `
    ///
    /// ` output: []const u8 `
    ///
    pub fn ExpandVariable(self: KTextEditor__Editor, variable: []const u8, view: anytype, output: []const u8) bool {
        const variable_str = qtc.libqt_string{
            .len = variable.len,
            .data = variable.ptr,
        };
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        const output_str = qtc.libqt_string{
            .len = output.len,
            .data = output.ptr,
        };
        return qtc.KTextEditor__Editor_ExpandVariable(@ptrCast(self.ptr), variable_str, @ptrCast(view.ptr), output_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#expandText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn ExpandText(self: KTextEditor__Editor, allocator: std.mem.Allocator, text: []const u8, view: anytype) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        var _str = qtc.KTextEditor__Editor_ExpandText(@ptrCast(self.ptr), text_str, @ptrCast(view.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__editor.ExpandText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#addVariableExpansion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` widgets: []QWidget `
    ///
    pub fn AddVariableExpansion(self: KTextEditor__Editor, widgets: []QWidget) void {
        const widgets_list = qtc.libqt_list{
            .len = widgets.len,
            .data = @ptrCast(widgets.ptr),
        };
        qtc.KTextEditor__Editor_AddVariableExpansion(@ptrCast(self.ptr), widgets_list);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__editor.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__editor.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#addVariableExpansion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` widgets: []QWidget `
    ///
    /// ` variables: []const []const u8 `
    ///
    pub fn AddVariableExpansion2(self: KTextEditor__Editor, allocator: std.mem.Allocator, widgets: []QWidget, variables: []const []const u8) void {
        const widgets_list = qtc.libqt_list{
            .len = widgets.len,
            .data = @ptrCast(widgets.ptr),
        };
        const variables_arr = allocator.alloc(qtc.libqt_string, variables.len) catch @panic("ktexteditor__editor.AddVariableExpansion2: Memory allocation failed");
        defer allocator.free(variables_arr);
        for (variables, 0..variables.len) |item, i|
            variables_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const variables_list = qtc.libqt_list{
            .len = variables.len,
            .data = variables_arr.ptr,
        };
        qtc.KTextEditor__Editor_AddVariableExpansion2(@ptrCast(self.ptr), widgets_list, variables_list);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KTextEditor__Editor, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KTextEditor__Editor, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KTextEditor__Editor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__editor.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KTextEditor__Editor, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn IsWidgetType(self: KTextEditor__Editor) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn IsWindowType(self: KTextEditor__Editor) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn IsQuickItemType(self: KTextEditor__Editor) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn SignalsBlocked(self: KTextEditor__Editor) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KTextEditor__Editor, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn Thread(self: KTextEditor__Editor) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KTextEditor__Editor, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KTextEditor__Editor, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KTextEditor__Editor, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KTextEditor__Editor, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KTextEditor__Editor, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KTextEditor__Editor, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ktexteditor__editor.Children: Memory allocation failed");
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KTextEditor__Editor, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KTextEditor__Editor, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KTextEditor__Editor, obj: anytype) void {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KTextEditor__Editor, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn Disconnect3(self: KTextEditor__Editor) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KTextEditor__Editor, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn DumpObjectTree(self: KTextEditor__Editor) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn DumpObjectInfo(self: KTextEditor__Editor) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KTextEditor__Editor, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KTextEditor__Editor, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KTextEditor__Editor, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktexteditor__editor.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__editor.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn BindingStorage(self: KTextEditor__Editor) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn BindingStorage2(self: KTextEditor__Editor) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn Destroyed(self: KTextEditor__Editor) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` callback: *const fn (self: KTextEditor__Editor) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KTextEditor__Editor, callback: *const fn (KTextEditor__Editor) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn Parent(self: KTextEditor__Editor) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KTextEditor__Editor, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn DeleteLater(self: KTextEditor__Editor) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KTextEditor__Editor, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KTextEditor__Editor, time: i64, timerType: i32) i32 {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KTextEditor__Editor, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KTextEditor__Editor, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KTextEditor__Editor, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KTextEditor__Editor, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KTextEditor__Editor, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KTextEditor__Editor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` callback: *const fn (self: KTextEditor__Editor, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KTextEditor__Editor, callback: *const fn (KTextEditor__Editor, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` callback: *const fn (self: KTextEditor__Editor, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KTextEditor__Editor, callback: *const fn (KTextEditor__Editor, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};
