const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDataStream = @import("libqt6").QDataStream;
const QEvent = @import("libqt6").QEvent;
const QItemSelection = @import("libqt6").QItemSelection;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMimeData = @import("libqt6").QMimeData;
const QModelIndex = @import("libqt6").QModelIndex;
const QModelRoleDataSpan = @import("libqt6").QModelRoleDataSpan;
const QObject = @import("libqt6").QObject;
const QPersistentModelIndex = @import("libqt6").QPersistentModelIndex;
const QRegularExpression = @import("libqt6").QRegularExpression;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractitemmodel_enums = @import("../libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_i32_QVariant = std.array_hash_map.Auto(i32, QVariant);
const Map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
pub const TextEmoticonsCore__EmojiProxyModel = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextEmoticonsCore__EmojiProxyModel,

    pub const _is_TextEmoticonsCore__EmojiProxyModel = {};
    pub const _is_QSortFilterProxyModel = {};
    pub const _is_QAbstractProxyModel = {};
    pub const _is_QAbstractItemModel = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextEmoticonsCore::EmojiProxyModel object in C++ memory
    ///
    pub fn new() TextEmoticonsCore__EmojiProxyModel {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new TextEmoticonsCore::EmojiProxyModel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) TextEmoticonsCore__EmojiProxyModel {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn metaObject(self: TextEmoticonsCore__EmojiProxyModel) QMetaObject {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superMetaObject(self: TextEmoticonsCore__EmojiProxyModel) QMetaObject {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: TextEmoticonsCore__EmojiProxyModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextEmoticonsCore__EmojiProxyModel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: TextEmoticonsCore__EmojiProxyModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: TextEmoticonsCore__EmojiProxyModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextEmoticonsCore__EmojiProxyModel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: TextEmoticonsCore__EmojiProxyModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn category(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__EmojiProxyModel_Category(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCategory` instead
    ///
    pub const SetCategory = setCategory;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` newCategories: []const u8 `
    ///
    pub fn setCategory(self: TextEmoticonsCore__EmojiProxyModel, newCategories: []const u8) void {
        const newCategories_str = qtc.libqt_string{
            .len = newCategories.len,
            .data = newCategories.ptr,
        };
        qtc.TextEmoticonsCore__EmojiProxyModel_SetCategory(@ptrCast(self.ptr), newCategories_str);
    }

    /// ### DEPRECATED: Use `recentEmoticons` instead
    ///
    pub const RecentEmoticons = recentEmoticons;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn recentEmoticons(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiProxyModel_RecentEmoticons(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.recentEmoticons: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.recentEmoticons: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setRecentEmoticons` instead
    ///
    pub const SetRecentEmoticons = setRecentEmoticons;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` newRecentEmoticons: []const []const u8 `
    ///
    pub fn setRecentEmoticons(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator, newRecentEmoticons: []const []const u8) void {
        const newRecentEmoticons_arr = allocator.alloc(qtc.libqt_string, newRecentEmoticons.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.setRecentEmoticons: Memory allocation failed");
        defer allocator.free(newRecentEmoticons_arr);
        for (newRecentEmoticons, 0..newRecentEmoticons.len) |str_item, i|
            newRecentEmoticons_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const newRecentEmoticons_list = qtc.libqt_list{
            .len = newRecentEmoticons.len,
            .data = newRecentEmoticons_arr.ptr,
        };
        qtc.TextEmoticonsCore__EmojiProxyModel_SetRecentEmoticons(@ptrCast(self.ptr), newRecentEmoticons_list);
    }

    /// ### DEPRECATED: Use `searchIdentifier` instead
    ///
    pub const SearchIdentifier = searchIdentifier;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn searchIdentifier(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextEmoticonsCore__EmojiProxyModel_SearchIdentifier(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.searchIdentifier: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSearchIdentifier` instead
    ///
    pub const SetSearchIdentifier = setSearchIdentifier;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` newSearchIdentifier: []const u8 `
    ///
    pub fn setSearchIdentifier(self: TextEmoticonsCore__EmojiProxyModel, newSearchIdentifier: []const u8) void {
        const newSearchIdentifier_str = qtc.libqt_string{
            .len = newSearchIdentifier.len,
            .data = newSearchIdentifier.ptr,
        };
        qtc.TextEmoticonsCore__EmojiProxyModel_SetSearchIdentifier(@ptrCast(self.ptr), newSearchIdentifier_str);
    }

    /// ### DEPRECATED: Use `filterAcceptsRow` instead
    ///
    pub const FilterAcceptsRow = filterAcceptsRow;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` source_row: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn filterAcceptsRow(self: TextEmoticonsCore__EmojiProxyModel, source_row: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_FilterAcceptsRow(@ptrCast(self.ptr), @bitCast(source_row), @ptrCast(source_parent.ptr));
    }

    /// ### DEPRECATED: Use `onFilterAcceptsRow` instead
    ///
    pub const OnFilterAcceptsRow = onFilterAcceptsRow;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, source_row: i32, source_parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onFilterAcceptsRow(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnFilterAcceptsRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFilterAcceptsRow` instead
    ///
    pub const SuperFilterAcceptsRow = superFilterAcceptsRow;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` source_row: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn superFilterAcceptsRow(self: TextEmoticonsCore__EmojiProxyModel, source_row: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperFilterAcceptsRow(@ptrCast(self.ptr), @bitCast(source_row), @ptrCast(source_parent.ptr));
    }

    /// ### DEPRECATED: Use `lessThan` instead
    ///
    pub const LessThan = lessThan;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` left: QModelIndex `
    ///
    /// ` right: QModelIndex `
    ///
    pub fn lessThan(self: TextEmoticonsCore__EmojiProxyModel, left: anytype, right: anytype) bool {
        comptime _ = @TypeOf(left)._is_QModelIndex;
        comptime _ = @TypeOf(right)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_LessThan(@ptrCast(self.ptr), @ptrCast(left.ptr), @ptrCast(right.ptr));
    }

    /// ### DEPRECATED: Use `onLessThan` instead
    ///
    pub const OnLessThan = onLessThan;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, left: QModelIndex, right: QModelIndex) callconv(.c) bool `
    ///
    pub fn onLessThan(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnLessThan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLessThan` instead
    ///
    pub const SuperLessThan = superLessThan;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` left: QModelIndex `
    ///
    /// ` right: QModelIndex `
    ///
    pub fn superLessThan(self: TextEmoticonsCore__EmojiProxyModel, left: anytype, right: anytype) bool {
        comptime _ = @TypeOf(left)._is_QModelIndex;
        comptime _ = @TypeOf(right)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperLessThan(@ptrCast(self.ptr), @ptrCast(left.ptr), @ptrCast(right.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `filterRegularExpression` instead
    ///
    pub const FilterRegularExpression = filterRegularExpression;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn filterRegularExpression(self: TextEmoticonsCore__EmojiProxyModel) QRegularExpression {
        return .{ .ptr = qtc.QSortFilterProxyModel_FilterRegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `filterKeyColumn` instead
    ///
    pub const FilterKeyColumn = filterKeyColumn;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterKeyColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn filterKeyColumn(self: TextEmoticonsCore__EmojiProxyModel) i32 {
        return qtc.QSortFilterProxyModel_FilterKeyColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFilterKeyColumn` instead
    ///
    pub const SetFilterKeyColumn = setFilterKeyColumn;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterKeyColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn setFilterKeyColumn(self: TextEmoticonsCore__EmojiProxyModel, column: i32) void {
        qtc.QSortFilterProxyModel_SetFilterKeyColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `filterCaseSensitivity` instead
    ///
    pub const FilterCaseSensitivity = filterCaseSensitivity;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn filterCaseSensitivity(self: TextEmoticonsCore__EmojiProxyModel) i32 {
        return qtc.QSortFilterProxyModel_FilterCaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFilterCaseSensitivity` instead
    ///
    pub const SetFilterCaseSensitivity = setFilterCaseSensitivity;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn setFilterCaseSensitivity(self: TextEmoticonsCore__EmojiProxyModel, cs: i32) void {
        qtc.QSortFilterProxyModel_SetFilterCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// ### DEPRECATED: Use `sortCaseSensitivity` instead
    ///
    pub const SortCaseSensitivity = sortCaseSensitivity;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn sortCaseSensitivity(self: TextEmoticonsCore__EmojiProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SortCaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortCaseSensitivity` instead
    ///
    pub const SetSortCaseSensitivity = setSortCaseSensitivity;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn setSortCaseSensitivity(self: TextEmoticonsCore__EmojiProxyModel, cs: i32) void {
        qtc.QSortFilterProxyModel_SetSortCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// ### DEPRECATED: Use `isSortLocaleAware` instead
    ///
    pub const IsSortLocaleAware = isSortLocaleAware;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isSortLocaleAware)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn isSortLocaleAware(self: TextEmoticonsCore__EmojiProxyModel) bool {
        return qtc.QSortFilterProxyModel_IsSortLocaleAware(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortLocaleAware` instead
    ///
    pub const SetSortLocaleAware = setSortLocaleAware;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortLocaleAware)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` on: bool `
    ///
    pub fn setSortLocaleAware(self: TextEmoticonsCore__EmojiProxyModel, on: bool) void {
        qtc.QSortFilterProxyModel_SetSortLocaleAware(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `sortColumn` instead
    ///
    pub const SortColumn = sortColumn;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn sortColumn(self: TextEmoticonsCore__EmojiProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SortColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sortOrder` instead
    ///
    pub const SortOrder = sortOrder;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.SortOrder `
    ///
    pub fn sortOrder(self: TextEmoticonsCore__EmojiProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SortOrder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dynamicSortFilter` instead
    ///
    pub const DynamicSortFilter = dynamicSortFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn dynamicSortFilter(self: TextEmoticonsCore__EmojiProxyModel) bool {
        return qtc.QSortFilterProxyModel_DynamicSortFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDynamicSortFilter` instead
    ///
    pub const SetDynamicSortFilter = setDynamicSortFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setDynamicSortFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` enable: bool `
    ///
    pub fn setDynamicSortFilter(self: TextEmoticonsCore__EmojiProxyModel, enable: bool) void {
        qtc.QSortFilterProxyModel_SetDynamicSortFilter(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `sortRole` instead
    ///
    pub const SortRole = sortRole;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn sortRole(self: TextEmoticonsCore__EmojiProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SortRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortRole` instead
    ///
    pub const SetSortRole = setSortRole;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` role: i32 `
    ///
    pub fn setSortRole(self: TextEmoticonsCore__EmojiProxyModel, role: i32) void {
        qtc.QSortFilterProxyModel_SetSortRole(@ptrCast(self.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `filterRole` instead
    ///
    pub const FilterRole = filterRole;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn filterRole(self: TextEmoticonsCore__EmojiProxyModel) i32 {
        return qtc.QSortFilterProxyModel_FilterRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFilterRole` instead
    ///
    pub const SetFilterRole = setFilterRole;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` role: i32 `
    ///
    pub fn setFilterRole(self: TextEmoticonsCore__EmojiProxyModel, role: i32) void {
        qtc.QSortFilterProxyModel_SetFilterRole(@ptrCast(self.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `isRecursiveFilteringEnabled` instead
    ///
    pub const IsRecursiveFilteringEnabled = isRecursiveFilteringEnabled;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isRecursiveFilteringEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn isRecursiveFilteringEnabled(self: TextEmoticonsCore__EmojiProxyModel) bool {
        return qtc.QSortFilterProxyModel_IsRecursiveFilteringEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRecursiveFilteringEnabled` instead
    ///
    pub const SetRecursiveFilteringEnabled = setRecursiveFilteringEnabled;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setRecursiveFilteringEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` recursive: bool `
    ///
    pub fn setRecursiveFilteringEnabled(self: TextEmoticonsCore__EmojiProxyModel, recursive: bool) void {
        qtc.QSortFilterProxyModel_SetRecursiveFilteringEnabled(@ptrCast(self.ptr), recursive);
    }

    /// ### DEPRECATED: Use `autoAcceptChildRows` instead
    ///
    pub const AutoAcceptChildRows = autoAcceptChildRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn autoAcceptChildRows(self: TextEmoticonsCore__EmojiProxyModel) bool {
        return qtc.QSortFilterProxyModel_AutoAcceptChildRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoAcceptChildRows` instead
    ///
    pub const SetAutoAcceptChildRows = setAutoAcceptChildRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setAutoAcceptChildRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` accept: bool `
    ///
    pub fn setAutoAcceptChildRows(self: TextEmoticonsCore__EmojiProxyModel, accept: bool) void {
        qtc.QSortFilterProxyModel_SetAutoAcceptChildRows(@ptrCast(self.ptr), accept);
    }

    /// ### DEPRECATED: Use `setFilterRegularExpression` instead
    ///
    pub const SetFilterRegularExpression = setFilterRegularExpression;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn setFilterRegularExpression(self: TextEmoticonsCore__EmojiProxyModel, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterRegularExpression(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `setFilterRegularExpression2` instead
    ///
    pub const SetFilterRegularExpression2 = setFilterRegularExpression2;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` regularExpression: QRegularExpression `
    ///
    pub fn setFilterRegularExpression2(self: TextEmoticonsCore__EmojiProxyModel, regularExpression: anytype) void {
        comptime _ = @TypeOf(regularExpression)._is_QRegularExpression;
        qtc.QSortFilterProxyModel_SetFilterRegularExpression2(@ptrCast(self.ptr), @ptrCast(regularExpression.ptr));
    }

    /// ### DEPRECATED: Use `setFilterWildcard` instead
    ///
    pub const SetFilterWildcard = setFilterWildcard;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterWildcard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn setFilterWildcard(self: TextEmoticonsCore__EmojiProxyModel, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterWildcard(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `setFilterFixedString` instead
    ///
    pub const SetFilterFixedString = setFilterFixedString;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterFixedString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn setFilterFixedString(self: TextEmoticonsCore__EmojiProxyModel, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterFixedString(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn invalidate(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.QSortFilterProxyModel_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dynamicSortFilterChanged` instead
    ///
    pub const DynamicSortFilterChanged = dynamicSortFilterChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _dynamicSortFilter: bool `
    ///
    pub fn dynamicSortFilterChanged(self: TextEmoticonsCore__EmojiProxyModel, _dynamicSortFilter: bool) void {
        qtc.QSortFilterProxyModel_DynamicSortFilterChanged(@ptrCast(self.ptr), _dynamicSortFilter);
    }

    /// ### DEPRECATED: Use `onDynamicSortFilterChanged` instead
    ///
    pub const OnDynamicSortFilterChanged = onDynamicSortFilterChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, dynamicSortFilter: bool) callconv(.c) void `
    ///
    pub fn onDynamicSortFilterChanged(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_DynamicSortFilterChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `filterCaseSensitivityChanged` instead
    ///
    pub const FilterCaseSensitivityChanged = filterCaseSensitivityChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _filterCaseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn filterCaseSensitivityChanged(self: TextEmoticonsCore__EmojiProxyModel, _filterCaseSensitivity: i32) void {
        qtc.QSortFilterProxyModel_FilterCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(_filterCaseSensitivity));
    }

    /// ### DEPRECATED: Use `onFilterCaseSensitivityChanged` instead
    ///
    pub const OnFilterCaseSensitivityChanged = onFilterCaseSensitivityChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, filterCaseSensitivity: qnamespace_enums.CaseSensitivity) callconv(.c) void `
    ///
    pub fn onFilterCaseSensitivityChanged(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sortCaseSensitivityChanged` instead
    ///
    pub const SortCaseSensitivityChanged = sortCaseSensitivityChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _sortCaseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn sortCaseSensitivityChanged(self: TextEmoticonsCore__EmojiProxyModel, _sortCaseSensitivity: i32) void {
        qtc.QSortFilterProxyModel_SortCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(_sortCaseSensitivity));
    }

    /// ### DEPRECATED: Use `onSortCaseSensitivityChanged` instead
    ///
    pub const OnSortCaseSensitivityChanged = onSortCaseSensitivityChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, sortCaseSensitivity: qnamespace_enums.CaseSensitivity) callconv(.c) void `
    ///
    pub fn onSortCaseSensitivityChanged(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sortLocaleAwareChanged` instead
    ///
    pub const SortLocaleAwareChanged = sortLocaleAwareChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` sortLocaleAware: bool `
    ///
    pub fn sortLocaleAwareChanged(self: TextEmoticonsCore__EmojiProxyModel, sortLocaleAware: bool) void {
        qtc.QSortFilterProxyModel_SortLocaleAwareChanged(@ptrCast(self.ptr), sortLocaleAware);
    }

    /// ### DEPRECATED: Use `onSortLocaleAwareChanged` instead
    ///
    pub const OnSortLocaleAwareChanged = onSortLocaleAwareChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, sortLocaleAware: bool) callconv(.c) void `
    ///
    pub fn onSortLocaleAwareChanged(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortLocaleAwareChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sortRoleChanged` instead
    ///
    pub const SortRoleChanged = sortRoleChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _sortRole: i32 `
    ///
    pub fn sortRoleChanged(self: TextEmoticonsCore__EmojiProxyModel, _sortRole: i32) void {
        qtc.QSortFilterProxyModel_SortRoleChanged(@ptrCast(self.ptr), @bitCast(_sortRole));
    }

    /// ### DEPRECATED: Use `onSortRoleChanged` instead
    ///
    pub const OnSortRoleChanged = onSortRoleChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, sortRole: i32) callconv(.c) void `
    ///
    pub fn onSortRoleChanged(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `filterRoleChanged` instead
    ///
    pub const FilterRoleChanged = filterRoleChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _filterRole: i32 `
    ///
    pub fn filterRoleChanged(self: TextEmoticonsCore__EmojiProxyModel, _filterRole: i32) void {
        qtc.QSortFilterProxyModel_FilterRoleChanged(@ptrCast(self.ptr), @bitCast(_filterRole));
    }

    /// ### DEPRECATED: Use `onFilterRoleChanged` instead
    ///
    pub const OnFilterRoleChanged = onFilterRoleChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, filterRole: i32) callconv(.c) void `
    ///
    pub fn onFilterRoleChanged(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_FilterRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `recursiveFilteringEnabledChanged` instead
    ///
    pub const RecursiveFilteringEnabledChanged = recursiveFilteringEnabledChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` recursiveFilteringEnabled: bool `
    ///
    pub fn recursiveFilteringEnabledChanged(self: TextEmoticonsCore__EmojiProxyModel, recursiveFilteringEnabled: bool) void {
        qtc.QSortFilterProxyModel_RecursiveFilteringEnabledChanged(@ptrCast(self.ptr), recursiveFilteringEnabled);
    }

    /// ### DEPRECATED: Use `onRecursiveFilteringEnabledChanged` instead
    ///
    pub const OnRecursiveFilteringEnabledChanged = onRecursiveFilteringEnabledChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, recursiveFilteringEnabled: bool) callconv(.c) void `
    ///
    pub fn onRecursiveFilteringEnabledChanged(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoAcceptChildRowsChanged` instead
    ///
    pub const AutoAcceptChildRowsChanged = autoAcceptChildRowsChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _autoAcceptChildRows: bool `
    ///
    pub fn autoAcceptChildRowsChanged(self: TextEmoticonsCore__EmojiProxyModel, _autoAcceptChildRows: bool) void {
        qtc.QSortFilterProxyModel_AutoAcceptChildRowsChanged(@ptrCast(self.ptr), _autoAcceptChildRows);
    }

    /// ### DEPRECATED: Use `onAutoAcceptChildRowsChanged` instead
    ///
    pub const OnAutoAcceptChildRowsChanged = onAutoAcceptChildRowsChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, autoAcceptChildRows: bool) callconv(.c) void `
    ///
    pub fn onAutoAcceptChildRowsChanged(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sourceModel` instead
    ///
    pub const SourceModel = sourceModel;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn sourceModel(self: TextEmoticonsCore__EmojiProxyModel) QAbstractItemModel {
        return .{ .ptr = qtc.QAbstractProxyModel_SourceModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasIndex` instead
    ///
    pub const HasIndex = hasIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn hasIndex(self: TextEmoticonsCore__EmojiProxyModel, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### DEPRECATED: Use `insertRow` instead
    ///
    pub const InsertRow = insertRow;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    pub fn insertRow(self: TextEmoticonsCore__EmojiProxyModel, row: i32) bool {
        return qtc.QAbstractItemModel_InsertRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `insertColumn` instead
    ///
    pub const InsertColumn = insertColumn;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn insertColumn(self: TextEmoticonsCore__EmojiProxyModel, column: i32) bool {
        return qtc.QAbstractItemModel_InsertColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `removeRow` instead
    ///
    pub const RemoveRow = removeRow;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    pub fn removeRow(self: TextEmoticonsCore__EmojiProxyModel, row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `removeColumn` instead
    ///
    pub const RemoveColumn = removeColumn;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn removeColumn(self: TextEmoticonsCore__EmojiProxyModel, column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `moveRow` instead
    ///
    pub const MoveRow = moveRow;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveRow(self: TextEmoticonsCore__EmojiProxyModel, sourceParent: anytype, sourceRow: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractItemModel_MoveRow(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `moveColumn` instead
    ///
    pub const MoveColumn = moveColumn;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveColumn(self: TextEmoticonsCore__EmojiProxyModel, sourceParent: anytype, sourceColumn: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractItemModel_MoveColumn(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `checkIndex` instead
    ///
    pub const CheckIndex = checkIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn checkIndex(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `dataChanged` instead
    ///
    pub const DataChanged = dataChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    pub fn dataChanged(self: TextEmoticonsCore__EmojiProxyModel, topLeft: anytype, bottomRight: anytype) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        qtc.QAbstractItemModel_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr));
    }

    /// ### DEPRECATED: Use `onDataChanged` instead
    ///
    pub const OnDataChanged = onDataChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, topLeft: QModelIndex, bottomRight: QModelIndex) callconv(.c) void `
    ///
    pub fn onDataChanged(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `headerDataChanged` instead
    ///
    pub const HeaderDataChanged = headerDataChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn headerDataChanged(self: TextEmoticonsCore__EmojiProxyModel, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(orientation), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onHeaderDataChanged` instead
    ///
    pub const OnHeaderDataChanged = onHeaderDataChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onHeaderDataChanged(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutChanged` instead
    ///
    pub const LayoutChanged = layoutChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn layoutChanged(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLayoutChanged` instead
    ///
    pub const OnLayoutChanged = onLayoutChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel) callconv(.c) void `
    ///
    pub fn onLayoutChanged(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutAboutToBeChanged` instead
    ///
    pub const LayoutAboutToBeChanged = layoutAboutToBeChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn layoutAboutToBeChanged(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLayoutAboutToBeChanged` instead
    ///
    pub const OnLayoutAboutToBeChanged = onLayoutAboutToBeChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasIndex3` instead
    ///
    pub const HasIndex3 = hasIndex3;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn hasIndex3(self: TextEmoticonsCore__EmojiProxyModel, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `insertRow2` instead
    ///
    pub const InsertRow2 = insertRow2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertRow2(self: TextEmoticonsCore__EmojiProxyModel, row: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_InsertRow2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `insertColumn2` instead
    ///
    pub const InsertColumn2 = insertColumn2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertColumn2(self: TextEmoticonsCore__EmojiProxyModel, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_InsertColumn2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `removeRow2` instead
    ///
    pub const RemoveRow2 = removeRow2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeRow2(self: TextEmoticonsCore__EmojiProxyModel, row: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `removeColumn2` instead
    ///
    pub const RemoveColumn2 = removeColumn2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeColumn2(self: TextEmoticonsCore__EmojiProxyModel, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `checkIndex2` instead
    ///
    pub const CheckIndex2 = checkIndex2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` options: flag of qabstractitemmodel_enums.CheckIndexOption `
    ///
    pub fn checkIndex2(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype, options: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `dataChanged3` instead
    ///
    pub const DataChanged3 = dataChanged3;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn dataChanged3(self: TextEmoticonsCore__EmojiProxyModel, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QAbstractItemModel_DataChanged3(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### DEPRECATED: Use `onDataChanged3` instead
    ///
    pub const OnDataChanged3 = onDataChanged3;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn onDataChanged3(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutChanged1` instead
    ///
    pub const LayoutChanged1 = layoutChanged1;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn layoutChanged1(self: TextEmoticonsCore__EmojiProxyModel, parents: []QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged1(@ptrCast(self.ptr), parents_list);
    }

    /// ### DEPRECATED: Use `onLayoutChanged1` instead
    ///
    pub const OnLayoutChanged1 = onLayoutChanged1;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn onLayoutChanged1(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutChanged2` instead
    ///
    pub const LayoutChanged2 = layoutChanged2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn layoutChanged2(self: TextEmoticonsCore__EmojiProxyModel, parents: []QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged2(@ptrCast(self.ptr), parents_list, @bitCast(hint));
    }

    /// ### DEPRECATED: Use `onLayoutChanged2` instead
    ///
    pub const OnLayoutChanged2 = onLayoutChanged2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn onLayoutChanged2(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutAboutToBeChanged1` instead
    ///
    pub const LayoutAboutToBeChanged1 = layoutAboutToBeChanged1;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn layoutAboutToBeChanged1(self: TextEmoticonsCore__EmojiProxyModel, parents: []QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged1(@ptrCast(self.ptr), parents_list);
    }

    /// ### DEPRECATED: Use `onLayoutAboutToBeChanged1` instead
    ///
    pub const OnLayoutAboutToBeChanged1 = onLayoutAboutToBeChanged1;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged1(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutAboutToBeChanged2` instead
    ///
    pub const LayoutAboutToBeChanged2 = layoutAboutToBeChanged2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn layoutAboutToBeChanged2(self: TextEmoticonsCore__EmojiProxyModel, parents: []QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged2(@ptrCast(self.ptr), parents_list, @bitCast(hint));
    }

    /// ### DEPRECATED: Use `onLayoutAboutToBeChanged2` instead
    ///
    pub const OnLayoutAboutToBeChanged2 = onLayoutAboutToBeChanged2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged2(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.objectName: Memory allocation failed");
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: TextEmoticonsCore__EmojiProxyModel, name: []const u8) void {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn isWidgetType(self: TextEmoticonsCore__EmojiProxyModel) bool {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn isWindowType(self: TextEmoticonsCore__EmojiProxyModel) bool {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn isQuickItemType(self: TextEmoticonsCore__EmojiProxyModel) bool {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn signalsBlocked(self: TextEmoticonsCore__EmojiProxyModel) bool {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: TextEmoticonsCore__EmojiProxyModel, b: bool) bool {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn thread(self: TextEmoticonsCore__EmojiProxyModel) QThread {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: TextEmoticonsCore__EmojiProxyModel, _thread: anytype) bool {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: TextEmoticonsCore__EmojiProxyModel, interval: i32) i32 {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: TextEmoticonsCore__EmojiProxyModel, time: i64) i32 {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: TextEmoticonsCore__EmojiProxyModel, id: i32) void {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: TextEmoticonsCore__EmojiProxyModel, id: i32) void {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.children: Memory allocation failed");
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype) void {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: TextEmoticonsCore__EmojiProxyModel, filterObj: anytype) void {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: TextEmoticonsCore__EmojiProxyModel, obj: anytype) void {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: TextEmoticonsCore__EmojiProxyModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn disconnect3(self: TextEmoticonsCore__EmojiProxyModel) bool {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: TextEmoticonsCore__EmojiProxyModel, receiver: anytype) bool {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn dumpObjectTree(self: TextEmoticonsCore__EmojiProxyModel) void {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn dumpObjectInfo(self: TextEmoticonsCore__EmojiProxyModel) void {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: TextEmoticonsCore__EmojiProxyModel, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: TextEmoticonsCore__EmojiProxyModel, name: [:0]const u8) QVariant {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn bindingStorage(self: TextEmoticonsCore__EmojiProxyModel) QBindingStorage {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn bindingStorage2(self: TextEmoticonsCore__EmojiProxyModel) QBindingStorage {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn destroyed(self: TextEmoticonsCore__EmojiProxyModel) void {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel) callconv(.c) void `
    ///
    pub fn onDestroyed(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: TextEmoticonsCore__EmojiProxyModel, classname: [:0]const u8) bool {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn deleteLater(self: TextEmoticonsCore__EmojiProxyModel) void {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: TextEmoticonsCore__EmojiProxyModel, interval: i32, timerType: i32) i32 {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: TextEmoticonsCore__EmojiProxyModel, time: i64, timerType: i32) i32 {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: TextEmoticonsCore__EmojiProxyModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: TextEmoticonsCore__EmojiProxyModel, signal: [:0]const u8) bool {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: TextEmoticonsCore__EmojiProxyModel, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: TextEmoticonsCore__EmojiProxyModel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: TextEmoticonsCore__EmojiProxyModel, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: TextEmoticonsCore__EmojiProxyModel, param1: anytype) void {
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setSourceModel` instead
    ///
    pub const SetSourceModel = setSourceModel;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _sourceModel: QAbstractItemModel `
    ///
    pub fn setSourceModel(self: TextEmoticonsCore__EmojiProxyModel, _sourceModel: anytype) void {
        comptime _ = @TypeOf(_sourceModel)._is_QAbstractItemModel;
        qtc.TextEmoticonsCore__EmojiProxyModel_SetSourceModel(@ptrCast(self.ptr), @ptrCast(_sourceModel.ptr));
    }

    /// ### DEPRECATED: Use `superSetSourceModel` instead
    ///
    pub const SuperSetSourceModel = superSetSourceModel;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _sourceModel: QAbstractItemModel `
    ///
    pub fn superSetSourceModel(self: TextEmoticonsCore__EmojiProxyModel, _sourceModel: anytype) void {
        comptime _ = @TypeOf(_sourceModel)._is_QAbstractItemModel;
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperSetSourceModel(@ptrCast(self.ptr), @ptrCast(_sourceModel.ptr));
    }

    /// ### DEPRECATED: Use `onSetSourceModel` instead
    ///
    pub const OnSetSourceModel = onSetSourceModel;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, sourceModel: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn onSetSourceModel(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QAbstractItemModel) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnSetSourceModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mapToSource` instead
    ///
    pub const MapToSource = mapToSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    pub fn mapToSource(self: TextEmoticonsCore__EmojiProxyModel, proxyIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_MapToSource(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `superMapToSource` instead
    ///
    pub const SuperMapToSource = superMapToSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    pub fn superMapToSource(self: TextEmoticonsCore__EmojiProxyModel, proxyIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperMapToSource(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapToSource` instead
    ///
    pub const OnMapToSource = onMapToSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, proxyIndex: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapToSource(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnMapToSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mapFromSource` instead
    ///
    pub const MapFromSource = mapFromSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` sourceIndex: QModelIndex `
    ///
    pub fn mapFromSource(self: TextEmoticonsCore__EmojiProxyModel, sourceIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(sourceIndex)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_MapFromSource(@ptrCast(self.ptr), @ptrCast(sourceIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `superMapFromSource` instead
    ///
    pub const SuperMapFromSource = superMapFromSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` sourceIndex: QModelIndex `
    ///
    pub fn superMapFromSource(self: TextEmoticonsCore__EmojiProxyModel, sourceIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(sourceIndex)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperMapFromSource(@ptrCast(self.ptr), @ptrCast(sourceIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapFromSource` instead
    ///
    pub const OnMapFromSource = onMapFromSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, sourceIndex: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapFromSource(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnMapFromSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mapSelectionToSource` instead
    ///
    pub const MapSelectionToSource = mapSelectionToSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` proxySelection: QItemSelection `
    ///
    pub fn mapSelectionToSource(self: TextEmoticonsCore__EmojiProxyModel, proxySelection: anytype) QItemSelection {
        comptime _ = @TypeOf(proxySelection)._is_QItemSelection;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_MapSelectionToSource(@ptrCast(self.ptr), @ptrCast(proxySelection.ptr)) };
    }

    /// ### DEPRECATED: Use `superMapSelectionToSource` instead
    ///
    pub const SuperMapSelectionToSource = superMapSelectionToSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` proxySelection: QItemSelection `
    ///
    pub fn superMapSelectionToSource(self: TextEmoticonsCore__EmojiProxyModel, proxySelection: anytype) QItemSelection {
        comptime _ = @TypeOf(proxySelection)._is_QItemSelection;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperMapSelectionToSource(@ptrCast(self.ptr), @ptrCast(proxySelection.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapSelectionToSource` instead
    ///
    pub const OnMapSelectionToSource = onMapSelectionToSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, proxySelection: QItemSelection) callconv(.c) QItemSelection `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapSelectionToSource(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QItemSelection) callconv(.c) QItemSelection) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnMapSelectionToSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mapSelectionFromSource` instead
    ///
    pub const MapSelectionFromSource = mapSelectionFromSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` sourceSelection: QItemSelection `
    ///
    pub fn mapSelectionFromSource(self: TextEmoticonsCore__EmojiProxyModel, sourceSelection: anytype) QItemSelection {
        comptime _ = @TypeOf(sourceSelection)._is_QItemSelection;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_MapSelectionFromSource(@ptrCast(self.ptr), @ptrCast(sourceSelection.ptr)) };
    }

    /// ### DEPRECATED: Use `superMapSelectionFromSource` instead
    ///
    pub const SuperMapSelectionFromSource = superMapSelectionFromSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` sourceSelection: QItemSelection `
    ///
    pub fn superMapSelectionFromSource(self: TextEmoticonsCore__EmojiProxyModel, sourceSelection: anytype) QItemSelection {
        comptime _ = @TypeOf(sourceSelection)._is_QItemSelection;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperMapSelectionFromSource(@ptrCast(self.ptr), @ptrCast(sourceSelection.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapSelectionFromSource` instead
    ///
    pub const OnMapSelectionFromSource = onMapSelectionFromSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, sourceSelection: QItemSelection) callconv(.c) QItemSelection `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapSelectionFromSource(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QItemSelection) callconv(.c) QItemSelection) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnMapSelectionFromSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `filterAcceptsColumn` instead
    ///
    pub const FilterAcceptsColumn = filterAcceptsColumn;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` source_column: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn filterAcceptsColumn(self: TextEmoticonsCore__EmojiProxyModel, source_column: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_FilterAcceptsColumn(@ptrCast(self.ptr), @bitCast(source_column), @ptrCast(source_parent.ptr));
    }

    /// ### DEPRECATED: Use `superFilterAcceptsColumn` instead
    ///
    pub const SuperFilterAcceptsColumn = superFilterAcceptsColumn;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` source_column: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn superFilterAcceptsColumn(self: TextEmoticonsCore__EmojiProxyModel, source_column: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperFilterAcceptsColumn(@ptrCast(self.ptr), @bitCast(source_column), @ptrCast(source_parent.ptr));
    }

    /// ### DEPRECATED: Use `onFilterAcceptsColumn` instead
    ///
    pub const OnFilterAcceptsColumn = onFilterAcceptsColumn;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, source_column: i32, source_parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onFilterAcceptsColumn(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnFilterAcceptsColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn index(self: TextEmoticonsCore__EmojiProxyModel, row: i32, column: i32, _parent: anytype) QModelIndex {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_Index(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `superIndex` instead
    ///
    pub const SuperIndex = superIndex;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superIndex(self: TextEmoticonsCore__EmojiProxyModel, row: i32, column: i32, _parent: anytype) QModelIndex {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onIndex` instead
    ///
    pub const OnIndex = onIndex;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, row: i32, column: i32, parent: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIndex(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn parent(self: TextEmoticonsCore__EmojiProxyModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_Parent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// ### DEPRECATED: Use `superParent` instead
    ///
    pub const SuperParent = superParent;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn superParent(self: TextEmoticonsCore__EmojiProxyModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperParent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// ### DEPRECATED: Use `onParent` instead
    ///
    pub const OnParent = onParent;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, child: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onParent(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sibling` instead
    ///
    pub const Sibling = sibling;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn sibling(self: TextEmoticonsCore__EmojiProxyModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_Sibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `superSibling` instead
    ///
    pub const SuperSibling = superSibling;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn superSibling(self: TextEmoticonsCore__EmojiProxyModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperSibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `onSibling` instead
    ///
    pub const OnSibling = onSibling;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, row: i32, column: i32, idx: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSibling(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnSibling(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn rowCount(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_RowCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superRowCount` instead
    ///
    pub const SuperRowCount = superRowCount;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRowCount(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperRowCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRowCount` instead
    ///
    pub const OnRowCount = onRowCount;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onRowCount(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnRowCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn columnCount(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_ColumnCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superColumnCount` instead
    ///
    pub const SuperColumnCount = superColumnCount;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superColumnCount(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperColumnCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onColumnCount` instead
    ///
    pub const OnColumnCount = onColumnCount;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onColumnCount(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnColumnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasChildren` instead
    ///
    pub const HasChildren = hasChildren;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn hasChildren(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_HasChildren(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superHasChildren` instead
    ///
    pub const SuperHasChildren = superHasChildren;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superHasChildren(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperHasChildren(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onHasChildren` instead
    ///
    pub const OnHasChildren = onHasChildren;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onHasChildren(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnHasChildren(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn data(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_Data(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `superData` instead
    ///
    pub const SuperData = superData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn superData(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, index: QModelIndex, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onData(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32) callconv(.c) QVariant) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setData(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SetData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `superSetData` instead
    ///
    pub const SuperSetData = superSetData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetData(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperSetData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `onSetData` instead
    ///
    pub const OnSetData = onSetData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, index: QModelIndex, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn onSetData(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, QVariant, i32) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `headerData` instead
    ///
    pub const HeaderData = headerData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn headerData(self: TextEmoticonsCore__EmojiProxyModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_HeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `superHeaderData` instead
    ///
    pub const SuperHeaderData = superHeaderData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn superHeaderData(self: TextEmoticonsCore__EmojiProxyModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onHeaderData` instead
    ///
    pub const OnHeaderData = onHeaderData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onHeaderData(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, i32, i32) callconv(.c) QVariant) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setHeaderData` instead
    ///
    pub const SetHeaderData = setHeaderData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setHeaderData(self: TextEmoticonsCore__EmojiProxyModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `superSetHeaderData` instead
    ///
    pub const SuperSetHeaderData = superSetHeaderData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetHeaderData(self: TextEmoticonsCore__EmojiProxyModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperSetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `onSetHeaderData` instead
    ///
    pub const OnSetHeaderData = onSetHeaderData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn onSetHeaderData(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, i32, QVariant, i32) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnSetHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mimeData` instead
    ///
    pub const MimeData = mimeData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn mimeData(self: TextEmoticonsCore__EmojiProxyModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_MimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `superMimeData` instead
    ///
    pub const SuperMimeData = superMimeData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn superMimeData(self: TextEmoticonsCore__EmojiProxyModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperMimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `onMimeData` instead
    ///
    pub const OnMimeData = onMimeData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, indexes: qtc.libqt_list ([]QModelIndex)) callconv(.c) QMimeData `
    ///
    pub fn onMimeData(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropMimeData` instead
    ///
    pub const DropMimeData = dropMimeData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn dropMimeData(self: TextEmoticonsCore__EmojiProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_DropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superDropMimeData` instead
    ///
    pub const SuperDropMimeData = superDropMimeData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superDropMimeData(self: TextEmoticonsCore__EmojiProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onDropMimeData` instead
    ///
    pub const OnDropMimeData = onDropMimeData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onDropMimeData(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertRows` instead
    ///
    pub const InsertRows = insertRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertRows(self: TextEmoticonsCore__EmojiProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_InsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superInsertRows` instead
    ///
    pub const SuperInsertRows = superInsertRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superInsertRows(self: TextEmoticonsCore__EmojiProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperInsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onInsertRows` instead
    ///
    pub const OnInsertRows = onInsertRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onInsertRows(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertColumns` instead
    ///
    pub const InsertColumns = insertColumns;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertColumns(self: TextEmoticonsCore__EmojiProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_InsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superInsertColumns` instead
    ///
    pub const SuperInsertColumns = superInsertColumns;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superInsertColumns(self: TextEmoticonsCore__EmojiProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperInsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onInsertColumns` instead
    ///
    pub const OnInsertColumns = onInsertColumns;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onInsertColumns(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeRows` instead
    ///
    pub const RemoveRows = removeRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeRows(self: TextEmoticonsCore__EmojiProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_RemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superRemoveRows` instead
    ///
    pub const SuperRemoveRows = superRemoveRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRemoveRows(self: TextEmoticonsCore__EmojiProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperRemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveRows` instead
    ///
    pub const OnRemoveRows = onRemoveRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onRemoveRows(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeColumns` instead
    ///
    pub const RemoveColumns = removeColumns;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeColumns(self: TextEmoticonsCore__EmojiProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_RemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superRemoveColumns` instead
    ///
    pub const SuperRemoveColumns = superRemoveColumns;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRemoveColumns(self: TextEmoticonsCore__EmojiProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperRemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveColumns` instead
    ///
    pub const OnRemoveColumns = onRemoveColumns;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onRemoveColumns(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fetchMore` instead
    ///
    pub const FetchMore = fetchMore;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn fetchMore(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiProxyModel_FetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superFetchMore` instead
    ///
    pub const SuperFetchMore = superFetchMore;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superFetchMore(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onFetchMore` instead
    ///
    pub const OnFetchMore = onFetchMore;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex) callconv(.c) void `
    ///
    pub fn onFetchMore(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canFetchMore` instead
    ///
    pub const CanFetchMore = canFetchMore;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn canFetchMore(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_CanFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superCanFetchMore` instead
    ///
    pub const SuperCanFetchMore = superCanFetchMore;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superCanFetchMore(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperCanFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onCanFetchMore` instead
    ///
    pub const OnCanFetchMore = onCanFetchMore;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onCanFetchMore(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnCanFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn flags(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype) i32 {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_Flags(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `superFlags` instead
    ///
    pub const SuperFlags = superFlags;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn superFlags(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype) i32 {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperFlags(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `onFlags` instead
    ///
    pub const OnFlags = onFlags;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, index: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onFlags(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnFlags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `buddy` instead
    ///
    pub const Buddy = buddy;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn buddy(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_Buddy(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `superBuddy` instead
    ///
    pub const SuperBuddy = superBuddy;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superBuddy(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperBuddy(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `onBuddy` instead
    ///
    pub const OnBuddy = onBuddy;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, index: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBuddy(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnBuddy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `match` instead
    ///
    pub const Match = match;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
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
    /// ` _flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn match(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, _flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiProxyModel_Match(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.match: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superMatch` instead
    ///
    pub const SuperMatch = superMatch;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
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
    /// ` _flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn superMatch(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, _flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiProxyModel_SuperMatch(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.match: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onMatch` instead
    ///
    pub const OnMatch = onMatch;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, start: QModelIndex, role: i32, value: QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onMatch(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, QVariant, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `span` instead
    ///
    pub const Span = span;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn span(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype) QSize {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_Span(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `superSpan` instead
    ///
    pub const SuperSpan = superSpan;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superSpan(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype) QSize {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperSpan(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `onSpan` instead
    ///
    pub const OnSpan = onSpan;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, index: QModelIndex) callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSpan(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex) callconv(.c) QSize) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnSpan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sort` instead
    ///
    pub const Sort = sort;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn sort(self: TextEmoticonsCore__EmojiProxyModel, column: i32, order: i32) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_Sort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `superSort` instead
    ///
    pub const SuperSort = superSort;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn superSort(self: TextEmoticonsCore__EmojiProxyModel, column: i32, order: i32) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperSort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `onSort` instead
    ///
    pub const OnSort = onSort;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn onSort(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, i32) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnSort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mimeTypes` instead
    ///
    pub const MimeTypes = mimeTypes;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypes(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiProxyModel_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `superMimeTypes` instead
    ///
    pub const SuperMimeTypes = superMimeTypes;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superMimeTypes(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiProxyModel_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onMimeTypes` instead
    ///
    pub const OnMimeTypes = onMimeTypes;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onMimeTypes(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `supportedDropActions` instead
    ///
    pub const SupportedDropActions = supportedDropActions;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDropActions(self: TextEmoticonsCore__EmojiProxyModel) i32 {
        return qtc.TextEmoticonsCore__EmojiProxyModel_SupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSupportedDropActions` instead
    ///
    pub const SuperSupportedDropActions = superSupportedDropActions;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDropActions(self: TextEmoticonsCore__EmojiProxyModel) i32 {
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperSupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedDropActions` instead
    ///
    pub const OnSupportedDropActions = onSupportedDropActions;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDropActions(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `submit` instead
    ///
    pub const Submit = submit;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn submit(self: TextEmoticonsCore__EmojiProxyModel) bool {
        return qtc.TextEmoticonsCore__EmojiProxyModel_Submit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSubmit` instead
    ///
    pub const SuperSubmit = superSubmit;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superSubmit(self: TextEmoticonsCore__EmojiProxyModel) bool {
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperSubmit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSubmit` instead
    ///
    pub const OnSubmit = onSubmit;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSubmit(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnSubmit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `revert` instead
    ///
    pub const Revert = revert;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn revert(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_Revert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superRevert` instead
    ///
    pub const SuperRevert = superRevert;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superRevert(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperRevert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRevert` instead
    ///
    pub const OnRevert = onRevert;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onRevert(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnRevert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemData` instead
    ///
    pub const ItemData = itemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn itemData(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator, _index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.TextEmoticonsCore__EmojiProxyModel_ItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("TextEmoticonsCore__EmojiProxyModel.itemData: Total capacity allocation failed");
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

    /// ### DEPRECATED: Use `superItemData` instead
    ///
    pub const SuperItemData = superItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superItemData(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator, _index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.TextEmoticonsCore__EmojiProxyModel_SuperItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("TextEmoticonsCore__EmojiProxyModel.itemData: Total capacity allocation failed");
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

    /// ### DEPRECATED: Use `onItemData` instead
    ///
    pub const OnItemData = onItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, index: QModelIndex) callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_QVariant `
    ///
    pub fn onItemData(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex) callconv(.c) qtc.libqt_map) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setItemData` instead
    ///
    pub const SetItemData = setItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn setItemData(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator, _index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("TextEmoticonsCore__EmojiProxyModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("TextEmoticonsCore__EmojiProxyModel.setItemData: Memory allocation failed");
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
        return qtc.TextEmoticonsCore__EmojiProxyModel_SetItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr), roles_map);
    }

    /// ### DEPRECATED: Use `superSetItemData` instead
    ///
    pub const SuperSetItemData = superSetItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn superSetItemData(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator, _index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("TextEmoticonsCore__EmojiProxyModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("TextEmoticonsCore__EmojiProxyModel.setItemData: Memory allocation failed");
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
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperSetItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr), roles_map);
    }

    /// ### DEPRECATED: Use `onSetItemData` instead
    ///
    pub const OnSetItemData = onSetItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, index: QModelIndex, roles: qtc.libqt_map (ArrayMap_i32_QVariant)) callconv(.c) bool `
    ///
    pub fn onSetItemData(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, qtc.libqt_map) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnSetItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clearItemData` instead
    ///
    pub const ClearItemData = clearItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn clearItemData(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_ClearItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `superClearItemData` instead
    ///
    pub const SuperClearItemData = superClearItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superClearItemData(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperClearItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `onClearItemData` instead
    ///
    pub const OnClearItemData = onClearItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn onClearItemData(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnClearItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canDropMimeData` instead
    ///
    pub const CanDropMimeData = canDropMimeData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn canDropMimeData(self: TextEmoticonsCore__EmojiProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_CanDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superCanDropMimeData` instead
    ///
    pub const SuperCanDropMimeData = superCanDropMimeData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superCanDropMimeData(self: TextEmoticonsCore__EmojiProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperCanDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onCanDropMimeData` instead
    ///
    pub const OnCanDropMimeData = onCanDropMimeData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onCanDropMimeData(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnCanDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `supportedDragActions` instead
    ///
    pub const SupportedDragActions = supportedDragActions;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDragActions(self: TextEmoticonsCore__EmojiProxyModel) i32 {
        return qtc.TextEmoticonsCore__EmojiProxyModel_SupportedDragActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSupportedDragActions` instead
    ///
    pub const SuperSupportedDragActions = superSupportedDragActions;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDragActions(self: TextEmoticonsCore__EmojiProxyModel) i32 {
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperSupportedDragActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedDragActions` instead
    ///
    pub const OnSupportedDragActions = onSupportedDragActions;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDragActions(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnSupportedDragActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `roleNames` instead
    ///
    pub const RoleNames = roleNames;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn roleNames(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.TextEmoticonsCore__EmojiProxyModel_RoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("TextEmoticonsCore__EmojiProxyModel.roleNames: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.roleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `superRoleNames` instead
    ///
    pub const SuperRoleNames = superRoleNames;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superRoleNames(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.TextEmoticonsCore__EmojiProxyModel_SuperRoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("TextEmoticonsCore__EmojiProxyModel.roleNames: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.roleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onRoleNames` instead
    ///
    pub const OnRoleNames = onRoleNames;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of Map_i32_u8 `
    ///
    pub fn onRoleNames(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnRoleNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveRows` instead
    ///
    pub const MoveRows = moveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
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
    pub fn moveRows(self: TextEmoticonsCore__EmojiProxyModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_MoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `superMoveRows` instead
    ///
    pub const SuperMoveRows = superMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
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
    pub fn superMoveRows(self: TextEmoticonsCore__EmojiProxyModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `onMoveRows` instead
    ///
    pub const OnMoveRows = onMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, sourceParent: QModelIndex, sourceRow: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn onMoveRows(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveColumns` instead
    ///
    pub const MoveColumns = moveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
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
    pub fn moveColumns(self: TextEmoticonsCore__EmojiProxyModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_MoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `superMoveColumns` instead
    ///
    pub const SuperMoveColumns = superMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
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
    pub fn superMoveColumns(self: TextEmoticonsCore__EmojiProxyModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `onMoveColumns` instead
    ///
    pub const OnMoveColumns = onMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, sourceParent: QModelIndex, sourceColumn: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn onMoveColumns(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `multiData` instead
    ///
    pub const MultiData = multiData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn multiData(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.TextEmoticonsCore__EmojiProxyModel_MultiData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// ### DEPRECATED: Use `superMultiData` instead
    ///
    pub const SuperMultiData = superMultiData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn superMultiData(self: TextEmoticonsCore__EmojiProxyModel, _index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperMultiData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// ### DEPRECATED: Use `onMultiData` instead
    ///
    pub const OnMultiData = onMultiData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, index: QModelIndex, roleDataSpan: QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn onMultiData(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, QModelRoleDataSpan) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnMultiData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resetInternalData` instead
    ///
    pub const ResetInternalData = resetInternalData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn resetInternalData(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_ResetInternalData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superResetInternalData` instead
    ///
    pub const SuperResetInternalData = superResetInternalData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superResetInternalData(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperResetInternalData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onResetInternalData` instead
    ///
    pub const OnResetInternalData = onResetInternalData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onResetInternalData(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnResetInternalData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: TextEmoticonsCore__EmojiProxyModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextEmoticonsCore__EmojiProxyModel_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: TextEmoticonsCore__EmojiProxyModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QEvent) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: TextEmoticonsCore__EmojiProxyModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextEmoticonsCore__EmojiProxyModel_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: TextEmoticonsCore__EmojiProxyModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: TextEmoticonsCore__EmojiProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.TextEmoticonsCore__EmojiProxyModel_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: TextEmoticonsCore__EmojiProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QTimerEvent) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: TextEmoticonsCore__EmojiProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextEmoticonsCore__EmojiProxyModel_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: TextEmoticonsCore__EmojiProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QChildEvent) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: TextEmoticonsCore__EmojiProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextEmoticonsCore__EmojiProxyModel_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: TextEmoticonsCore__EmojiProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QEvent) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: TextEmoticonsCore__EmojiProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsCore__EmojiProxyModel_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: TextEmoticonsCore__EmojiProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QMetaMethod) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: TextEmoticonsCore__EmojiProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsCore__EmojiProxyModel_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: TextEmoticonsCore__EmojiProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QMetaMethod) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `invalidateFilter` instead
    ///
    pub const InvalidateFilter = invalidateFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn invalidateFilter(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_InvalidateFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superInvalidateFilter` instead
    ///
    pub const SuperInvalidateFilter = superInvalidateFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superInvalidateFilter(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperInvalidateFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidateFilter` instead
    ///
    pub const OnInvalidateFilter = onInvalidateFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onInvalidateFilter(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnInvalidateFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `invalidateRowsFilter` instead
    ///
    pub const InvalidateRowsFilter = invalidateRowsFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn invalidateRowsFilter(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_InvalidateRowsFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superInvalidateRowsFilter` instead
    ///
    pub const SuperInvalidateRowsFilter = superInvalidateRowsFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superInvalidateRowsFilter(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperInvalidateRowsFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidateRowsFilter` instead
    ///
    pub const OnInvalidateRowsFilter = onInvalidateRowsFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onInvalidateRowsFilter(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnInvalidateRowsFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `invalidateColumnsFilter` instead
    ///
    pub const InvalidateColumnsFilter = invalidateColumnsFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn invalidateColumnsFilter(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_InvalidateColumnsFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superInvalidateColumnsFilter` instead
    ///
    pub const SuperInvalidateColumnsFilter = superInvalidateColumnsFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superInvalidateColumnsFilter(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperInvalidateColumnsFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidateColumnsFilter` instead
    ///
    pub const OnInvalidateColumnsFilter = onInvalidateColumnsFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onInvalidateColumnsFilter(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnInvalidateColumnsFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createSourceIndex` instead
    ///
    pub const CreateSourceIndex = createSourceIndex;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` internalPtr: ?*anyopaque `
    ///
    pub fn createSourceIndex(self: TextEmoticonsCore__EmojiProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) QModelIndex {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_CreateSourceIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(col), @ptrCast(internalPtr)) };
    }

    /// ### DEPRECATED: Use `superCreateSourceIndex` instead
    ///
    pub const SuperCreateSourceIndex = superCreateSourceIndex;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` internalPtr: ?*anyopaque `
    ///
    pub fn superCreateSourceIndex(self: TextEmoticonsCore__EmojiProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) QModelIndex {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperCreateSourceIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(col), @ptrCast(internalPtr)) };
    }

    /// ### DEPRECATED: Use `onCreateSourceIndex` instead
    ///
    pub const OnCreateSourceIndex = onCreateSourceIndex;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreateSourceIndex(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, i32, ?*anyopaque) callconv(.c) QModelIndex) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnCreateSourceIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createIndex` instead
    ///
    pub const CreateIndex = createIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn createIndex(self: TextEmoticonsCore__EmojiProxyModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_CreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `superCreateIndex` instead
    ///
    pub const SuperCreateIndex = superCreateIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn superCreateIndex(self: TextEmoticonsCore__EmojiProxyModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperCreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `onCreateIndex` instead
    ///
    pub const OnCreateIndex = onCreateIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, row: i32, column: i32) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreateIndex(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, i32) callconv(.c) QModelIndex) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnCreateIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `encodeData` instead
    ///
    pub const EncodeData = encodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn encodeData(self: TextEmoticonsCore__EmojiProxyModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.TextEmoticonsCore__EmojiProxyModel_EncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `superEncodeData` instead
    ///
    pub const SuperEncodeData = superEncodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn superEncodeData(self: TextEmoticonsCore__EmojiProxyModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperEncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `onEncodeData` instead
    ///
    pub const OnEncodeData = onEncodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, indexes: qtc.libqt_list ([]QModelIndex), stream: QDataStream) callconv(.c) void `
    ///
    pub fn onEncodeData(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, qtc.libqt_list, QDataStream) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnEncodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `decodeData` instead
    ///
    pub const DecodeData = decodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn decodeData(self: TextEmoticonsCore__EmojiProxyModel, row: i32, column: i32, _parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.TextEmoticonsCore__EmojiProxyModel_DecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr), @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `superDecodeData` instead
    ///
    pub const SuperDecodeData = superDecodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn superDecodeData(self: TextEmoticonsCore__EmojiProxyModel, row: i32, column: i32, _parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperDecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr), @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `onDecodeData` instead
    ///
    pub const OnDecodeData = onDecodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, row: i32, column: i32, parent: QModelIndex, stream: QDataStream) callconv(.c) bool `
    ///
    pub fn onDecodeData(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, i32, i32, QModelIndex, QDataStream) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnDecodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginInsertRows` instead
    ///
    pub const BeginInsertRows = beginInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginInsertRows(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiProxyModel_BeginInsertRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `superBeginInsertRows` instead
    ///
    pub const SuperBeginInsertRows = superBeginInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginInsertRows(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperBeginInsertRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onBeginInsertRows` instead
    ///
    pub const OnBeginInsertRows = onBeginInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginInsertRows(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnBeginInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endInsertRows` instead
    ///
    pub const EndInsertRows = endInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn endInsertRows(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_EndInsertRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndInsertRows` instead
    ///
    pub const SuperEndInsertRows = superEndInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superEndInsertRows(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperEndInsertRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndInsertRows` instead
    ///
    pub const OnEndInsertRows = onEndInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndInsertRows(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnEndInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginRemoveRows` instead
    ///
    pub const BeginRemoveRows = beginRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginRemoveRows(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiProxyModel_BeginRemoveRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `superBeginRemoveRows` instead
    ///
    pub const SuperBeginRemoveRows = superBeginRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginRemoveRows(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperBeginRemoveRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onBeginRemoveRows` instead
    ///
    pub const OnBeginRemoveRows = onBeginRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginRemoveRows(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnBeginRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endRemoveRows` instead
    ///
    pub const EndRemoveRows = endRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn endRemoveRows(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_EndRemoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndRemoveRows` instead
    ///
    pub const SuperEndRemoveRows = superEndRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superEndRemoveRows(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperEndRemoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndRemoveRows` instead
    ///
    pub const OnEndRemoveRows = onEndRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndRemoveRows(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnEndRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginMoveRows` instead
    ///
    pub const BeginMoveRows = beginMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
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
    pub fn beginMoveRows(self: TextEmoticonsCore__EmojiProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_BeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
    }

    /// ### DEPRECATED: Use `superBeginMoveRows` instead
    ///
    pub const SuperBeginMoveRows = superBeginMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
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
    pub fn superBeginMoveRows(self: TextEmoticonsCore__EmojiProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperBeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
    }

    /// ### DEPRECATED: Use `onBeginMoveRows` instead
    ///
    pub const OnBeginMoveRows = onBeginMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) bool `
    ///
    pub fn onBeginMoveRows(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnBeginMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endMoveRows` instead
    ///
    pub const EndMoveRows = endMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn endMoveRows(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_EndMoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndMoveRows` instead
    ///
    pub const SuperEndMoveRows = superEndMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superEndMoveRows(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperEndMoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndMoveRows` instead
    ///
    pub const OnEndMoveRows = onEndMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndMoveRows(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnEndMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginInsertColumns` instead
    ///
    pub const BeginInsertColumns = beginInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginInsertColumns(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiProxyModel_BeginInsertColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `superBeginInsertColumns` instead
    ///
    pub const SuperBeginInsertColumns = superBeginInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginInsertColumns(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperBeginInsertColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onBeginInsertColumns` instead
    ///
    pub const OnBeginInsertColumns = onBeginInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginInsertColumns(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnBeginInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endInsertColumns` instead
    ///
    pub const EndInsertColumns = endInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn endInsertColumns(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_EndInsertColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndInsertColumns` instead
    ///
    pub const SuperEndInsertColumns = superEndInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superEndInsertColumns(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperEndInsertColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndInsertColumns` instead
    ///
    pub const OnEndInsertColumns = onEndInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndInsertColumns(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnEndInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginRemoveColumns` instead
    ///
    pub const BeginRemoveColumns = beginRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginRemoveColumns(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiProxyModel_BeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `superBeginRemoveColumns` instead
    ///
    pub const SuperBeginRemoveColumns = superBeginRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginRemoveColumns(self: TextEmoticonsCore__EmojiProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperBeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onBeginRemoveColumns` instead
    ///
    pub const OnBeginRemoveColumns = onBeginRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginRemoveColumns(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnBeginRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endRemoveColumns` instead
    ///
    pub const EndRemoveColumns = endRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn endRemoveColumns(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_EndRemoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndRemoveColumns` instead
    ///
    pub const SuperEndRemoveColumns = superEndRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superEndRemoveColumns(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperEndRemoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndRemoveColumns` instead
    ///
    pub const OnEndRemoveColumns = onEndRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndRemoveColumns(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnEndRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginMoveColumns` instead
    ///
    pub const BeginMoveColumns = beginMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
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
    pub fn beginMoveColumns(self: TextEmoticonsCore__EmojiProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_BeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
    }

    /// ### DEPRECATED: Use `superBeginMoveColumns` instead
    ///
    pub const SuperBeginMoveColumns = superBeginMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
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
    pub fn superBeginMoveColumns(self: TextEmoticonsCore__EmojiProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperBeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
    }

    /// ### DEPRECATED: Use `onBeginMoveColumns` instead
    ///
    pub const OnBeginMoveColumns = onBeginMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) bool `
    ///
    pub fn onBeginMoveColumns(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnBeginMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endMoveColumns` instead
    ///
    pub const EndMoveColumns = endMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn endMoveColumns(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_EndMoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndMoveColumns` instead
    ///
    pub const SuperEndMoveColumns = superEndMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superEndMoveColumns(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperEndMoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndMoveColumns` instead
    ///
    pub const OnEndMoveColumns = onEndMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndMoveColumns(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnEndMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginResetModel` instead
    ///
    pub const BeginResetModel = beginResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn beginResetModel(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_BeginResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superBeginResetModel` instead
    ///
    pub const SuperBeginResetModel = superBeginResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superBeginResetModel(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperBeginResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBeginResetModel` instead
    ///
    pub const OnBeginResetModel = onBeginResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onBeginResetModel(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnBeginResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endResetModel` instead
    ///
    pub const EndResetModel = endResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn endResetModel(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_EndResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndResetModel` instead
    ///
    pub const SuperEndResetModel = superEndResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superEndResetModel(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperEndResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndResetModel` instead
    ///
    pub const OnEndResetModel = onEndResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndResetModel(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnEndResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changePersistentIndex` instead
    ///
    pub const ChangePersistentIndex = changePersistentIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn changePersistentIndex(self: TextEmoticonsCore__EmojiProxyModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### DEPRECATED: Use `superChangePersistentIndex` instead
    ///
    pub const SuperChangePersistentIndex = superChangePersistentIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn superChangePersistentIndex(self: TextEmoticonsCore__EmojiProxyModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### DEPRECATED: Use `onChangePersistentIndex` instead
    ///
    pub const OnChangePersistentIndex = onChangePersistentIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, from: QModelIndex, to: QModelIndex) callconv(.c) void `
    ///
    pub fn onChangePersistentIndex(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnChangePersistentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changePersistentIndexList` instead
    ///
    pub const ChangePersistentIndexList = changePersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn changePersistentIndexList(self: TextEmoticonsCore__EmojiProxyModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.TextEmoticonsCore__EmojiProxyModel_ChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
    }

    /// ### DEPRECATED: Use `superChangePersistentIndexList` instead
    ///
    pub const SuperChangePersistentIndexList = superChangePersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn superChangePersistentIndexList(self: TextEmoticonsCore__EmojiProxyModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.TextEmoticonsCore__EmojiProxyModel_SuperChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
    }

    /// ### DEPRECATED: Use `onChangePersistentIndexList` instead
    ///
    pub const OnChangePersistentIndexList = onChangePersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, from: qtc.libqt_list ([]QModelIndex), to: qtc.libqt_list ([]QModelIndex)) callconv(.c) void `
    ///
    pub fn onChangePersistentIndexList(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, qtc.libqt_list, qtc.libqt_list) callconv(.c) void) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnChangePersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `persistentIndexList` instead
    ///
    pub const PersistentIndexList = persistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn persistentIndexList(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiProxyModel_PersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.persistentIndexList: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superPersistentIndexList` instead
    ///
    pub const SuperPersistentIndexList = superPersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superPersistentIndexList(self: TextEmoticonsCore__EmojiProxyModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsCore__EmojiProxyModel_SuperPersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("TextEmoticonsCore__EmojiProxyModel.persistentIndexList: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onPersistentIndexList` instead
    ///
    pub const OnPersistentIndexList = onPersistentIndexList;

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
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onPersistentIndexList(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnPersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn sender(self: TextEmoticonsCore__EmojiProxyModel) QObject {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superSender(self: TextEmoticonsCore__EmojiProxyModel) QObject {
        return .{ .ptr = qtc.TextEmoticonsCore__EmojiProxyModel_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn senderSignalIndex(self: TextEmoticonsCore__EmojiProxyModel) i32 {
        return qtc.TextEmoticonsCore__EmojiProxyModel_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn superSenderSignalIndex(self: TextEmoticonsCore__EmojiProxyModel) i32 {
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: TextEmoticonsCore__EmojiProxyModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextEmoticonsCore__EmojiProxyModel_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: TextEmoticonsCore__EmojiProxyModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: TextEmoticonsCore__EmojiProxyModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextEmoticonsCore__EmojiProxyModel_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: TextEmoticonsCore__EmojiProxyModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextEmoticonsCore__EmojiProxyModel_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel`
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QMetaMethod) callconv(.c) bool) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onSourceModelChanged` instead
    ///
    pub const OnSourceModelChanged = onSourceModelChanged;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel) callconv(.c) void `
    ///
    pub fn onSourceModelChanged(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel) callconv(.c) void) void {
        qtc.QAbstractProxyModel_Connect_SourceModelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsAboutToBeInserted` instead
    ///
    pub const OnRowsAboutToBeInserted = onRowsAboutToBeInserted;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeInserted(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsInserted` instead
    ///
    pub const OnRowsInserted = onRowsInserted;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsInserted(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsAboutToBeRemoved` instead
    ///
    pub const OnRowsAboutToBeRemoved = onRowsAboutToBeRemoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeRemoved(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsRemoved` instead
    ///
    pub const OnRowsRemoved = onRowsRemoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsRemoved(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsAboutToBeInserted` instead
    ///
    pub const OnColumnsAboutToBeInserted = onColumnsAboutToBeInserted;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeInserted(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsInserted` instead
    ///
    pub const OnColumnsInserted = onColumnsInserted;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsInserted(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsAboutToBeRemoved` instead
    ///
    pub const OnColumnsAboutToBeRemoved = onColumnsAboutToBeRemoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeRemoved(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsRemoved` instead
    ///
    pub const OnColumnsRemoved = onColumnsRemoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsRemoved(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onModelAboutToBeReset` instead
    ///
    pub const OnModelAboutToBeReset = onModelAboutToBeReset;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel) callconv(.c) void `
    ///
    pub fn onModelAboutToBeReset(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelAboutToBeReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onModelReset` instead
    ///
    pub const OnModelReset = onModelReset;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel) callconv(.c) void `
    ///
    pub fn onModelReset(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsAboutToBeMoved` instead
    ///
    pub const OnRowsAboutToBeMoved = onRowsAboutToBeMoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeMoved(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsMoved` instead
    ///
    pub const OnRowsMoved = onRowsMoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn onRowsMoved(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsAboutToBeMoved` instead
    ///
    pub const OnColumnsAboutToBeMoved = onColumnsAboutToBeMoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeMoved(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsMoved` instead
    ///
    pub const OnColumnsMoved = onColumnsMoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn onColumnsMoved(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    /// ` callback: *const fn (self: TextEmoticonsCore__EmojiProxyModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: TextEmoticonsCore__EmojiProxyModel, callback: *const fn (TextEmoticonsCore__EmojiProxyModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1EmojiProxyModel.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEmoticonsCore__EmojiProxyModel `
    ///
    pub fn delete(self: TextEmoticonsCore__EmojiProxyModel) void {
        qtc.TextEmoticonsCore__EmojiProxyModel_Delete(@ptrCast(self.ptr));
    }
};
