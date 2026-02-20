const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qclipboard_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html)
pub const qclipboard = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QClipboard_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QClipboard_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QClipboard_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QClipboard `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QClipboard_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#supportsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn SupportsSelection(self: ?*anyopaque) bool {
        return qtc.QClipboard_SupportsSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#supportsFindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn SupportsFindBuffer(self: ?*anyopaque) bool {
        return qtc.QClipboard_SupportsFindBuffer(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#ownsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn OwnsSelection(self: ?*anyopaque) bool {
        return qtc.QClipboard_OwnsSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#ownsClipboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn OwnsClipboard(self: ?*anyopaque) bool {
        return qtc.QClipboard_OwnsClipboard(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#ownsFindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn OwnsFindBuffer(self: ?*anyopaque) bool {
        return qtc.QClipboard_OwnsFindBuffer(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QClipboard_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` subtype: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text2(self: ?*anyopaque, subtype: []const u8, allocator: std.mem.Allocator) []const u8 {
        const subtype_str = qtc.libqt_string{
            .len = subtype.len,
            .data = subtype.ptr,
        };
        var _str = qtc.QClipboard_Text2(@ptrCast(self), subtype_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Text2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QClipboard_SetText(@ptrCast(self), param1_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn MimeData(self: ?*anyopaque) QtC.QMimeData {
        return qtc.QClipboard_MimeData(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` data: QtC.QMimeData `
    ///
    pub fn SetMimeData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QClipboard_SetMimeData(@ptrCast(self), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn Image(self: ?*anyopaque) QtC.QImage {
        return qtc.QClipboard_Image(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn Pixmap(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QClipboard_Pixmap(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` param1: QtC.QImage `
    ///
    pub fn SetImage(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QClipboard_SetImage(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` param1: QtC.QPixmap `
    ///
    pub fn SetPixmap(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QClipboard_SetPixmap(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn Changed(self: ?*anyopaque, mode: i32) void {
        qtc.QClipboard_Changed(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` callback: *const fn (self: QtC.QClipboard, mode: qclipboard_enums.Mode) callconv(.c) void `
    ///
    pub fn OnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QClipboard_Connect_Changed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn SelectionChanged(self: ?*anyopaque) void {
        qtc.QClipboard_SelectionChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` callback: *const fn (self: QtC.QClipboard) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QClipboard_Connect_SelectionChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#findBufferChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn FindBufferChanged(self: ?*anyopaque) void {
        qtc.QClipboard_FindBufferChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#findBufferChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` callback: *const fn (self: QtC.QClipboard) callconv(.c) void `
    ///
    pub fn OnFindBufferChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QClipboard_Connect_FindBufferChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn DataChanged(self: ?*anyopaque) void {
        qtc.QClipboard_DataChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` callback: *const fn (self: QtC.QClipboard) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QClipboard_Connect_DataChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn Clear1(self: ?*anyopaque, mode: i32) void {
        qtc.QClipboard_Clear1(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text1(self: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QClipboard_Text1(@ptrCast(self), @bitCast(mode));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Text1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` subtype: []const u8 `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text22(self: ?*anyopaque, subtype: []const u8, mode: i32, allocator: std.mem.Allocator) []const u8 {
        const subtype_str = qtc.libqt_string{
            .len = subtype.len,
            .data = subtype.ptr,
        };
        var _str = qtc.QClipboard_Text22(@ptrCast(self), subtype_str, @bitCast(mode));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qclipboard.Text22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn SetText2(self: ?*anyopaque, param1: []const u8, mode: i32) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QClipboard_SetText2(@ptrCast(self), param1_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn MimeData1(self: ?*anyopaque, mode: i32) QtC.QMimeData {
        return qtc.QClipboard_MimeData1(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn SetMimeData2(self: ?*anyopaque, data: ?*anyopaque, mode: i32) void {
        qtc.QClipboard_SetMimeData2(@ptrCast(self), @ptrCast(data), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn Image1(self: ?*anyopaque, mode: i32) QtC.QImage {
        return qtc.QClipboard_Image1(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn Pixmap1(self: ?*anyopaque, mode: i32) QtC.QPixmap {
        return qtc.QClipboard_Pixmap1(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` param1: QtC.QImage `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn SetImage2(self: ?*anyopaque, param1: ?*anyopaque, mode: i32) void {
        qtc.QClipboard_SetImage2(@ptrCast(self), @ptrCast(param1), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` param1: QtC.QPixmap `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn SetPixmap2(self: ?*anyopaque, param1: ?*anyopaque, mode: i32) void {
        qtc.QClipboard_SetPixmap2(@ptrCast(self), @ptrCast(param1), @bitCast(mode));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QClipboard `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qclipboard.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QClipboard `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` callback: *const fn (self: QtC.QClipboard) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` callback: *const fn (self: QtC.QClipboard, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QClipboard `
    ///
    /// ` callback: *const fn (self: QtC.QClipboard, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
