const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QImage = @import("libqt6").QImage;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMimeData = @import("libqt6").QMimeData;
const QObject = @import("libqt6").QObject;
const QPixmap = @import("libqt6").QPixmap;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qclipboard_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html)
pub const QClipboard = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QClipboard,

    pub const _is_QClipboard = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn MetaObject(self: QClipboard) QMetaObject {
        return .{ .ptr = qtc.QClipboard_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QClipboard, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QClipboard_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QClipboard, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QClipboard_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn Clear(self: QClipboard) void {
        qtc.QClipboard_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#supportsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn SupportsSelection(self: QClipboard) bool {
        return qtc.QClipboard_SupportsSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#supportsFindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn SupportsFindBuffer(self: QClipboard) bool {
        return qtc.QClipboard_SupportsFindBuffer(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#ownsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn OwnsSelection(self: QClipboard) bool {
        return qtc.QClipboard_OwnsSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#ownsClipboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn OwnsClipboard(self: QClipboard) bool {
        return qtc.QClipboard_OwnsClipboard(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#ownsFindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn OwnsFindBuffer(self: QClipboard) bool {
        return qtc.QClipboard_OwnsFindBuffer(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QClipboard, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QClipboard_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` subtype: []const u8 `
    ///
    pub fn Text2(self: QClipboard, allocator: std.mem.Allocator, subtype: []const u8) []const u8 {
        const subtype_str = qtc.libqt_string{
            .len = subtype.len,
            .data = subtype.ptr,
        };
        var _str = qtc.QClipboard_Text2(@ptrCast(self.ptr), subtype_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Text2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SetText(self: QClipboard, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QClipboard_SetText(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn MimeData(self: QClipboard) QMimeData {
        return .{ .ptr = qtc.QClipboard_MimeData(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` data: QMimeData `
    ///
    pub fn SetMimeData(self: QClipboard, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QMimeData;
        qtc.QClipboard_SetMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn Image(self: QClipboard) QImage {
        return .{ .ptr = qtc.QClipboard_Image(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn Pixmap(self: QClipboard) QPixmap {
        return .{ .ptr = qtc.QClipboard_Pixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` param1: QImage `
    ///
    pub fn SetImage(self: QClipboard, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QImage;
        qtc.QClipboard_SetImage(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` param1: QPixmap `
    ///
    pub fn SetPixmap(self: QClipboard, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPixmap;
        qtc.QClipboard_SetPixmap(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn Changed(self: QClipboard, mode: i32) void {
        qtc.QClipboard_Changed(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QClipboard `
    ///
    /// ` callback: *const fn (self: QClipboard, mode: qclipboard_enums.Mode) callconv(.c) void `
    ///
    pub fn OnChanged(self: QClipboard, callback: *const fn (QClipboard, i32) callconv(.c) void) void {
        qtc.QClipboard_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn SelectionChanged(self: QClipboard) void {
        qtc.QClipboard_SelectionChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QClipboard `
    ///
    /// ` callback: *const fn (self: QClipboard) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: QClipboard, callback: *const fn (QClipboard) callconv(.c) void) void {
        qtc.QClipboard_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#findBufferChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn FindBufferChanged(self: QClipboard) void {
        qtc.QClipboard_FindBufferChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#findBufferChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QClipboard `
    ///
    /// ` callback: *const fn (self: QClipboard) callconv(.c) void `
    ///
    pub fn OnFindBufferChanged(self: QClipboard, callback: *const fn (QClipboard) callconv(.c) void) void {
        qtc.QClipboard_Connect_FindBufferChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn DataChanged(self: QClipboard) void {
        qtc.QClipboard_DataChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QClipboard `
    ///
    /// ` callback: *const fn (self: QClipboard) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: QClipboard, callback: *const fn (QClipboard) callconv(.c) void) void {
        qtc.QClipboard_Connect_DataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn Clear1(self: QClipboard, mode: i32) void {
        qtc.QClipboard_Clear1(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn Text1(self: QClipboard, allocator: std.mem.Allocator, mode: i32) []const u8 {
        var _str = qtc.QClipboard_Text1(@ptrCast(self.ptr), @bitCast(mode));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Text1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` subtype: []const u8 `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn Text22(self: QClipboard, allocator: std.mem.Allocator, subtype: []const u8, mode: i32) []const u8 {
        const subtype_str = qtc.libqt_string{
            .len = subtype.len,
            .data = subtype.ptr,
        };
        var _str = qtc.QClipboard_Text22(@ptrCast(self.ptr), subtype_str, @bitCast(mode));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Text22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn SetText2(self: QClipboard, param1: []const u8, mode: i32) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QClipboard_SetText2(@ptrCast(self.ptr), param1_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn MimeData1(self: QClipboard, mode: i32) QMimeData {
        return .{ .ptr = qtc.QClipboard_MimeData1(@ptrCast(self.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` data: QMimeData `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn SetMimeData2(self: QClipboard, data: anytype, mode: i32) void {
        comptime _ = @TypeOf(data)._is_QMimeData;
        qtc.QClipboard_SetMimeData2(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn Image1(self: QClipboard, mode: i32) QImage {
        return .{ .ptr = qtc.QClipboard_Image1(@ptrCast(self.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn Pixmap1(self: QClipboard, mode: i32) QPixmap {
        return .{ .ptr = qtc.QClipboard_Pixmap1(@ptrCast(self.ptr), @bitCast(mode)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` param1: QImage `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn SetImage2(self: QClipboard, param1: anytype, mode: i32) void {
        comptime _ = @TypeOf(param1)._is_QImage;
        qtc.QClipboard_SetImage2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` param1: QPixmap `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn SetPixmap2(self: QClipboard, param1: anytype, mode: i32) void {
        comptime _ = @TypeOf(param1)._is_QPixmap;
        qtc.QClipboard_SetPixmap2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(mode));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QClipboard, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QClipboard, watched: anytype, event: anytype) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QClipboard, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QClipboard, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn IsWidgetType(self: QClipboard) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn IsWindowType(self: QClipboard) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn IsQuickItemType(self: QClipboard) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn SignalsBlocked(self: QClipboard) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QClipboard, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn Thread(self: QClipboard) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QClipboard, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QClipboard, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QClipboard, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QClipboard, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QClipboard, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QClipboard, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qclipboard.Children: Memory allocation failed");
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
    /// ` self: QClipboard `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QClipboard, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QClipboard, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QClipboard, obj: anytype) void {
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
    /// ` self: QClipboard `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QClipboard, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QClipboard `
    ///
    pub fn Disconnect3(self: QClipboard) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QClipboard, receiver: anytype) bool {
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
    /// ` self: QClipboard `
    ///
    pub fn DumpObjectTree(self: QClipboard) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn DumpObjectInfo(self: QClipboard) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QClipboard, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QClipboard, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QClipboard, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qclipboard.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qclipboard.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QClipboard `
    ///
    pub fn BindingStorage(self: QClipboard) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn BindingStorage2(self: QClipboard) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn Destroyed(self: QClipboard) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QClipboard `
    ///
    /// ` callback: *const fn (self: QClipboard) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QClipboard, callback: *const fn (QClipboard) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn Parent(self: QClipboard) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QClipboard, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn DeleteLater(self: QClipboard) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QClipboard, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QClipboard, time: i64, timerType: i32) i32 {
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
    /// ` self: QClipboard `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QClipboard, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QClipboard `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QClipboard, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QClipboard, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QClipboard, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QClipboard, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QClipboard, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QClipboard `
    ///
    /// ` callback: *const fn (self: QClipboard, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QClipboard, callback: *const fn (QClipboard, QObject) callconv(.c) void) void {
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
    /// ` self: QClipboard `
    ///
    /// ` callback: *const fn (self: QClipboard, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QClipboard, callback: *const fn (QClipboard, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#public-types)
pub const enums = struct {
    pub const Mode = enum(i32) {
        pub const Clipboard: i32 = 0;
        pub const Selection: i32 = 1;
        pub const FindBuffer: i32 = 2;
        pub const LastMode: i32 = 2;
    };
};
