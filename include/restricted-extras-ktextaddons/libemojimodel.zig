const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDataStream = @import("libqt6").QDataStream;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMimeData = @import("libqt6").QMimeData;
const QModelIndex = @import("libqt6").QModelIndex;
const QModelRoleDataSpan = @import("libqt6").QModelRoleDataSpan;
const QObject = @import("libqt6").QObject;
const QPersistentModelIndex = @import("libqt6").QPersistentModelIndex;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const TextEmoticonsCore__CustomEmoji = @import("libqt6").TextEmoticonsCore__CustomEmoji;
const TextEmoticonsCore__CustomEmojiIconManager = @import("libqt6").TextEmoticonsCore__CustomEmojiIconManager;
const TextEmoticonsCore__UnicodeEmoticon = @import("libqt6").TextEmoticonsCore__UnicodeEmoticon;
const qabstractitemmodel_enums = @import("../libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_i32_QVariant = std.array_hash_map.Auto(i32, QVariant);
const Map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
pub const TextEmoticonsCore__EmojiModel = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextEmoticonsCore__EmojiModel,

    pub const _is_TextEmoticonsCore__EmojiModel = {};
    pub const _is_QAbstractListModel = {};
    pub const _is_QAbstractItemModel = {};
    pub const _is_QObject = {};

    /// New constructs a new TextEmoticonsCore::EmojiModel object.
    ///
    pub fn New() TextEmoticonsCore__EmojiModel {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_new() };
    }

    /// New2 constructs a new TextEmoticonsCore::EmojiModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) TextEmoticonsCore__EmojiModel {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn MetaObject(self: TextEmoticonsCore__EmojiModel) QMetaObject {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextEmoticonsCore__EmojiModel_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SuperMetaObject(self: TextEmoticonsCore__EmojiModel) QMetaObject {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: TextEmoticonsCore__EmojiModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextEmoticonsCore__EmojiModel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextEmoticonsCore__EmojiModel_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: TextEmoticonsCore__EmojiModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextEmoticonsCore__EmojiModel_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: TextEmoticonsCore__EmojiModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextEmoticonsCore__EmojiModel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiModel_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: TextEmoticonsCore__EmojiModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextEmoticonsCore__EmojiModel_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__emojimodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RowCount(self: TextEmoticonsCore__EmojiModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_RowCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnRowCount(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex) callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiModel_OnRowCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRowCount` instead
    ///
    pub const QBaseRowCount = SuperRowCount;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperRowCount(self: TextEmoticonsCore__EmojiModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_SuperRowCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn Data(self: TextEmoticonsCore__EmojiModel, index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_Data(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(role)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, index: QModelIndex, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnData(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32) callconv(.c) QVariant) void {
        qtc.TextEmoticonsCore__EmojiModel_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperData` instead
    ///
    pub const QBaseData = SuperData;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperData(self: TextEmoticonsCore__EmojiModel, index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_SuperData(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(role)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EmoticonList(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator) []TextEmoticonsCore__UnicodeEmoticon {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiModel_EmoticonList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(TextEmoticonsCore__UnicodeEmoticon, _arr.len) catch @panic("textemoticonscore__emojimodel.EmoticonList: Memory allocation failed");
        const _data: [*]QtC.TextEmoticonsCore__UnicodeEmoticon = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` newEmoticonList: []TextEmoticonsCore__UnicodeEmoticon `
    ///
    pub fn SetUnicodeEmoticonList(self: TextEmoticonsCore__EmojiModel, newEmoticonList: []TextEmoticonsCore__UnicodeEmoticon) void {
        const newEmoticonList_list = qtc.libqt_list{
            .len = newEmoticonList.len,
            .data = @ptrCast(newEmoticonList.ptr),
        };
        qtc.TextEmoticonsCore__EmojiModel_SetUnicodeEmoticonList(@ptrCast(self.ptr), newEmoticonList_list);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CustomEmojiList(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator) []TextEmoticonsCore__CustomEmoji {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiModel_CustomEmojiList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(TextEmoticonsCore__CustomEmoji, _arr.len) catch @panic("textemoticonscore__emojimodel.CustomEmojiList: Memory allocation failed");
        const _data: [*]QtC.TextEmoticonsCore__CustomEmoji = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` newCustomEmojiList: []TextEmoticonsCore__CustomEmoji `
    ///
    pub fn SetCustomEmojiList(self: TextEmoticonsCore__EmojiModel, newCustomEmojiList: []TextEmoticonsCore__CustomEmoji) void {
        const newCustomEmojiList_list = qtc.libqt_list{
            .len = newCustomEmojiList.len,
            .data = @ptrCast(newCustomEmojiList.ptr),
        };
        qtc.TextEmoticonsCore__EmojiModel_SetCustomEmojiList(@ptrCast(self.ptr), newCustomEmojiList_list);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn CustomEmojiIconManager(self: TextEmoticonsCore__EmojiModel) TextEmoticonsCore__CustomEmojiIconManager {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_CustomEmojiIconManager(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` newCustomEmojiIconManager: TextEmoticonsCore__CustomEmojiIconManager `
    ///
    pub fn SetCustomEmojiIconManager(self: TextEmoticonsCore__EmojiModel, newCustomEmojiIconManager: anytype) void {
        comptime _ = @TypeOf(newCustomEmojiIconManager)._is_TextEmoticonsCore__CustomEmojiIconManager;
        qtc.TextEmoticonsCore__EmojiModel_SetCustomEmojiIconManager(@ptrCast(self.ptr), @ptrCast(newCustomEmojiIconManager.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` emoticons: []const []const u8 `
    ///
    pub fn SetExcludeEmoticons(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator, emoticons: []const []const u8) void {
        const emoticons_arr = allocator.alloc(qtc.libqt_string, emoticons.len) catch @panic("textemoticonscore__emojimodel.SetExcludeEmoticons: Memory allocation failed");
        defer allocator.free(emoticons_arr);
        for (emoticons, 0..emoticons.len) |item, i|
            emoticons_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const emoticons_list = qtc.libqt_list{
            .len = emoticons.len,
            .data = emoticons_arr.ptr,
        };
        qtc.TextEmoticonsCore__EmojiModel_SetExcludeEmoticons(@ptrCast(self.ptr), emoticons_list);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__emojimodel.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__emojimodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn HasIndex(self: TextEmoticonsCore__EmojiModel, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn Parent(self: TextEmoticonsCore__EmojiModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemModel_Parent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, child: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnParent(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QAbstractItemModel_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParent` instead
    ///
    pub const QBaseParent = SuperParent;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn SuperParent(self: TextEmoticonsCore__EmojiModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemModel_SuperParent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn ColumnCount(self: TextEmoticonsCore__EmojiModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_ColumnCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnColumnCount(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex) callconv(.c) i32) void {
        qtc.QAbstractItemModel_OnColumnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperColumnCount` instead
    ///
    pub const QBaseColumnCount = SuperColumnCount;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperColumnCount(self: TextEmoticonsCore__EmojiModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_SuperColumnCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn HasChildren(self: TextEmoticonsCore__EmojiModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_HasChildren(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnHasChildren(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnHasChildren(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasChildren` instead
    ///
    pub const QBaseHasChildren = SuperHasChildren;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperHasChildren(self: TextEmoticonsCore__EmojiModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_SuperHasChildren(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    pub fn InsertRow(self: TextEmoticonsCore__EmojiModel, row: i32) bool {
        return qtc.QAbstractItemModel_InsertRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` column: i32 `
    ///
    pub fn InsertColumn(self: TextEmoticonsCore__EmojiModel, column: i32) bool {
        return qtc.QAbstractItemModel_InsertColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    pub fn RemoveRow(self: TextEmoticonsCore__EmojiModel, row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` column: i32 `
    ///
    pub fn RemoveColumn(self: TextEmoticonsCore__EmojiModel, column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveRow(self: TextEmoticonsCore__EmojiModel, sourceParent: anytype, sourceRow: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractItemModel_MoveRow(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveColumn(self: TextEmoticonsCore__EmojiModel, sourceParent: anytype, sourceColumn: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractItemModel_MoveColumn(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn CheckIndex(self: TextEmoticonsCore__EmojiModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    pub fn DataChanged(self: TextEmoticonsCore__EmojiModel, topLeft: anytype, bottomRight: anytype) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        qtc.QAbstractItemModel_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, topLeft: QModelIndex, bottomRight: QModelIndex) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn HeaderDataChanged(self: TextEmoticonsCore__EmojiModel, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(orientation), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnHeaderDataChanged(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn LayoutChanged(self: TextEmoticonsCore__EmojiModel) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel) callconv(.c) void `
    ///
    pub fn OnLayoutChanged(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn LayoutAboutToBeChanged(self: TextEmoticonsCore__EmojiModel) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn HasIndex3(self: TextEmoticonsCore__EmojiModel, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertRow2(self: TextEmoticonsCore__EmojiModel, row: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_InsertRow2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertColumn2(self: TextEmoticonsCore__EmojiModel, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_InsertColumn2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveRow2(self: TextEmoticonsCore__EmojiModel, row: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveColumn2(self: TextEmoticonsCore__EmojiModel, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` options: flag of qabstractitemmodel_enums.CheckIndexOption `
    ///
    pub fn CheckIndex2(self: TextEmoticonsCore__EmojiModel, index: anytype, options: i32) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(options));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn DataChanged3(self: TextEmoticonsCore__EmojiModel, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QAbstractItemModel_DataChanged3(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn OnDataChanged3(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn LayoutChanged1(self: TextEmoticonsCore__EmojiModel, parents: []QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged1(@ptrCast(self.ptr), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn OnLayoutChanged1(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn LayoutChanged2(self: TextEmoticonsCore__EmojiModel, parents: []QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged2(@ptrCast(self.ptr), parents_list, @bitCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn OnLayoutChanged2(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn LayoutAboutToBeChanged1(self: TextEmoticonsCore__EmojiModel, parents: []QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged1(@ptrCast(self.ptr), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged1(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn LayoutAboutToBeChanged2(self: TextEmoticonsCore__EmojiModel, parents: []QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged2(@ptrCast(self.ptr), parents_list, @bitCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged2(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textemoticonscore__emojimodel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: TextEmoticonsCore__EmojiModel, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn IsWidgetType(self: TextEmoticonsCore__EmojiModel) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn IsWindowType(self: TextEmoticonsCore__EmojiModel) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn IsQuickItemType(self: TextEmoticonsCore__EmojiModel) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SignalsBlocked(self: TextEmoticonsCore__EmojiModel) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: TextEmoticonsCore__EmojiModel, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn Thread(self: TextEmoticonsCore__EmojiModel) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: TextEmoticonsCore__EmojiModel, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: TextEmoticonsCore__EmojiModel, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: TextEmoticonsCore__EmojiModel, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: TextEmoticonsCore__EmojiModel, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: TextEmoticonsCore__EmojiModel, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("textemoticonscore__emojimodel.Children: Memory allocation failed");
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: TextEmoticonsCore__EmojiModel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: TextEmoticonsCore__EmojiModel, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: TextEmoticonsCore__EmojiModel, obj: anytype) void {
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: TextEmoticonsCore__EmojiModel, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn Disconnect3(self: TextEmoticonsCore__EmojiModel) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: TextEmoticonsCore__EmojiModel, receiver: anytype) bool {
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn DumpObjectTree(self: TextEmoticonsCore__EmojiModel) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn DumpObjectInfo(self: TextEmoticonsCore__EmojiModel) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: TextEmoticonsCore__EmojiModel, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: TextEmoticonsCore__EmojiModel, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("textemoticonscore__emojimodel.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textemoticonscore__emojimodel.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn BindingStorage(self: TextEmoticonsCore__EmojiModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn BindingStorage2(self: TextEmoticonsCore__EmojiModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn Destroyed(self: TextEmoticonsCore__EmojiModel) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: TextEmoticonsCore__EmojiModel, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn DeleteLater(self: TextEmoticonsCore__EmojiModel) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: TextEmoticonsCore__EmojiModel, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: TextEmoticonsCore__EmojiModel, time: i64, timerType: i32) i32 {
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: TextEmoticonsCore__EmojiModel, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: TextEmoticonsCore__EmojiModel, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: TextEmoticonsCore__EmojiModel, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: TextEmoticonsCore__EmojiModel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: TextEmoticonsCore__EmojiModel, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: TextEmoticonsCore__EmojiModel, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn Index(self: TextEmoticonsCore__EmojiModel, row: i32, column: i32, parent: anytype) QModelIndex {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_Index(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperIndex` instead
    ///
    pub const QBaseIndex = SuperIndex;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperIndex(self: TextEmoticonsCore__EmojiModel, row: i32, column: i32, parent: anytype) QModelIndex {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_SuperIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr)) };
    }

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, row: i32, column: i32, parent: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnIndex(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.TextEmoticonsCore__EmojiModel_OnIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn Sibling(self: TextEmoticonsCore__EmojiModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_Sibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSibling` instead
    ///
    pub const QBaseSibling = SuperSibling;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn SuperSibling(self: TextEmoticonsCore__EmojiModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_SuperSibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, row: i32, column: i32, idx: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnSibling(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.TextEmoticonsCore__EmojiModel_OnSibling(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn DropMimeData(self: TextEmoticonsCore__EmojiModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_DropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropMimeData` instead
    ///
    pub const QBaseDropMimeData = SuperDropMimeData;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperDropMimeData(self: TextEmoticonsCore__EmojiModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_SuperDropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnDropMimeData(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn Flags(self: TextEmoticonsCore__EmojiModel, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_Flags(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperFlags` instead
    ///
    pub const QBaseFlags = SuperFlags;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn SuperFlags(self: TextEmoticonsCore__EmojiModel, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_SuperFlags(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, index: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnFlags(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex) callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiModel_OnFlags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetData(self: TextEmoticonsCore__EmojiModel, index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.TextEmoticonsCore__EmojiModel_SetData(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `SuperSetData` instead
    ///
    pub const QBaseSetData = SuperSetData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperSetData(self: TextEmoticonsCore__EmojiModel, index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.TextEmoticonsCore__EmojiModel_SuperSetData(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, index: QModelIndex, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn OnSetData(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, QVariant, i32) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn HeaderData(self: TextEmoticonsCore__EmojiModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_HeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `SuperHeaderData` instead
    ///
    pub const QBaseHeaderData = SuperHeaderData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperHeaderData(self: TextEmoticonsCore__EmojiModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_SuperHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnHeaderData(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, i32, i32, i32) callconv(.c) QVariant) void {
        qtc.TextEmoticonsCore__EmojiModel_OnHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetHeaderData(self: TextEmoticonsCore__EmojiModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.TextEmoticonsCore__EmojiModel_SetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `SuperSetHeaderData` instead
    ///
    pub const QBaseSetHeaderData = SuperSetHeaderData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperSetHeaderData(self: TextEmoticonsCore__EmojiModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.TextEmoticonsCore__EmojiModel_SuperSetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, section: i32, orientation: qnamespace_enums.Orientation, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn OnSetHeaderData(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, i32, i32, QVariant, i32) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnSetHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ItemData(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator, index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.TextEmoticonsCore__EmojiModel_ItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, _map.len) catch @panic("textemoticonscore__emojimodel.ItemData: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperItemData` instead
    ///
    pub const QBaseItemData = SuperItemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperItemData(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator, index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.TextEmoticonsCore__EmojiModel_SuperItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, _map.len) catch @panic("textemoticonscore__emojimodel.ItemData: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, index: QModelIndex) callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_QVariant `
    ///
    pub fn OnItemData(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex) callconv(.c) qtc.libqt_map) void {
        qtc.TextEmoticonsCore__EmojiModel_OnItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn SetItemData(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator, index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("textemoticonscore__emojimodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("textemoticonscore__emojimodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |it_entry| : (i += 1) {
            const roles_key = it_entry.key_ptr.*;
            roles_keys[i] = @bitCast(roles_key);
            roles_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const roles_map = qtc.libqt_map{
            .len = roles_count,
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.TextEmoticonsCore__EmojiModel_SetItemData(@ptrCast(self.ptr), @ptrCast(index.ptr), roles_map);
    }

    /// ### DEPRECATED: Use `SuperSetItemData` instead
    ///
    pub const QBaseSetItemData = SuperSetItemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn SuperSetItemData(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator, index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("textemoticonscore__emojimodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("textemoticonscore__emojimodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |it_entry| : (i += 1) {
            const roles_key = it_entry.key_ptr.*;
            roles_keys[i] = @bitCast(roles_key);
            roles_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const roles_map = qtc.libqt_map{
            .len = roles_count,
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.TextEmoticonsCore__EmojiModel_SuperSetItemData(@ptrCast(self.ptr), @ptrCast(index.ptr), roles_map);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, index: QModelIndex, roles: qtc.libqt_map (ArrayMap_i32_QVariant)) callconv(.c) bool `
    ///
    pub fn OnSetItemData(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, qtc.libqt_map) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnSetItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ClearItemData(self: TextEmoticonsCore__EmojiModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_ClearItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperClearItemData` instead
    ///
    pub const QBaseClearItemData = SuperClearItemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperClearItemData(self: TextEmoticonsCore__EmojiModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_SuperClearItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnClearItemData(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnClearItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypes(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiModel_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textemoticonscore__emojimodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textemoticonscore__emojimodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperMimeTypes` instead
    ///
    pub const QBaseMimeTypes = SuperMimeTypes;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperMimeTypes(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiModel_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textemoticonscore__emojimodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textemoticonscore__emojimodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnMimeTypes(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.TextEmoticonsCore__EmojiModel_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn MimeData(self: TextEmoticonsCore__EmojiModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_MimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `SuperMimeData` instead
    ///
    pub const QBaseMimeData = SuperMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn SuperMimeData(self: TextEmoticonsCore__EmojiModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_SuperMimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, indexes: qtc.libqt_list ([]QModelIndex)) callconv(.c) QMimeData `
    ///
    pub fn OnMimeData(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.TextEmoticonsCore__EmojiModel_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn CanDropMimeData(self: TextEmoticonsCore__EmojiModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_CanDropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperCanDropMimeData` instead
    ///
    pub const QBaseCanDropMimeData = SuperCanDropMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperCanDropMimeData(self: TextEmoticonsCore__EmojiModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_SuperCanDropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnCanDropMimeData(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnCanDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDropActions(self: TextEmoticonsCore__EmojiModel) i32 {
        return qtc.TextEmoticonsCore__EmojiModel_SupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSupportedDropActions` instead
    ///
    pub const QBaseSupportedDropActions = SuperSupportedDropActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperSupportedDropActions(self: TextEmoticonsCore__EmojiModel) i32 {
        return qtc.TextEmoticonsCore__EmojiModel_SuperSupportedDropActions(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDropActions(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiModel_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDragActions(self: TextEmoticonsCore__EmojiModel) i32 {
        return qtc.TextEmoticonsCore__EmojiModel_SupportedDragActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSupportedDragActions` instead
    ///
    pub const QBaseSupportedDragActions = SuperSupportedDragActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperSupportedDragActions(self: TextEmoticonsCore__EmojiModel) i32 {
        return qtc.TextEmoticonsCore__EmojiModel_SuperSupportedDragActions(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDragActions(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiModel_OnSupportedDragActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertRows(self: TextEmoticonsCore__EmojiModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_InsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperInsertRows` instead
    ///
    pub const QBaseInsertRows = SuperInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperInsertRows(self: TextEmoticonsCore__EmojiModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_SuperInsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnInsertRows(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertColumns(self: TextEmoticonsCore__EmojiModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_InsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperInsertColumns` instead
    ///
    pub const QBaseInsertColumns = SuperInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperInsertColumns(self: TextEmoticonsCore__EmojiModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_SuperInsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnInsertColumns(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveRows(self: TextEmoticonsCore__EmojiModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_RemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperRemoveRows` instead
    ///
    pub const QBaseRemoveRows = SuperRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperRemoveRows(self: TextEmoticonsCore__EmojiModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_SuperRemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnRemoveRows(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveColumns(self: TextEmoticonsCore__EmojiModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_RemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperRemoveColumns` instead
    ///
    pub const QBaseRemoveColumns = SuperRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperRemoveColumns(self: TextEmoticonsCore__EmojiModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_SuperRemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnRemoveColumns(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveRows(self: TextEmoticonsCore__EmojiModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_MoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `SuperMoveRows` instead
    ///
    pub const QBaseMoveRows = SuperMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn SuperMoveRows(self: TextEmoticonsCore__EmojiModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_SuperMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, sourceParent: QModelIndex, sourceRow: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn OnMoveRows(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveColumns(self: TextEmoticonsCore__EmojiModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_MoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `SuperMoveColumns` instead
    ///
    pub const QBaseMoveColumns = SuperMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn SuperMoveColumns(self: TextEmoticonsCore__EmojiModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_SuperMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, sourceParent: QModelIndex, sourceColumn: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn OnMoveColumns(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn FetchMore(self: TextEmoticonsCore__EmojiModel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiModel_FetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperFetchMore` instead
    ///
    pub const QBaseFetchMore = SuperFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperFetchMore(self: TextEmoticonsCore__EmojiModel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiModel_SuperFetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex) callconv(.c) void `
    ///
    pub fn OnFetchMore(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn CanFetchMore(self: TextEmoticonsCore__EmojiModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_CanFetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperCanFetchMore` instead
    ///
    pub const QBaseCanFetchMore = SuperCanFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperCanFetchMore(self: TextEmoticonsCore__EmojiModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_SuperCanFetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnCanFetchMore(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnCanFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn Sort(self: TextEmoticonsCore__EmojiModel, column: i32, order: i32) void {
        qtc.TextEmoticonsCore__EmojiModel_Sort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `SuperSort` instead
    ///
    pub const QBaseSort = SuperSort;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SuperSort(self: TextEmoticonsCore__EmojiModel, column: i32, order: i32) void {
        qtc.TextEmoticonsCore__EmojiModel_SuperSort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn OnSort(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, i32, i32) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnSort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Buddy(self: TextEmoticonsCore__EmojiModel, index: anytype) QModelIndex {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_Buddy(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperBuddy` instead
    ///
    pub const QBaseBuddy = SuperBuddy;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperBuddy(self: TextEmoticonsCore__EmojiModel, index: anytype) QModelIndex {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_SuperBuddy(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, index: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnBuddy(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.TextEmoticonsCore__EmojiModel_OnBuddy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` start: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QVariant `
    ///
    /// ` hits: i32 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn Match(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiModel_Match(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("textemoticonscore__emojimodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperMatch` instead
    ///
    pub const QBaseMatch = SuperMatch;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` start: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QVariant `
    ///
    /// ` hits: i32 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn SuperMatch(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiModel_SuperMatch(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("textemoticonscore__emojimodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, start: QModelIndex, role: i32, value: QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn OnMatch(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, QVariant, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.TextEmoticonsCore__EmojiModel_OnMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Span(self: TextEmoticonsCore__EmojiModel, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_Span(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSpan` instead
    ///
    pub const QBaseSpan = SuperSpan;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSpan(self: TextEmoticonsCore__EmojiModel, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_SuperSpan(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, index: QModelIndex) callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnSpan(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex) callconv(.c) QSize) void {
        qtc.TextEmoticonsCore__EmojiModel_OnSpan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RoleNames(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.TextEmoticonsCore__EmojiModel_RoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, _map.len) catch @panic("textemoticonscore__emojimodel.RoleNames: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("textemoticonscore__emojimodel.RoleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperRoleNames` instead
    ///
    pub const QBaseRoleNames = SuperRoleNames;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperRoleNames(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.TextEmoticonsCore__EmojiModel_SuperRoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, _map.len) catch @panic("textemoticonscore__emojimodel.RoleNames: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("textemoticonscore__emojimodel.RoleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of Map_i32_u8 `
    ///
    pub fn OnRoleNames(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.TextEmoticonsCore__EmojiModel_OnRoleNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn MultiData(self: TextEmoticonsCore__EmojiModel, index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.TextEmoticonsCore__EmojiModel_MultiData(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// ### DEPRECATED: Use `SuperMultiData` instead
    ///
    pub const QBaseMultiData = SuperMultiData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn SuperMultiData(self: TextEmoticonsCore__EmojiModel, index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.TextEmoticonsCore__EmojiModel_SuperMultiData(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, index: QModelIndex, roleDataSpan: QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn OnMultiData(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, QModelRoleDataSpan) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnMultiData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn Submit(self: TextEmoticonsCore__EmojiModel) bool {
        return qtc.TextEmoticonsCore__EmojiModel_Submit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSubmit` instead
    ///
    pub const QBaseSubmit = SuperSubmit;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SuperSubmit(self: TextEmoticonsCore__EmojiModel) bool {
        return qtc.TextEmoticonsCore__EmojiModel_SuperSubmit(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnSubmit(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnSubmit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn Revert(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_Revert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperRevert` instead
    ///
    pub const QBaseRevert = SuperRevert;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SuperRevert(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_SuperRevert(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRevert(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnRevert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn ResetInternalData(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_ResetInternalData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperResetInternalData` instead
    ///
    pub const QBaseResetInternalData = SuperResetInternalData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SuperResetInternalData(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_SuperResetInternalData(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResetInternalData(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnResetInternalData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: TextEmoticonsCore__EmojiModel, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEmoticonsCore__EmojiModel_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: TextEmoticonsCore__EmojiModel, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEmoticonsCore__EmojiModel_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QEvent) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: TextEmoticonsCore__EmojiModel, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEmoticonsCore__EmojiModel_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: TextEmoticonsCore__EmojiModel, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextEmoticonsCore__EmojiModel_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: TextEmoticonsCore__EmojiModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextEmoticonsCore__EmojiModel_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: TextEmoticonsCore__EmojiModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextEmoticonsCore__EmojiModel_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QTimerEvent) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: TextEmoticonsCore__EmojiModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextEmoticonsCore__EmojiModel_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: TextEmoticonsCore__EmojiModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextEmoticonsCore__EmojiModel_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QChildEvent) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: TextEmoticonsCore__EmojiModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextEmoticonsCore__EmojiModel_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: TextEmoticonsCore__EmojiModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextEmoticonsCore__EmojiModel_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QEvent) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: TextEmoticonsCore__EmojiModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsCore__EmojiModel_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: TextEmoticonsCore__EmojiModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsCore__EmojiModel_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QMetaMethod) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: TextEmoticonsCore__EmojiModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsCore__EmojiModel_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: TextEmoticonsCore__EmojiModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsCore__EmojiModel_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QMetaMethod) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CreateIndex(self: TextEmoticonsCore__EmojiModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_CreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `SuperCreateIndex` instead
    ///
    pub const QBaseCreateIndex = SuperCreateIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperCreateIndex(self: TextEmoticonsCore__EmojiModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_SuperCreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, row: i32, column: i32) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnCreateIndex(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, i32, i32) callconv(.c) QModelIndex) void {
        qtc.TextEmoticonsCore__EmojiModel_OnCreateIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn EncodeData(self: TextEmoticonsCore__EmojiModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.TextEmoticonsCore__EmojiModel_EncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `SuperEncodeData` instead
    ///
    pub const QBaseEncodeData = SuperEncodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn SuperEncodeData(self: TextEmoticonsCore__EmojiModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.TextEmoticonsCore__EmojiModel_SuperEncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, indexes: qtc.libqt_list ([]QModelIndex), stream: QDataStream) callconv(.c) void `
    ///
    pub fn OnEncodeData(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, qtc.libqt_list, QDataStream) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnEncodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn DecodeData(self: TextEmoticonsCore__EmojiModel, row: i32, column: i32, parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.TextEmoticonsCore__EmojiModel_DecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr), @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `SuperDecodeData` instead
    ///
    pub const QBaseDecodeData = SuperDecodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn SuperDecodeData(self: TextEmoticonsCore__EmojiModel, row: i32, column: i32, parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.TextEmoticonsCore__EmojiModel_SuperDecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr), @ptrCast(stream.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, row: i32, column: i32, parent: QModelIndex, stream: QDataStream) callconv(.c) bool `
    ///
    pub fn OnDecodeData(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, i32, i32, QModelIndex, QDataStream) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnDecodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginInsertRows(self: TextEmoticonsCore__EmojiModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiModel_BeginInsertRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginInsertRows` instead
    ///
    pub const QBaseBeginInsertRows = SuperBeginInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginInsertRows(self: TextEmoticonsCore__EmojiModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiModel_SuperBeginInsertRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginInsertRows(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnBeginInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn EndInsertRows(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_EndInsertRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndInsertRows` instead
    ///
    pub const QBaseEndInsertRows = SuperEndInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SuperEndInsertRows(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_SuperEndInsertRows(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndInsertRows(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnEndInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginRemoveRows(self: TextEmoticonsCore__EmojiModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiModel_BeginRemoveRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginRemoveRows` instead
    ///
    pub const QBaseBeginRemoveRows = SuperBeginRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginRemoveRows(self: TextEmoticonsCore__EmojiModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiModel_SuperBeginRemoveRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginRemoveRows(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnBeginRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn EndRemoveRows(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_EndRemoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndRemoveRows` instead
    ///
    pub const QBaseEndRemoveRows = SuperEndRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SuperEndRemoveRows(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_SuperEndRemoveRows(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndRemoveRows(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnEndRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationRow: i32 `
    ///
    pub fn BeginMoveRows(self: TextEmoticonsCore__EmojiModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_BeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
    }

    /// ### DEPRECATED: Use `SuperBeginMoveRows` instead
    ///
    pub const QBaseBeginMoveRows = SuperBeginMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationRow: i32 `
    ///
    pub fn SuperBeginMoveRows(self: TextEmoticonsCore__EmojiModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_SuperBeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) bool `
    ///
    pub fn OnBeginMoveRows(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnBeginMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn EndMoveRows(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_EndMoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndMoveRows` instead
    ///
    pub const QBaseEndMoveRows = SuperEndMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SuperEndMoveRows(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_SuperEndMoveRows(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndMoveRows(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnEndMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginInsertColumns(self: TextEmoticonsCore__EmojiModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiModel_BeginInsertColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginInsertColumns` instead
    ///
    pub const QBaseBeginInsertColumns = SuperBeginInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginInsertColumns(self: TextEmoticonsCore__EmojiModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiModel_SuperBeginInsertColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginInsertColumns(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnBeginInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn EndInsertColumns(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_EndInsertColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndInsertColumns` instead
    ///
    pub const QBaseEndInsertColumns = SuperEndInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SuperEndInsertColumns(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_SuperEndInsertColumns(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndInsertColumns(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnEndInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginRemoveColumns(self: TextEmoticonsCore__EmojiModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiModel_BeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginRemoveColumns` instead
    ///
    pub const QBaseBeginRemoveColumns = SuperBeginRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginRemoveColumns(self: TextEmoticonsCore__EmojiModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiModel_SuperBeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginRemoveColumns(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnBeginRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn EndRemoveColumns(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_EndRemoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndRemoveColumns` instead
    ///
    pub const QBaseEndRemoveColumns = SuperEndRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SuperEndRemoveColumns(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_SuperEndRemoveColumns(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndRemoveColumns(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnEndRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationColumn: i32 `
    ///
    pub fn BeginMoveColumns(self: TextEmoticonsCore__EmojiModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_BeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
    }

    /// ### DEPRECATED: Use `SuperBeginMoveColumns` instead
    ///
    pub const QBaseBeginMoveColumns = SuperBeginMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationColumn: i32 `
    ///
    pub fn SuperBeginMoveColumns(self: TextEmoticonsCore__EmojiModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiModel_SuperBeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) bool `
    ///
    pub fn OnBeginMoveColumns(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnBeginMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn EndMoveColumns(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_EndMoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndMoveColumns` instead
    ///
    pub const QBaseEndMoveColumns = SuperEndMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SuperEndMoveColumns(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_SuperEndMoveColumns(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndMoveColumns(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnEndMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn BeginResetModel(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_BeginResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperBeginResetModel` instead
    ///
    pub const QBaseBeginResetModel = SuperBeginResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SuperBeginResetModel(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_SuperBeginResetModel(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnBeginResetModel(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnBeginResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn EndResetModel(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_EndResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndResetModel` instead
    ///
    pub const QBaseEndResetModel = SuperEndResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SuperEndResetModel(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_SuperEndResetModel(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndResetModel(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnEndResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn ChangePersistentIndex(self: TextEmoticonsCore__EmojiModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiModel_ChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangePersistentIndex` instead
    ///
    pub const QBaseChangePersistentIndex = SuperChangePersistentIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn SuperChangePersistentIndex(self: TextEmoticonsCore__EmojiModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiModel_SuperChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, from: QModelIndex, to: QModelIndex) callconv(.c) void `
    ///
    pub fn OnChangePersistentIndex(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnChangePersistentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn ChangePersistentIndexList(self: TextEmoticonsCore__EmojiModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.TextEmoticonsCore__EmojiModel_ChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
    }

    /// ### DEPRECATED: Use `SuperChangePersistentIndexList` instead
    ///
    pub const QBaseChangePersistentIndexList = SuperChangePersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn SuperChangePersistentIndexList(self: TextEmoticonsCore__EmojiModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.TextEmoticonsCore__EmojiModel_SuperChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, from: qtc.libqt_list ([]QModelIndex), to: qtc.libqt_list ([]QModelIndex)) callconv(.c) void `
    ///
    pub fn OnChangePersistentIndexList(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, qtc.libqt_list, qtc.libqt_list) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiModel_OnChangePersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PersistentIndexList(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiModel_PersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("textemoticonscore__emojimodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperPersistentIndexList` instead
    ///
    pub const QBasePersistentIndexList = SuperPersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperPersistentIndexList(self: TextEmoticonsCore__EmojiModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiModel_SuperPersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("textemoticonscore__emojimodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn OnPersistentIndexList(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.TextEmoticonsCore__EmojiModel_OnPersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn Sender(self: TextEmoticonsCore__EmojiModel) QObject {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SuperSender(self: TextEmoticonsCore__EmojiModel) QObject {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiModel_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextEmoticonsCore__EmojiModel_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SenderSignalIndex(self: TextEmoticonsCore__EmojiModel) i32 {
        return qtc.TextEmoticonsCore__EmojiModel_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn SuperSenderSignalIndex(self: TextEmoticonsCore__EmojiModel) i32 {
        return qtc.TextEmoticonsCore__EmojiModel_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: TextEmoticonsCore__EmojiModel, callback: *const fn () callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiModel_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: TextEmoticonsCore__EmojiModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextEmoticonsCore__EmojiModel_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: TextEmoticonsCore__EmojiModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextEmoticonsCore__EmojiModel_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiModel_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: TextEmoticonsCore__EmojiModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextEmoticonsCore__EmojiModel_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: TextEmoticonsCore__EmojiModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextEmoticonsCore__EmojiModel_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QMetaMethod) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiModel_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeInserted(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsInserted(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeRemoved(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsRemoved(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeInserted(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsInserted(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeRemoved(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsRemoved(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel) callconv(.c) void `
    ///
    pub fn OnModelAboutToBeReset(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelAboutToBeReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel) callconv(.c) void `
    ///
    pub fn OnModelReset(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeMoved(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn OnRowsMoved(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeMoved(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn OnColumnsMoved(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: TextEmoticonsCore__EmojiModel, callback: *const fn (TextEmoticonsCore__EmojiModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiModel.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEmoticonsCore__EmojiModel `
    ///
    pub fn Delete(self: TextEmoticonsCore__EmojiModel) void {
        qtc.TextEmoticonsCore__EmojiModel_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const EmoticonsRoles = enum(i32) {
        pub const UnicodeEmoji: i32 = 257;
        pub const Identifier: i32 = 258;
        pub const Category: i32 = 259;
        pub const Order: i32 = 260;
        pub const Animated: i32 = 261;
        pub const AnimatedFileName: i32 = 262;
    };
};
