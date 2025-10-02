const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html
pub const ksyntaxhighlighting__syntaxhighlighter = struct {
    /// New constructs a new KSyntaxHighlighting::SyntaxHighlighter object.
    ///
    ///
    pub fn New() QtC.KSyntaxHighlighting__SyntaxHighlighter {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_new();
    }

    /// New2 constructs a new KSyntaxHighlighting::SyntaxHighlighter object.
    ///
    /// ``` document: QtC.QTextDocument ```
    pub fn New2(document: ?*anyopaque) QtC.KSyntaxHighlighting__SyntaxHighlighter {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_new2(@ptrCast(document));
    }

    /// New3 constructs a new KSyntaxHighlighting::SyntaxHighlighter object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New3(parent: ?*anyopaque) QtC.KSyntaxHighlighting__SyntaxHighlighter {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_new3(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KSyntaxHighlighting__SyntaxHighlighter_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::syntaxhighlighter.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setDefinition)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, def: QtC.KSyntaxHighlighting__Definition ```
    pub fn SetDefinition(self: ?*anyopaque, def: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetDefinition(@ptrCast(self), @ptrCast(def));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setDefinition)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, def: QtC.KSyntaxHighlighting__Definition) callconv(.c) void ```
    pub fn OnSetDefinition(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetDefinition(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setDefinition)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, def: QtC.KSyntaxHighlighting__Definition ```
    pub fn QBaseSetDefinition(self: ?*anyopaque, def: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseSetDefinition(@ptrCast(self), @ptrCast(def));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setTheme)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, theme: QtC.KSyntaxHighlighting__Theme ```
    pub fn SetTheme(self: ?*anyopaque, theme: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetTheme(@ptrCast(self), @ptrCast(theme));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setTheme)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, theme: QtC.KSyntaxHighlighting__Theme) callconv(.c) void ```
    pub fn OnSetTheme(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetTheme(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#setTheme)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, theme: QtC.KSyntaxHighlighting__Theme ```
    pub fn QBaseSetTheme(self: ?*anyopaque, theme: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseSetTheme(@ptrCast(self), @ptrCast(theme));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#startsFoldingRegion)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, startBlock: QtC.QTextBlock ```
    pub fn StartsFoldingRegion(self: ?*anyopaque, startBlock: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_StartsFoldingRegion(@ptrCast(self), @ptrCast(startBlock));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#findFoldingRegionEnd)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, startBlock: QtC.QTextBlock ```
    pub fn FindFoldingRegionEnd(self: ?*anyopaque, startBlock: ?*anyopaque) QtC.QTextBlock {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_FindFoldingRegionEnd(@ptrCast(self), @ptrCast(startBlock));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#highlightBlock)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, text: []const u8 ```
    pub fn HighlightBlock(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KSyntaxHighlighting__SyntaxHighlighter_HighlightBlock(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#highlightBlock)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, text: [*:0]const u8) callconv(.c) void ```
    pub fn OnHighlightBlock(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnHighlightBlock(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#highlightBlock)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, text: []const u8 ```
    pub fn QBaseHighlightBlock(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseHighlightBlock(@ptrCast(self), text_str);
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFormat)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, format: QtC.KSyntaxHighlighting__Format ```
    pub fn ApplyFormat(self: ?*anyopaque, offset: i32, length: i32, format: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_ApplyFormat(@ptrCast(self), @intCast(offset), @intCast(length), @ptrCast(format));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFormat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, format: QtC.KSyntaxHighlighting__Format) callconv(.c) void ```
    pub fn OnApplyFormat(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnApplyFormat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFormat)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, format: QtC.KSyntaxHighlighting__Format ```
    pub fn QBaseApplyFormat(self: ?*anyopaque, offset: i32, length: i32, format: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseApplyFormat(@ptrCast(self), @intCast(offset), @intCast(length), @ptrCast(format));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFolding)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, region: QtC.KSyntaxHighlighting__FoldingRegion ```
    pub fn ApplyFolding(self: ?*anyopaque, offset: i32, length: i32, region: QtC.KSyntaxHighlighting__FoldingRegion) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_ApplyFolding(@ptrCast(self), @intCast(offset), @intCast(length), @ptrCast(region));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFolding)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, region: QtC.KSyntaxHighlighting__FoldingRegion) callconv(.c) void ```
    pub fn OnApplyFolding(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, QtC.KSyntaxHighlighting__FoldingRegion) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnApplyFolding(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-syntaxhighlighter.html#applyFolding)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, offset: i32, length: i32, region: QtC.KSyntaxHighlighting__FoldingRegion ```
    pub fn QBaseApplyFolding(self: ?*anyopaque, offset: i32, length: i32, region: QtC.KSyntaxHighlighting__FoldingRegion) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseApplyFolding(@ptrCast(self), @intCast(offset), @intCast(length), @ptrCast(region));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KSyntaxHighlighting__SyntaxHighlighter_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::syntaxhighlighter.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KSyntaxHighlighting__SyntaxHighlighter_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::syntaxhighlighter.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setDocument)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, doc: QtC.QTextDocument ```
    pub fn SetDocument(self: ?*anyopaque, doc: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_SetDocument(@ptrCast(self), @ptrCast(doc));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn Document(self: ?*anyopaque) QtC.QTextDocument {
        return qtc.QSyntaxHighlighter_Document(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn Rehighlight(self: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_Rehighlight(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, block: QtC.QTextBlock ```
    pub fn RehighlightBlock(self: ?*anyopaque, block: ?*anyopaque) void {
        qtc.QSyntaxHighlighter_RehighlightBlock(@ptrCast(self), @ptrCast(block));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksyntaxhighlighting::syntaxhighlighter.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, name: []const u8 ```
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
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("ksyntaxhighlighting::syntaxhighlighter.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, obj: QtC.QObject ```
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
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ksyntaxhighlighting::syntaxhighlighter.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksyntaxhighlighting::syntaxhighlighter.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#definition)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn Definition(self: ?*anyopaque) QtC.KSyntaxHighlighting__Definition {
        return qtc.KSyntaxHighlighting__AbstractHighlighter_Definition(@ptrCast(self));
    }

    /// Inherited from KSyntaxHighlighting::AbstractHighlighter
    ///
    /// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#theme)
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn Theme(self: ?*anyopaque) QtC.KSyntaxHighlighting__Theme {
        return qtc.KSyntaxHighlighting__AbstractHighlighter_Theme(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, start: i32, count: i32, format: QtC.QTextCharFormat ```
    pub fn SetFormat(self: ?*anyopaque, start: i32, count: i32, format: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetFormat(@ptrCast(self), @intCast(start), @intCast(count), @ptrCast(format));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, start: i32, count: i32, format: QtC.QTextCharFormat ```
    pub fn QBaseSetFormat(self: ?*anyopaque, start: i32, count: i32, format: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseSetFormat(@ptrCast(self), @intCast(start), @intCast(count), @ptrCast(format));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, start: i32, count: i32, format: QtC.QTextCharFormat) callconv(.c) void ```
    pub fn OnSetFormat(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetFormat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, pos: i32 ```
    pub fn Format(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_Format(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, pos: i32 ```
    pub fn QBaseFormat(self: ?*anyopaque, pos: i32) QtC.QTextCharFormat {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseFormat(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, pos: i32) callconv(.c) QtC.QTextCharFormat ```
    pub fn OnFormat(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QTextCharFormat) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnFormat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn PreviousBlockState(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn QBasePreviousBlockState(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_QBasePreviousBlockState(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) i32 ```
    pub fn OnPreviousBlockState(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnPreviousBlockState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn CurrentBlockState(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn QBaseCurrentBlockState(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseCurrentBlockState(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) i32 ```
    pub fn OnCurrentBlockState(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlockState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, newState: i32 ```
    pub fn SetCurrentBlockState(self: ?*anyopaque, newState: i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState(@ptrCast(self), @intCast(newState));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, newState: i32 ```
    pub fn QBaseSetCurrentBlockState(self: ?*anyopaque, newState: i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseSetCurrentBlockState(@ptrCast(self), @intCast(newState));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, newState: i32) callconv(.c) void ```
    pub fn OnSetCurrentBlockState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetCurrentBlockState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, data: QtC.QTextBlockUserData ```
    pub fn SetCurrentBlockUserData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData(@ptrCast(self), @ptrCast(data));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, data: QtC.QTextBlockUserData ```
    pub fn QBaseSetCurrentBlockUserData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseSetCurrentBlockUserData(@ptrCast(self), @ptrCast(data));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, data: QtC.QTextBlockUserData) callconv(.c) void ```
    pub fn OnSetCurrentBlockUserData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSetCurrentBlockUserData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn CurrentBlockUserData(self: ?*anyopaque) QtC.QTextBlockUserData {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn QBaseCurrentBlockUserData(self: ?*anyopaque) QtC.QTextBlockUserData {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseCurrentBlockUserData(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) QtC.QTextBlockUserData ```
    pub fn OnCurrentBlockUserData(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QTextBlockUserData) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlockUserData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn CurrentBlock(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_CurrentBlock(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn QBaseCurrentBlock(self: ?*anyopaque) QtC.QTextBlock {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseCurrentBlock(@ptrCast(self));
    }

    /// Inherited from QSyntaxHighlighter
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) QtC.QTextBlock ```
    pub fn OnCurrentBlock(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QTextBlock) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlock(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KSyntaxHighlighting__SyntaxHighlighter_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter, callback: *const fn (self: QtC.KSyntaxHighlighting__SyntaxHighlighter, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KSyntaxHighlighting__SyntaxHighlighter ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KSyntaxHighlighting__SyntaxHighlighter_Delete(@ptrCast(self));
    }
};
