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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn metaObject(self: KTextEditor__Editor) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__Editor_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KTextEditor__Editor, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__Editor_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KTextEditor__Editor, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__Editor_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Editor.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `instance` instead
    ///
    pub const Instance = instance;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#instance)
    ///
    pub fn instance() KTextEditor__Editor {
        return .{ .ptr = qtc.KTextEditor__Editor_Instance() };
    }

    /// ### DEPRECATED: Use `setApplication` instead
    ///
    pub const SetApplication = setApplication;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#setApplication)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` _application: KTextEditor__Application `
    ///
    pub fn setApplication(self: KTextEditor__Editor, _application: anytype) void {
        comptime _ = @TypeOf(_application)._is_KTextEditor__Application;
        qtc.KTextEditor__Editor_SetApplication(@ptrCast(self.ptr), @ptrCast(_application.ptr));
    }

    /// ### DEPRECATED: Use `application` instead
    ///
    pub const Application = application;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#application)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn application(self: KTextEditor__Editor) KTextEditor__Application {
        return .{ .ptr = qtc.KTextEditor__Editor_Application(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createDocument` instead
    ///
    pub const CreateDocument = createDocument;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#createDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` _parent: QObject `
    ///
    pub fn createDocument(self: KTextEditor__Editor, _parent: anytype) KTextEditor__Document {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KTextEditor__Editor_CreateDocument(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `documents` instead
    ///
    pub const Documents = documents;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#documents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn documents(self: KTextEditor__Editor, allocator: std.mem.Allocator) []KTextEditor__Document {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Editor_Documents(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__Document, _arr.len) catch @panic("KTextEditor__Editor.documents: Memory allocation failed");
        const _data_val: [*]QtC.KTextEditor__Document = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `documentCreated` instead
    ///
    pub const DocumentCreated = documentCreated;

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
    pub fn documentCreated(self: KTextEditor__Editor, editor: anytype, document: anytype) void {
        comptime _ = @TypeOf(editor)._is_KTextEditor__Editor;
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Editor_DocumentCreated(@ptrCast(self.ptr), @ptrCast(editor.ptr), @ptrCast(document.ptr));
    }

    /// ### DEPRECATED: Use `onDocumentCreated` instead
    ///
    pub const OnDocumentCreated = onDocumentCreated;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#documentCreated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` callback: *const fn (self: KTextEditor__Editor, editor: KTextEditor__Editor, document: KTextEditor__Document) callconv(.c) void `
    ///
    pub fn onDocumentCreated(self: KTextEditor__Editor, callback: *const fn (KTextEditor__Editor, KTextEditor__Editor, KTextEditor__Document) callconv(.c) void) void {
        qtc.KTextEditor__Editor_Connect_DocumentCreated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aboutData` instead
    ///
    pub const AboutData = aboutData;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#aboutData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn aboutData(self: KTextEditor__Editor) KAboutData {
        return .{ .ptr = qtc.KTextEditor__Editor_AboutData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `defaultEncoding` instead
    ///
    pub const DefaultEncoding = defaultEncoding;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#defaultEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultEncoding(self: KTextEditor__Editor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Editor_DefaultEncoding(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Editor.defaultEncoding: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `configDialog` instead
    ///
    pub const ConfigDialog = configDialog;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn configDialog(self: KTextEditor__Editor, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.KTextEditor__Editor_ConfigDialog(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `configPages` instead
    ///
    pub const ConfigPages = configPages;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configPages)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn configPages(self: KTextEditor__Editor) i32 {
        return qtc.KTextEditor__Editor_ConfigPages(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `configPage` instead
    ///
    pub const ConfigPage = configPage;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` number: i32 `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn configPage(self: KTextEditor__Editor, number: i32, _parent: anytype) KTextEditor__ConfigPage {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KTextEditor__Editor_ConfigPage(@ptrCast(self.ptr), @bitCast(number), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `configChanged` instead
    ///
    pub const ConfigChanged = configChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` editor: KTextEditor__Editor `
    ///
    pub fn configChanged(self: KTextEditor__Editor, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_KTextEditor__Editor;
        qtc.KTextEditor__Editor_ConfigChanged(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `onConfigChanged` instead
    ///
    pub const OnConfigChanged = onConfigChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#configChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` callback: *const fn (self: KTextEditor__Editor, editor: KTextEditor__Editor) callconv(.c) void `
    ///
    pub fn onConfigChanged(self: KTextEditor__Editor, callback: *const fn (KTextEditor__Editor, KTextEditor__Editor) callconv(.c) void) void {
        qtc.KTextEditor__Editor_Connect_ConfigChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn font(self: KTextEditor__Editor) QFont {
        return .{ .ptr = qtc.KTextEditor__Editor_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `theme` instead
    ///
    pub const Theme = theme;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn theme(self: KTextEditor__Editor) KSyntaxHighlighting__Theme {
        return .{ .ptr = qtc.KTextEditor__Editor_Theme(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `repository` instead
    ///
    pub const Repository = repository;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#repository)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    pub fn repository(self: KTextEditor__Editor) KSyntaxHighlighting__Repository {
        return .{ .ptr = qtc.KTextEditor__Editor_Repository(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `repositoryReloaded` instead
    ///
    pub const RepositoryReloaded = repositoryReloaded;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#repositoryReloaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` editor: KTextEditor__Editor `
    ///
    pub fn repositoryReloaded(self: KTextEditor__Editor, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_KTextEditor__Editor;
        qtc.KTextEditor__Editor_RepositoryReloaded(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `onRepositoryReloaded` instead
    ///
    pub const OnRepositoryReloaded = onRepositoryReloaded;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#repositoryReloaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` callback: *const fn (self: KTextEditor__Editor, editor: KTextEditor__Editor) callconv(.c) void `
    ///
    pub fn onRepositoryReloaded(self: KTextEditor__Editor, callback: *const fn (KTextEditor__Editor, KTextEditor__Editor) callconv(.c) void) void {
        qtc.KTextEditor__Editor_Connect_RepositoryReloaded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `queryCommand` instead
    ///
    pub const QueryCommand = queryCommand;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#queryCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` cmd: []const u8 `
    ///
    pub fn queryCommand(self: KTextEditor__Editor, cmd: []const u8) KTextEditor__Command {
        const cmd_str = qtc.libqt_string{
            .len = cmd.len,
            .data = cmd.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Editor_QueryCommand(@ptrCast(self.ptr), cmd_str) };
    }

    /// ### DEPRECATED: Use `commands` instead
    ///
    pub const Commands = commands;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#commands)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn commands(self: KTextEditor__Editor, allocator: std.mem.Allocator) []KTextEditor__Command {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Editor_Commands(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KTextEditor__Command, _arr.len) catch @panic("KTextEditor__Editor.commands: Memory allocation failed");
        const _data_val: [*]QtC.KTextEditor__Command = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `commandList` instead
    ///
    pub const CommandList = commandList;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#commandList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn commandList(self: KTextEditor__Editor, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Editor_CommandList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KTextEditor__Editor.commandList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__Editor.commandList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `unregisterVariable` instead
    ///
    pub const UnregisterVariable = unregisterVariable;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#unregisterVariable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` variableName: []const u8 `
    ///
    pub fn unregisterVariable(self: KTextEditor__Editor, variableName: []const u8) bool {
        const variableName_str = qtc.libqt_string{
            .len = variableName.len,
            .data = variableName.ptr,
        };
        return qtc.KTextEditor__Editor_UnregisterVariable(@ptrCast(self.ptr), variableName_str);
    }

    /// ### DEPRECATED: Use `expandVariable` instead
    ///
    pub const ExpandVariable = expandVariable;

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
    pub fn expandVariable(self: KTextEditor__Editor, variable: []const u8, view: anytype, output: []const u8) bool {
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

    /// ### DEPRECATED: Use `expandText` instead
    ///
    pub const ExpandText = expandText;

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
    pub fn expandText(self: KTextEditor__Editor, allocator: std.mem.Allocator, text: []const u8, view: anytype) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        var _str = qtc.KTextEditor__Editor_ExpandText(@ptrCast(self.ptr), text_str, @ptrCast(view.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Editor.expandText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addVariableExpansion` instead
    ///
    pub const AddVariableExpansion = addVariableExpansion;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-editor.html#addVariableExpansion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` widgets: []QWidget `
    ///
    pub fn addVariableExpansion(self: KTextEditor__Editor, widgets: []QWidget) void {
        const widgets_list = qtc.libqt_list{
            .len = widgets.len,
            .data = @ptrCast(widgets.ptr),
        };
        qtc.KTextEditor__Editor_AddVariableExpansion(@ptrCast(self.ptr), widgets_list);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Editor.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Editor.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addVariableExpansion2` instead
    ///
    pub const AddVariableExpansion2 = addVariableExpansion2;

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
    pub fn addVariableExpansion2(self: KTextEditor__Editor, allocator: std.mem.Allocator, widgets: []QWidget, variables: []const []const u8) void {
        const widgets_list = qtc.libqt_list{
            .len = widgets.len,
            .data = @ptrCast(widgets.ptr),
        };
        const variables_arr = allocator.alloc(qtc.libqt_string, variables.len) catch @panic("KTextEditor__Editor.addVariableExpansion2: Memory allocation failed");
        defer allocator.free(variables_arr);
        for (variables, 0..variables.len) |str_item, i|
            variables_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const variables_list = qtc.libqt_list{
            .len = variables.len,
            .data = variables_arr.ptr,
        };
        qtc.KTextEditor__Editor_AddVariableExpansion2(@ptrCast(self.ptr), widgets_list, variables_list);
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Editor `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KTextEditor__Editor, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KTextEditor__Editor, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KTextEditor__Editor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Editor.objectName: Memory allocation failed");
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KTextEditor__Editor, name: []const u8) void {
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn isWidgetType(self: KTextEditor__Editor) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn isWindowType(self: KTextEditor__Editor) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn isQuickItemType(self: KTextEditor__Editor) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn signalsBlocked(self: KTextEditor__Editor) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KTextEditor__Editor, b: bool) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn thread(self: KTextEditor__Editor) QThread {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KTextEditor__Editor, _thread: anytype) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KTextEditor__Editor, interval: i32) i32 {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KTextEditor__Editor, time: i64) i32 {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KTextEditor__Editor, id: i32) void {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KTextEditor__Editor, id: i32) void {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KTextEditor__Editor, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KTextEditor__Editor.children: Memory allocation failed");
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KTextEditor__Editor, _parent: anytype) void {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KTextEditor__Editor, filterObj: anytype) void {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KTextEditor__Editor, obj: anytype) void {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KTextEditor__Editor, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn disconnect3(self: KTextEditor__Editor) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KTextEditor__Editor, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn dumpObjectTree(self: KTextEditor__Editor) void {
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn dumpObjectInfo(self: KTextEditor__Editor) void {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KTextEditor__Editor, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KTextEditor__Editor, name: [:0]const u8) QVariant {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KTextEditor__Editor, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KTextEditor__Editor.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__Editor.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn bindingStorage(self: KTextEditor__Editor) QBindingStorage {
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn bindingStorage2(self: KTextEditor__Editor) QBindingStorage {
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn destroyed(self: KTextEditor__Editor) void {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` callback: *const fn (self: KTextEditor__Editor) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KTextEditor__Editor, callback: *const fn (KTextEditor__Editor) callconv(.c) void) void {
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn parent(self: KTextEditor__Editor) QObject {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KTextEditor__Editor, classname: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    pub fn deleteLater(self: KTextEditor__Editor) void {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KTextEditor__Editor, interval: i32, timerType: i32) i32 {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KTextEditor__Editor, time: i64, timerType: i32) i32 {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KTextEditor__Editor, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KTextEditor__Editor, signal: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KTextEditor__Editor, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KTextEditor__Editor, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KTextEditor__Editor, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KTextEditor__Editor, param1: anytype) void {
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` callback: *const fn (self: KTextEditor__Editor, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KTextEditor__Editor, callback: *const fn (KTextEditor__Editor, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Editor `
    ///
    /// ` callback: *const fn (self: KTextEditor__Editor, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KTextEditor__Editor, callback: *const fn (KTextEditor__Editor, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};
