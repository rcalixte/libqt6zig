const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KTextEditor__Document = @import("libqt6").KTextEditor__Document;
const KTextEditor__View = @import("libqt6").KTextEditor__View;
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QIcon = @import("libqt6").QIcon;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const message_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html)
pub const KTextEditor__Message = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTextEditor__Message,

    pub const _is_KTextEditor__Message = {};
    pub const _is_QObject = {};

    /// New constructs a new KTextEditor::Message object.
    ///
    /// ## Parameter(s):
    ///
    /// ` richtext: []const u8 `
    ///
    pub fn New(richtext: []const u8) KTextEditor__Message {
        const richtext_str = qtc.libqt_string{
            .len = richtext.len,
            .data = richtext.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Message_new(richtext_str) };
    }

    /// New2 constructs a new KTextEditor::Message object.
    ///
    /// ## Parameter(s):
    ///
    /// ` richtext: []const u8 `
    ///
    /// ` typeVal: message_enums.MessageType `
    ///
    pub fn New2(richtext: []const u8, typeVal: i32) KTextEditor__Message {
        const richtext_str = qtc.libqt_string{
            .len = richtext.len,
            .data = richtext.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Message_new2(richtext_str, @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn MetaObject(self: KTextEditor__Message) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__Message_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KTextEditor__Message, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KTextEditor__Message_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn SuperMetaObject(self: KTextEditor__Message) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__Message_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KTextEditor__Message, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__Message_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTextEditor__Message_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KTextEditor__Message, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__Message_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KTextEditor__Message, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__Message_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTextEditor__Message_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KTextEditor__Message, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__Message_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__message.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KTextEditor__Message, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Message_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__message.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn Icon(self: KTextEditor__Message) QIcon {
        return .{ .ptr = qtc.KTextEditor__Message_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#messageType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ## Returns:
    ///
    /// ` message_enums.MessageType `
    ///
    pub fn MessageType(self: KTextEditor__Message) i32 {
        return qtc.KTextEditor__Message_MessageType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KTextEditor__Message, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KTextEditor__Message_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KTextEditor__Message, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Message_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("ktexteditor__message.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setAutoHide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn SetAutoHide(self: KTextEditor__Message) void {
        qtc.KTextEditor__Message_SetAutoHide(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#autoHide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn AutoHide(self: KTextEditor__Message) i32 {
        return qtc.KTextEditor__Message_AutoHide(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setAutoHideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` mode: message_enums.AutoHideMode `
    ///
    pub fn SetAutoHideMode(self: KTextEditor__Message, mode: i32) void {
        qtc.KTextEditor__Message_SetAutoHideMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#autoHideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ## Returns:
    ///
    /// ` message_enums.AutoHideMode `
    ///
    pub fn AutoHideMode(self: KTextEditor__Message) i32 {
        return qtc.KTextEditor__Message_AutoHideMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setWordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` wordWrap: bool `
    ///
    pub fn SetWordWrap(self: KTextEditor__Message, wordWrap: bool) void {
        qtc.KTextEditor__Message_SetWordWrap(@ptrCast(self.ptr), wordWrap);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#wordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn WordWrap(self: KTextEditor__Message) bool {
        return qtc.KTextEditor__Message_WordWrap(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setPriority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` priority: i32 `
    ///
    pub fn SetPriority(self: KTextEditor__Message, priority: i32) void {
        qtc.KTextEditor__Message_SetPriority(@ptrCast(self.ptr), @bitCast(priority));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#priority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn Priority(self: KTextEditor__Message) i32 {
        return qtc.KTextEditor__Message_Priority(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` view: KTextEditor__View `
    ///
    pub fn SetView(self: KTextEditor__Message, view: anytype) void {
        comptime _ = @TypeOf(view)._is_KTextEditor__View;
        qtc.KTextEditor__Message_SetView(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn View(self: KTextEditor__Message) KTextEditor__View {
        return .{ .ptr = qtc.KTextEditor__Message_View(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` document: KTextEditor__Document `
    ///
    pub fn SetDocument(self: KTextEditor__Message, document: anytype) void {
        comptime _ = @TypeOf(document)._is_KTextEditor__Document;
        qtc.KTextEditor__Message_SetDocument(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn Document(self: KTextEditor__Message) KTextEditor__Document {
        return .{ .ptr = qtc.KTextEditor__Message_Document(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` position: message_enums.MessagePosition `
    ///
    pub fn SetPosition(self: KTextEditor__Message, position: i32) void {
        qtc.KTextEditor__Message_SetPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ## Returns:
    ///
    /// ` message_enums.MessagePosition `
    ///
    pub fn Position(self: KTextEditor__Message) i32 {
        return qtc.KTextEditor__Message_Position(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` richtext: []const u8 `
    ///
    pub fn SetText(self: KTextEditor__Message, richtext: []const u8) void {
        const richtext_str = qtc.libqt_string{
            .len = richtext.len,
            .data = richtext.ptr,
        };
        qtc.KTextEditor__Message_SetText(@ptrCast(self.ptr), richtext_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: KTextEditor__Message, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.KTextEditor__Message_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#closed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` message: KTextEditor__Message `
    ///
    pub fn Closed(self: KTextEditor__Message, message: anytype) void {
        comptime _ = @TypeOf(message)._is_KTextEditor__Message;
        qtc.KTextEditor__Message_Closed(@ptrCast(self.ptr), @ptrCast(message.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#closed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, message: KTextEditor__Message) callconv(.c) void `
    ///
    pub fn OnClosed(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, KTextEditor__Message) callconv(.c) void) void {
        qtc.KTextEditor__Message_Connect_Closed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` text: []const u8 `
    ///
    pub fn TextChanged(self: KTextEditor__Message, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KTextEditor__Message_TextChanged(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextChanged(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEditor__Message_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#iconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` icon: QIcon `
    ///
    pub fn IconChanged(self: KTextEditor__Message, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.KTextEditor__Message_IconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#iconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnIconChanged(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QIcon) callconv(.c) void) void {
        qtc.KTextEditor__Message_Connect_IconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__message.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__message.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` action: QAction `
    ///
    /// ` closeOnTrigger: bool `
    ///
    pub fn AddAction2(self: KTextEditor__Message, action: anytype, closeOnTrigger: bool) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KTextEditor__Message_AddAction2(@ptrCast(self.ptr), @ptrCast(action.ptr), closeOnTrigger);
    }

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setAutoHide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` delay: i32 `
    ///
    pub fn SetAutoHide1(self: KTextEditor__Message, delay: i32) void {
        qtc.KTextEditor__Message_SetAutoHide1(@ptrCast(self.ptr), @bitCast(delay));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KTextEditor__Message, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktexteditor__message.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KTextEditor__Message, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn IsWidgetType(self: KTextEditor__Message) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn IsWindowType(self: KTextEditor__Message) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn IsQuickItemType(self: KTextEditor__Message) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn SignalsBlocked(self: KTextEditor__Message) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KTextEditor__Message, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn Thread(self: KTextEditor__Message) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KTextEditor__Message, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KTextEditor__Message, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KTextEditor__Message, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KTextEditor__Message, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KTextEditor__Message, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KTextEditor__Message, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ktexteditor__message.Children: Memory allocation failed");
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KTextEditor__Message, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KTextEditor__Message, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KTextEditor__Message, obj: anytype) void {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KTextEditor__Message, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn Disconnect3(self: KTextEditor__Message) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KTextEditor__Message, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn DumpObjectTree(self: KTextEditor__Message) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn DumpObjectInfo(self: KTextEditor__Message) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KTextEditor__Message, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KTextEditor__Message, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KTextEditor__Message, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktexteditor__message.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktexteditor__message.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn BindingStorage(self: KTextEditor__Message) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn BindingStorage2(self: KTextEditor__Message) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn Destroyed(self: KTextEditor__Message) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn Parent(self: KTextEditor__Message) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KTextEditor__Message, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn DeleteLater(self: KTextEditor__Message) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KTextEditor__Message, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KTextEditor__Message, time: i64, timerType: i32) i32 {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KTextEditor__Message, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KTextEditor__Message, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KTextEditor__Message, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KTextEditor__Message, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KTextEditor__Message, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KTextEditor__Message, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KTextEditor__Message, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__Message_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KTextEditor__Message, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__Message_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message`
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QEvent) callconv(.c) bool) void {
        qtc.KTextEditor__Message_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KTextEditor__Message, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__Message_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KTextEditor__Message, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTextEditor__Message_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message`
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QObject, QEvent) callconv(.c) bool) void {
        qtc.KTextEditor__Message_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KTextEditor__Message, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KTextEditor__Message_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KTextEditor__Message, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KTextEditor__Message_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message`
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QTimerEvent) callconv(.c) void) void {
        qtc.KTextEditor__Message_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KTextEditor__Message, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTextEditor__Message_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KTextEditor__Message, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTextEditor__Message_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message`
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QChildEvent) callconv(.c) void) void {
        qtc.KTextEditor__Message_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KTextEditor__Message, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTextEditor__Message_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KTextEditor__Message, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTextEditor__Message_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message`
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QEvent) callconv(.c) void) void {
        qtc.KTextEditor__Message_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KTextEditor__Message, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Message_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KTextEditor__Message, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Message_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message`
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QMetaMethod) callconv(.c) void) void {
        qtc.KTextEditor__Message_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KTextEditor__Message, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Message_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KTextEditor__Message, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Message_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message`
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QMetaMethod) callconv(.c) void) void {
        qtc.KTextEditor__Message_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn Sender(self: KTextEditor__Message) QObject {
        return .{ .ptr = qtc.KTextEditor__Message_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn SuperSender(self: KTextEditor__Message) QObject {
        return .{ .ptr = qtc.KTextEditor__Message_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KTextEditor__Message, callback: *const fn () callconv(.c) QObject) void {
        qtc.KTextEditor__Message_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn SenderSignalIndex(self: KTextEditor__Message) i32 {
        return qtc.KTextEditor__Message_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn SuperSenderSignalIndex(self: KTextEditor__Message) i32 {
        return qtc.KTextEditor__Message_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KTextEditor__Message, callback: *const fn () callconv(.c) i32) void {
        qtc.KTextEditor__Message_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KTextEditor__Message, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__Message_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KTextEditor__Message, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__Message_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message`
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTextEditor__Message_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KTextEditor__Message, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTextEditor__Message_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KTextEditor__Message, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTextEditor__Message_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message`
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QMetaMethod) callconv(.c) bool) void {
        qtc.KTextEditor__Message_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn Delete(self: KTextEditor__Message) void {
        qtc.KTextEditor__Message_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/message.html#public-types)
pub const enums = struct {
    pub const MessageType = enum(i32) {
        pub const Positive: i32 = 0;
        pub const Information: i32 = 1;
        pub const Warning: i32 = 2;
        pub const Error: i32 = 3;
    };

    pub const MessagePosition = enum(i32) {
        pub const AboveView: i32 = 0;
        pub const BelowView: i32 = 1;
        pub const TopInView: i32 = 2;
        pub const BottomInView: i32 = 3;
        pub const CenterInView: i32 = 4;
    };

    pub const AutoHideMode = enum(i32) {
        pub const Immediate: i32 = 0;
        pub const AfterUserInteraction: i32 = 1;
    };
};
