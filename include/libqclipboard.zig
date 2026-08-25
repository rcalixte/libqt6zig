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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn metaObject(self: QClipboard) QMetaObject {
        return .{ .ptr = qtc.QClipboard_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QClipboard, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QClipboard_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QClipboard, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QClipboard_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QClipboard.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn clear(self: QClipboard) void {
        qtc.QClipboard_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportsSelection` instead
    ///
    pub const SupportsSelection = supportsSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#supportsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn supportsSelection(self: QClipboard) bool {
        return qtc.QClipboard_SupportsSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportsFindBuffer` instead
    ///
    pub const SupportsFindBuffer = supportsFindBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#supportsFindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn supportsFindBuffer(self: QClipboard) bool {
        return qtc.QClipboard_SupportsFindBuffer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ownsSelection` instead
    ///
    pub const OwnsSelection = ownsSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#ownsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn ownsSelection(self: QClipboard) bool {
        return qtc.QClipboard_OwnsSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ownsClipboard` instead
    ///
    pub const OwnsClipboard = ownsClipboard;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#ownsClipboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn ownsClipboard(self: QClipboard) bool {
        return qtc.QClipboard_OwnsClipboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ownsFindBuffer` instead
    ///
    pub const OwnsFindBuffer = ownsFindBuffer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#ownsFindBuffer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn ownsFindBuffer(self: QClipboard) bool {
        return qtc.QClipboard_OwnsFindBuffer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QClipboard, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QClipboard_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QClipboard.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `text2` instead
    ///
    pub const Text2 = text2;

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
    pub fn text2(self: QClipboard, allocator: std.mem.Allocator, subtype: []const u8) []const u8 {
        const subtype_str = qtc.libqt_string{
            .len = subtype.len,
            .data = subtype.ptr,
        };
        var _str = qtc.QClipboard_Text2(@ptrCast(self.ptr), subtype_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QClipboard.text2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn setText(self: QClipboard, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QClipboard_SetText(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `mimeData` instead
    ///
    pub const MimeData = mimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn mimeData(self: QClipboard) QMimeData {
        return .{ .ptr = qtc.QClipboard_MimeData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMimeData` instead
    ///
    pub const SetMimeData = setMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` data: QMimeData `
    ///
    pub fn setMimeData(self: QClipboard, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QMimeData;
        qtc.QClipboard_SetMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `image` instead
    ///
    pub const Image = image;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn image(self: QClipboard) QImage {
        return .{ .ptr = qtc.QClipboard_Image(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pixmap` instead
    ///
    pub const Pixmap = pixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn pixmap(self: QClipboard) QPixmap {
        return .{ .ptr = qtc.QClipboard_Pixmap(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setImage` instead
    ///
    pub const SetImage = setImage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` param1: QImage `
    ///
    pub fn setImage(self: QClipboard, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QImage;
        qtc.QClipboard_SetImage(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setPixmap` instead
    ///
    pub const SetPixmap = setPixmap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#setPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` param1: QPixmap `
    ///
    pub fn setPixmap(self: QClipboard, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPixmap;
        qtc.QClipboard_SetPixmap(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `changed` instead
    ///
    pub const Changed = changed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn changed(self: QClipboard, mode: i32) void {
        qtc.QClipboard_Changed(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onChanged` instead
    ///
    pub const OnChanged = onChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QClipboard `
    ///
    /// ` callback: *const fn (self: QClipboard, mode: qclipboard_enums.Mode) callconv(.c) void `
    ///
    pub fn onChanged(self: QClipboard, callback: *const fn (QClipboard, i32) callconv(.c) void) void {
        qtc.QClipboard_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn selectionChanged(self: QClipboard) void {
        qtc.QClipboard_SelectionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QClipboard `
    ///
    /// ` callback: *const fn (self: QClipboard) callconv(.c) void `
    ///
    pub fn onSelectionChanged(self: QClipboard, callback: *const fn (QClipboard) callconv(.c) void) void {
        qtc.QClipboard_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `findBufferChanged` instead
    ///
    pub const FindBufferChanged = findBufferChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#findBufferChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn findBufferChanged(self: QClipboard) void {
        qtc.QClipboard_FindBufferChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFindBufferChanged` instead
    ///
    pub const OnFindBufferChanged = onFindBufferChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#findBufferChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QClipboard `
    ///
    /// ` callback: *const fn (self: QClipboard) callconv(.c) void `
    ///
    pub fn onFindBufferChanged(self: QClipboard, callback: *const fn (QClipboard) callconv(.c) void) void {
        qtc.QClipboard_Connect_FindBufferChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dataChanged` instead
    ///
    pub const DataChanged = dataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    pub fn dataChanged(self: QClipboard) void {
        qtc.QClipboard_DataChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDataChanged` instead
    ///
    pub const OnDataChanged = onDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QClipboard `
    ///
    /// ` callback: *const fn (self: QClipboard) callconv(.c) void `
    ///
    pub fn onDataChanged(self: QClipboard, callback: *const fn (QClipboard) callconv(.c) void) void {
        qtc.QClipboard_Connect_DataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QClipboard.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QClipboard.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `clear1` instead
    ///
    pub const Clear1 = clear1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn clear1(self: QClipboard, mode: i32) void {
        qtc.QClipboard_Clear1(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `text1` instead
    ///
    pub const Text1 = text1;

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
    pub fn text1(self: QClipboard, allocator: std.mem.Allocator, mode: i32) []const u8 {
        var _str = qtc.QClipboard_Text1(@ptrCast(self.ptr), @bitCast(mode));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QClipboard.text1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `text22` instead
    ///
    pub const Text22 = text22;

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
    pub fn text22(self: QClipboard, allocator: std.mem.Allocator, subtype: []const u8, mode: i32) []const u8 {
        const subtype_str = qtc.libqt_string{
            .len = subtype.len,
            .data = subtype.ptr,
        };
        var _str = qtc.QClipboard_Text22(@ptrCast(self.ptr), subtype_str, @bitCast(mode));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QClipboard.text22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText2` instead
    ///
    pub const SetText2 = setText2;

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
    pub fn setText2(self: QClipboard, param1: []const u8, mode: i32) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QClipboard_SetText2(@ptrCast(self.ptr), param1_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `mimeData1` instead
    ///
    pub const MimeData1 = mimeData1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn mimeData1(self: QClipboard, mode: i32) QMimeData {
        return .{ .ptr = qtc.QClipboard_MimeData1(@ptrCast(self.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `setMimeData2` instead
    ///
    pub const SetMimeData2 = setMimeData2;

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
    pub fn setMimeData2(self: QClipboard, data: anytype, mode: i32) void {
        comptime _ = @TypeOf(data)._is_QMimeData;
        qtc.QClipboard_SetMimeData2(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `image1` instead
    ///
    pub const Image1 = image1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#image)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn image1(self: QClipboard, mode: i32) QImage {
        return .{ .ptr = qtc.QClipboard_Image1(@ptrCast(self.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `pixmap1` instead
    ///
    pub const Pixmap1 = pixmap1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#pixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QClipboard `
    ///
    /// ` mode: qclipboard_enums.Mode `
    ///
    pub fn pixmap1(self: QClipboard, mode: i32) QPixmap {
        return .{ .ptr = qtc.QClipboard_Pixmap1(@ptrCast(self.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `setImage2` instead
    ///
    pub const SetImage2 = setImage2;

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
    pub fn setImage2(self: QClipboard, param1: anytype, mode: i32) void {
        comptime _ = @TypeOf(param1)._is_QImage;
        qtc.QClipboard_SetImage2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setPixmap2` instead
    ///
    pub const SetPixmap2 = setPixmap2;

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
    pub fn setPixmap2(self: QClipboard, param1: anytype, mode: i32) void {
        comptime _ = @TypeOf(param1)._is_QPixmap;
        qtc.QClipboard_SetPixmap2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(mode));
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
    /// ` self: QClipboard `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QClipboard, _event: anytype) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QClipboard, watched: anytype, _event: anytype) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QClipboard, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QClipboard.objectName: Memory allocation failed");
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
    /// ` self: QClipboard `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QClipboard, name: []const u8) void {
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
    /// ` self: QClipboard `
    ///
    pub fn isWidgetType(self: QClipboard) bool {
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
    /// ` self: QClipboard `
    ///
    pub fn isWindowType(self: QClipboard) bool {
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
    /// ` self: QClipboard `
    ///
    pub fn isQuickItemType(self: QClipboard) bool {
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
    /// ` self: QClipboard `
    ///
    pub fn signalsBlocked(self: QClipboard) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QClipboard, b: bool) bool {
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
    /// ` self: QClipboard `
    ///
    pub fn thread(self: QClipboard) QThread {
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
    /// ` self: QClipboard `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QClipboard, _thread: anytype) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QClipboard, interval: i32) i32 {
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
    /// ` self: QClipboard `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QClipboard, time: i64) i32 {
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
    /// ` self: QClipboard `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QClipboard, id: i32) void {
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
    /// ` self: QClipboard `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QClipboard, id: i32) void {
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
    /// ` self: QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QClipboard, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QClipboard.children: Memory allocation failed");
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
    /// ` self: QClipboard `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QClipboard, _parent: anytype) void {
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
    /// ` self: QClipboard `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QClipboard, filterObj: anytype) void {
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
    /// ` self: QClipboard `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QClipboard, obj: anytype) void {
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
    /// ` self: QClipboard `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QClipboard, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QClipboard `
    ///
    pub fn disconnect3(self: QClipboard) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QClipboard, receiver: anytype) bool {
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
    /// ` self: QClipboard `
    ///
    pub fn dumpObjectTree(self: QClipboard) void {
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
    /// ` self: QClipboard `
    ///
    pub fn dumpObjectInfo(self: QClipboard) void {
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
    /// ` self: QClipboard `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QClipboard, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QClipboard, name: [:0]const u8) QVariant {
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
    /// ` self: QClipboard `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QClipboard, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QClipboard.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QClipboard.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QClipboard `
    ///
    pub fn bindingStorage(self: QClipboard) QBindingStorage {
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
    /// ` self: QClipboard `
    ///
    pub fn bindingStorage2(self: QClipboard) QBindingStorage {
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
    /// ` self: QClipboard `
    ///
    pub fn destroyed(self: QClipboard) void {
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
    /// ` self: QClipboard `
    ///
    /// ` callback: *const fn (self: QClipboard) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QClipboard, callback: *const fn (QClipboard) callconv(.c) void) void {
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
    /// ` self: QClipboard `
    ///
    pub fn parent(self: QClipboard) QObject {
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
    /// ` self: QClipboard `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QClipboard, classname: [:0]const u8) bool {
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
    /// ` self: QClipboard `
    ///
    pub fn deleteLater(self: QClipboard) void {
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
    /// ` self: QClipboard `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QClipboard, interval: i32, timerType: i32) i32 {
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
    /// ` self: QClipboard `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QClipboard, time: i64, timerType: i32) i32 {
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
    /// ` self: QClipboard `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QClipboard, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QClipboard `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QClipboard, signal: [:0]const u8) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QClipboard, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QClipboard, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QClipboard, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QClipboard `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QClipboard, param1: anytype) void {
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
    /// ` self: QClipboard `
    ///
    /// ` callback: *const fn (self: QClipboard, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QClipboard, callback: *const fn (QClipboard, QObject) callconv(.c) void) void {
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
    /// ` self: QClipboard `
    ///
    /// ` callback: *const fn (self: QClipboard, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QClipboard, callback: *const fn (QClipboard, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qclipboard.html#public-types)
pub const enums = struct {
    pub const Mode = enum {
        pub const Clipboard: i32 = 0;
        pub const Selection: i32 = 1;
        pub const FindBuffer: i32 = 2;
        pub const LastMode: i32 = 2;
    };
};
