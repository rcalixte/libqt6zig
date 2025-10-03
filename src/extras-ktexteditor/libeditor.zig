const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/ktexteditor-editor.html
pub const ktexteditor__editor = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KTextEditor__Editor_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KTextEditor__Editor, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__Editor_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KTextEditor__Editor, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KTextEditor__Editor_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KTextEditor__Editor_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::editor.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#instance)
    ///
    ///
    pub fn Instance() QtC.KTextEditor__Editor {
        return qtc.KTextEditor__Editor_Instance();
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#setApplication)
    ///
    /// ``` self: QtC.KTextEditor__Editor, application: QtC.KTextEditor__Application ```
    pub fn SetApplication(self: ?*anyopaque, application: ?*anyopaque) void {
        qtc.KTextEditor__Editor_SetApplication(@ptrCast(self), @ptrCast(application));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#application)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn Application(self: ?*anyopaque) QtC.KTextEditor__Application {
        return qtc.KTextEditor__Editor_Application(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#createDocument)
    ///
    /// ``` self: QtC.KTextEditor__Editor, parent: QtC.QObject ```
    pub fn CreateDocument(self: ?*anyopaque, parent: ?*anyopaque) QtC.KTextEditor__Document {
        return qtc.KTextEditor__Editor_CreateDocument(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#documents)
    ///
    /// ``` self: QtC.KTextEditor__Editor, allocator: std.mem.Allocator ```
    pub fn Documents(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KTextEditor__Document {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Editor_Documents(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KTextEditor__Document, _arr.len) catch @panic("ktexteditor::editor.Documents: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__Document = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#documentCreated)
    ///
    /// ``` self: QtC.KTextEditor__Editor, editor: QtC.KTextEditor__Editor, document: QtC.KTextEditor__Document ```
    pub fn DocumentCreated(self: ?*anyopaque, editor: ?*anyopaque, document: ?*anyopaque) void {
        qtc.KTextEditor__Editor_DocumentCreated(@ptrCast(self), @ptrCast(editor), @ptrCast(document));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#documentCreated)
    ///
    /// ``` self: QtC.KTextEditor__Editor, callback: *const fn (self: QtC.KTextEditor__Editor, editor: QtC.KTextEditor__Editor, document: QtC.KTextEditor__Document) callconv(.c) void ```
    pub fn OnDocumentCreated(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Editor_Connect_DocumentCreated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#aboutData)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn AboutData(self: ?*anyopaque) QtC.KAboutData {
        return qtc.KTextEditor__Editor_AboutData(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#defaultEncoding)
    ///
    /// ``` self: QtC.KTextEditor__Editor, allocator: std.mem.Allocator ```
    pub fn DefaultEncoding(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KTextEditor__Editor_DefaultEncoding(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::editor.DefaultEncoding: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#configDialog)
    ///
    /// ``` self: QtC.KTextEditor__Editor, parent: QtC.QWidget ```
    pub fn ConfigDialog(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.KTextEditor__Editor_ConfigDialog(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#configPages)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn ConfigPages(self: ?*anyopaque) i32 {
        return qtc.KTextEditor__Editor_ConfigPages(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#configPage)
    ///
    /// ``` self: QtC.KTextEditor__Editor, number: i32, parent: QtC.QWidget ```
    pub fn ConfigPage(self: ?*anyopaque, number: i32, parent: ?*anyopaque) QtC.KTextEditor__ConfigPage {
        return qtc.KTextEditor__Editor_ConfigPage(@ptrCast(self), @intCast(number), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#configChanged)
    ///
    /// ``` self: QtC.KTextEditor__Editor, editor: QtC.KTextEditor__Editor ```
    pub fn ConfigChanged(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.KTextEditor__Editor_ConfigChanged(@ptrCast(self), @ptrCast(editor));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#configChanged)
    ///
    /// ``` self: QtC.KTextEditor__Editor, callback: *const fn (self: QtC.KTextEditor__Editor, editor: QtC.KTextEditor__Editor) callconv(.c) void ```
    pub fn OnConfigChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Editor_Connect_ConfigChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#font)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.KTextEditor__Editor_Font(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#theme)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn Theme(self: ?*anyopaque) QtC.KSyntaxHighlighting__Theme {
        return qtc.KTextEditor__Editor_Theme(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#repository)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn Repository(self: ?*anyopaque) QtC.KSyntaxHighlighting__Repository {
        return qtc.KTextEditor__Editor_Repository(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#repositoryReloaded)
    ///
    /// ``` self: QtC.KTextEditor__Editor, editor: QtC.KTextEditor__Editor ```
    pub fn RepositoryReloaded(self: ?*anyopaque, editor: ?*anyopaque) void {
        qtc.KTextEditor__Editor_RepositoryReloaded(@ptrCast(self), @ptrCast(editor));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#repositoryReloaded)
    ///
    /// ``` self: QtC.KTextEditor__Editor, callback: *const fn (self: QtC.KTextEditor__Editor, editor: QtC.KTextEditor__Editor) callconv(.c) void ```
    pub fn OnRepositoryReloaded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTextEditor__Editor_Connect_RepositoryReloaded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#queryCommand)
    ///
    /// ``` self: QtC.KTextEditor__Editor, cmd: []const u8 ```
    pub fn QueryCommand(self: ?*anyopaque, cmd: []const u8) QtC.KTextEditor__Command {
        const cmd_str = qtc.libqt_string{
            .len = cmd.len,
            .data = cmd.ptr,
        };
        return qtc.KTextEditor__Editor_QueryCommand(@ptrCast(self), cmd_str);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#commands)
    ///
    /// ``` self: QtC.KTextEditor__Editor, allocator: std.mem.Allocator ```
    pub fn Commands(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KTextEditor__Command {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Editor_Commands(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KTextEditor__Command, _arr.len) catch @panic("ktexteditor::editor.Commands: Memory allocation failed");
        const _data: [*]QtC.KTextEditor__Command = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#commandList)
    ///
    /// ``` self: QtC.KTextEditor__Editor, allocator: std.mem.Allocator ```
    pub fn CommandList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Editor_CommandList(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("ktexteditor::editor.CommandList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor::editor.CommandList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#unregisterVariable)
    ///
    /// ``` self: QtC.KTextEditor__Editor, variableName: []const u8 ```
    pub fn UnregisterVariable(self: ?*anyopaque, variableName: []const u8) bool {
        const variableName_str = qtc.libqt_string{
            .len = variableName.len,
            .data = variableName.ptr,
        };
        return qtc.KTextEditor__Editor_UnregisterVariable(@ptrCast(self), variableName_str);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#expandVariable)
    ///
    /// ``` self: QtC.KTextEditor__Editor, variable: []const u8, view: QtC.KTextEditor__View, output: []const u8 ```
    pub fn ExpandVariable(self: ?*anyopaque, variable: []const u8, view: ?*anyopaque, output: []const u8) bool {
        const variable_str = qtc.libqt_string{
            .len = variable.len,
            .data = variable.ptr,
        };
        const output_str = qtc.libqt_string{
            .len = output.len,
            .data = output.ptr,
        };
        return qtc.KTextEditor__Editor_ExpandVariable(@ptrCast(self), variable_str, @ptrCast(view), output_str);
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#expandText)
    ///
    /// ``` self: QtC.KTextEditor__Editor, text: []const u8, view: QtC.KTextEditor__View, allocator: std.mem.Allocator ```
    pub fn ExpandText(self: ?*anyopaque, text: []const u8, view: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _str = qtc.KTextEditor__Editor_ExpandText(@ptrCast(self), text_str, @ptrCast(view));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::editor.ExpandText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#addVariableExpansion)
    ///
    /// ``` self: QtC.KTextEditor__Editor, widgets: []QtC.QWidget ```
    pub fn AddVariableExpansion(self: ?*anyopaque, widgets: []?*anyopaque) void {
        const widgets_list = qtc.libqt_list{
            .len = widgets.len,
            .data = @ptrCast(widgets.ptr),
        };
        qtc.KTextEditor__Editor_AddVariableExpansion(@ptrCast(self), widgets_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KTextEditor__Editor_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::editor.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KTextEditor__Editor_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::editor.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ktexteditor-editor.html#addVariableExpansion)
    ///
    /// ``` self: QtC.KTextEditor__Editor, widgets: []QtC.QWidget, variables: [][]const u8, allocator: std.mem.Allocator ```
    pub fn AddVariableExpansion2(self: ?*anyopaque, widgets: []?*anyopaque, variables: [][]const u8, allocator: std.mem.Allocator) void {
        const widgets_list = qtc.libqt_list{
            .len = widgets.len,
            .data = @ptrCast(widgets.ptr),
        };
        var variables_arr = allocator.alloc(qtc.libqt_string, variables.len) catch @panic("ktexteditor::editor.AddVariableExpansion2: Memory allocation failed");
        defer allocator.free(variables_arr);
        for (variables, 0..variables.len) |item, i| {
            variables_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const variables_list = qtc.libqt_list{
            .len = variables.len,
            .data = variables_arr.ptr,
        };
        qtc.KTextEditor__Editor_AddVariableExpansion2(@ptrCast(self), widgets_list, variables_list);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.KTextEditor__Editor, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.KTextEditor__Editor, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KTextEditor__Editor, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor::editor.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KTextEditor__Editor, name: []const u8 ```
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
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KTextEditor__Editor, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KTextEditor__Editor, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KTextEditor__Editor, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KTextEditor__Editor, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KTextEditor__Editor, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KTextEditor__Editor, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("ktexteditor::editor.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KTextEditor__Editor, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KTextEditor__Editor, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KTextEditor__Editor, obj: QtC.QObject ```
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
    /// ``` self: QtC.KTextEditor__Editor, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KTextEditor__Editor, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KTextEditor__Editor, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KTextEditor__Editor, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktexteditor::editor.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor::editor.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__Editor, callback: *const fn (self: QtC.KTextEditor__Editor) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KTextEditor__Editor, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KTextEditor__Editor ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KTextEditor__Editor, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KTextEditor__Editor, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KTextEditor__Editor, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__Editor, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KTextEditor__Editor, callback: *const fn (self: QtC.KTextEditor__Editor, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KTextEditor__Editor, callback: *const fn (self: QtC.KTextEditor__Editor, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }
};
