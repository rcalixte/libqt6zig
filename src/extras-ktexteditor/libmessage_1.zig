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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTextEditor::Message object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` richtext: []const u8 `
    ///
    pub fn new(richtext: []const u8) KTextEditor__Message {
        const richtext_str = qtc.libqt_string{
            .len = richtext.len,
            .data = richtext.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Message_new(richtext_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KTextEditor::Message object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` richtext: []const u8 `
    ///
    /// ` typeVal: message_enums.MessageType `
    ///
    pub fn new2(richtext: []const u8, typeVal: i32) KTextEditor__Message {
        const richtext_str = qtc.libqt_string{
            .len = richtext.len,
            .data = richtext.ptr,
        };
        return .{ .ptr = qtc.KTextEditor__Message_new2(richtext_str, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn metaObject(self: KTextEditor__Message) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__Message_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: KTextEditor__Message, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KTextEditor__Message_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn superMetaObject(self: KTextEditor__Message) QMetaObject {
        return .{ .ptr = qtc.KTextEditor__Message_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KTextEditor__Message, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__Message_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTextEditor__Message_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KTextEditor__Message, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTextEditor__Message_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KTextEditor__Message, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__Message_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTextEditor__Message_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KTextEditor__Message, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTextEditor__Message_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Message.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: KTextEditor__Message, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTextEditor__Message_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Message.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn icon(self: KTextEditor__Message) QIcon {
        return .{ .ptr = qtc.KTextEditor__Message_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `messageType` instead
    ///
    pub const MessageType = messageType;

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
    pub fn messageType(self: KTextEditor__Message) i32 {
        return qtc.KTextEditor__Message_MessageType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: KTextEditor__Message, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KTextEditor__Message_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `actions` instead
    ///
    pub const Actions = actions;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: KTextEditor__Message, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KTextEditor__Message_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("KTextEditor__Message.actions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setAutoHide` instead
    ///
    pub const SetAutoHide = setAutoHide;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setAutoHide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn setAutoHide(self: KTextEditor__Message) void {
        qtc.KTextEditor__Message_SetAutoHide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoHide` instead
    ///
    pub const AutoHide = autoHide;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#autoHide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn autoHide(self: KTextEditor__Message) i32 {
        return qtc.KTextEditor__Message_AutoHide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoHideMode` instead
    ///
    pub const SetAutoHideMode = setAutoHideMode;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setAutoHideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` mode: message_enums.AutoHideMode `
    ///
    pub fn setAutoHideMode(self: KTextEditor__Message, mode: i32) void {
        qtc.KTextEditor__Message_SetAutoHideMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `autoHideMode` instead
    ///
    pub const AutoHideMode = autoHideMode;

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
    pub fn autoHideMode(self: KTextEditor__Message) i32 {
        return qtc.KTextEditor__Message_AutoHideMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWordWrap` instead
    ///
    pub const SetWordWrap = setWordWrap;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setWordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` _wordWrap: bool `
    ///
    pub fn setWordWrap(self: KTextEditor__Message, _wordWrap: bool) void {
        qtc.KTextEditor__Message_SetWordWrap(@ptrCast(self.ptr), _wordWrap);
    }

    /// ### DEPRECATED: Use `wordWrap` instead
    ///
    pub const WordWrap = wordWrap;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#wordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn wordWrap(self: KTextEditor__Message) bool {
        return qtc.KTextEditor__Message_WordWrap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPriority` instead
    ///
    pub const SetPriority = setPriority;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setPriority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` _priority: i32 `
    ///
    pub fn setPriority(self: KTextEditor__Message, _priority: i32) void {
        qtc.KTextEditor__Message_SetPriority(@ptrCast(self.ptr), @bitCast(_priority));
    }

    /// ### DEPRECATED: Use `priority` instead
    ///
    pub const Priority = priority;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#priority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn priority(self: KTextEditor__Message) i32 {
        return qtc.KTextEditor__Message_Priority(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setView` instead
    ///
    pub const SetView = setView;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` _view: KTextEditor__View `
    ///
    pub fn setView(self: KTextEditor__Message, _view: anytype) void {
        comptime _ = @TypeOf(_view)._is_KTextEditor__View;
        qtc.KTextEditor__Message_SetView(@ptrCast(self.ptr), @ptrCast(_view.ptr));
    }

    /// ### DEPRECATED: Use `view` instead
    ///
    pub const View = view;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn view(self: KTextEditor__Message) KTextEditor__View {
        return .{ .ptr = qtc.KTextEditor__Message_View(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDocument` instead
    ///
    pub const SetDocument = setDocument;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` _document: KTextEditor__Document `
    ///
    pub fn setDocument(self: KTextEditor__Message, _document: anytype) void {
        comptime _ = @TypeOf(_document)._is_KTextEditor__Document;
        qtc.KTextEditor__Message_SetDocument(@ptrCast(self.ptr), @ptrCast(_document.ptr));
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn document(self: KTextEditor__Message) KTextEditor__Document {
        return .{ .ptr = qtc.KTextEditor__Message_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` _position: message_enums.MessagePosition `
    ///
    pub fn setPosition(self: KTextEditor__Message, _position: i32) void {
        qtc.KTextEditor__Message_SetPosition(@ptrCast(self.ptr), @bitCast(_position));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

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
    pub fn position(self: KTextEditor__Message) i32 {
        return qtc.KTextEditor__Message_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` richtext: []const u8 `
    ///
    pub fn setText(self: KTextEditor__Message, richtext: []const u8) void {
        const richtext_str = qtc.libqt_string{
            .len = richtext.len,
            .data = richtext.ptr,
        };
        qtc.KTextEditor__Message_SetText(@ptrCast(self.ptr), richtext_str);
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: KTextEditor__Message, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.KTextEditor__Message_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `closed` instead
    ///
    pub const Closed = closed;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#closed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` message: KTextEditor__Message `
    ///
    pub fn closed(self: KTextEditor__Message, message: anytype) void {
        comptime _ = @TypeOf(message)._is_KTextEditor__Message;
        qtc.KTextEditor__Message_Closed(@ptrCast(self.ptr), @ptrCast(message.ptr));
    }

    /// ### DEPRECATED: Use `onClosed` instead
    ///
    pub const OnClosed = onClosed;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#closed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, message: KTextEditor__Message) callconv(.c) void `
    ///
    pub fn onClosed(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, KTextEditor__Message) callconv(.c) void) void {
        qtc.KTextEditor__Message_Connect_Closed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textChanged` instead
    ///
    pub const TextChanged = textChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn textChanged(self: KTextEditor__Message, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.KTextEditor__Message_TextChanged(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onTextChanged` instead
    ///
    pub const OnTextChanged = onTextChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTextChanged(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, [*:0]const u8) callconv(.c) void) void {
        qtc.KTextEditor__Message_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `iconChanged` instead
    ///
    pub const IconChanged = iconChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#iconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn iconChanged(self: KTextEditor__Message, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.KTextEditor__Message_IconChanged(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `onIconChanged` instead
    ///
    pub const OnIconChanged = onIconChanged;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#iconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, icon: QIcon) callconv(.c) void `
    ///
    pub fn onIconChanged(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QIcon) callconv(.c) void) void {
        qtc.KTextEditor__Message_Connect_IconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Message.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Message.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addAction2` instead
    ///
    pub const AddAction2 = addAction2;

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
    pub fn addAction2(self: KTextEditor__Message, action: anytype, closeOnTrigger: bool) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KTextEditor__Message_AddAction2(@ptrCast(self.ptr), @ptrCast(action.ptr), closeOnTrigger);
    }

    /// ### DEPRECATED: Use `setAutoHide1` instead
    ///
    pub const SetAutoHide1 = setAutoHide1;

    /// ### [Upstream resources](https://api.kde.org/ktexteditor-message.html#setAutoHide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTextEditor__Message `
    ///
    /// ` delay: i32 `
    ///
    pub fn setAutoHide1(self: KTextEditor__Message, delay: i32) void {
        qtc.KTextEditor__Message_SetAutoHide1(@ptrCast(self.ptr), @bitCast(delay));
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KTextEditor__Message, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTextEditor__Message.objectName: Memory allocation failed");
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KTextEditor__Message, name: []const u8) void {
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn isWidgetType(self: KTextEditor__Message) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn isWindowType(self: KTextEditor__Message) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn isQuickItemType(self: KTextEditor__Message) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn signalsBlocked(self: KTextEditor__Message) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KTextEditor__Message, b: bool) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn thread(self: KTextEditor__Message) QThread {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KTextEditor__Message, _thread: anytype) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KTextEditor__Message, interval: i32) i32 {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KTextEditor__Message, time: i64) i32 {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KTextEditor__Message, id: i32) void {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KTextEditor__Message, id: i32) void {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KTextEditor__Message, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KTextEditor__Message.children: Memory allocation failed");
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KTextEditor__Message, _parent: anytype) void {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KTextEditor__Message, filterObj: anytype) void {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KTextEditor__Message, obj: anytype) void {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KTextEditor__Message, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn disconnect3(self: KTextEditor__Message) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KTextEditor__Message, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn dumpObjectTree(self: KTextEditor__Message) void {
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn dumpObjectInfo(self: KTextEditor__Message) void {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KTextEditor__Message, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KTextEditor__Message, name: [:0]const u8) QVariant {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KTextEditor__Message, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KTextEditor__Message.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTextEditor__Message.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn bindingStorage(self: KTextEditor__Message) QBindingStorage {
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn bindingStorage2(self: KTextEditor__Message) QBindingStorage {
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn destroyed(self: KTextEditor__Message) void {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message) callconv(.c) void) void {
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn parent(self: KTextEditor__Message) QObject {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KTextEditor__Message, classname: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    pub fn deleteLater(self: KTextEditor__Message) void {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KTextEditor__Message, interval: i32, timerType: i32) i32 {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KTextEditor__Message, time: i64, timerType: i32) i32 {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KTextEditor__Message, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KTextEditor__Message, signal: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KTextEditor__Message, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KTextEditor__Message, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KTextEditor__Message, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KTextEditor__Message, param1: anytype) void {
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: KTextEditor__Message, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTextEditor__Message_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KTextEditor__Message, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTextEditor__Message_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QEvent) callconv(.c) bool) void {
        qtc.KTextEditor__Message_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KTextEditor__Message, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTextEditor__Message_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KTextEditor__Message, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTextEditor__Message_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QObject, QEvent) callconv(.c) bool) void {
        qtc.KTextEditor__Message_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KTextEditor__Message, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KTextEditor__Message_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KTextEditor__Message, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KTextEditor__Message_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QTimerEvent) callconv(.c) void) void {
        qtc.KTextEditor__Message_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KTextEditor__Message, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KTextEditor__Message_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KTextEditor__Message, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KTextEditor__Message_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QChildEvent) callconv(.c) void) void {
        qtc.KTextEditor__Message_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KTextEditor__Message, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KTextEditor__Message_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KTextEditor__Message, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KTextEditor__Message_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QEvent) callconv(.c) void) void {
        qtc.KTextEditor__Message_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: KTextEditor__Message, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Message_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: KTextEditor__Message, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Message_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QMetaMethod) callconv(.c) void) void {
        qtc.KTextEditor__Message_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: KTextEditor__Message, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Message_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: KTextEditor__Message, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTextEditor__Message_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QMetaMethod) callconv(.c) void) void {
        qtc.KTextEditor__Message_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: KTextEditor__Message) QObject {
        return .{ .ptr = qtc.KTextEditor__Message_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: KTextEditor__Message) QObject {
        return .{ .ptr = qtc.KTextEditor__Message_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: KTextEditor__Message, callback: *const fn () callconv(.c) QObject) void {
        qtc.KTextEditor__Message_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: KTextEditor__Message) i32 {
        return qtc.KTextEditor__Message_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: KTextEditor__Message) i32 {
        return qtc.KTextEditor__Message_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: KTextEditor__Message, callback: *const fn () callconv(.c) i32) void {
        qtc.KTextEditor__Message_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: KTextEditor__Message, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__Message_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: KTextEditor__Message, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTextEditor__Message_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTextEditor__Message_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: KTextEditor__Message, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTextEditor__Message_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: KTextEditor__Message, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTextEditor__Message_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, QMetaMethod) callconv(.c) bool) void {
        qtc.KTextEditor__Message_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTextEditor__Message `
    ///
    /// ` callback: *const fn (self: KTextEditor__Message, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KTextEditor__Message, callback: *const fn (KTextEditor__Message, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTextEditor__Message `
    ///
    pub fn delete(self: KTextEditor__Message) void {
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
