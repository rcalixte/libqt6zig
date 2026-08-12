const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfig = @import("libqt6").KConfig;
const KConfigSkeletonItem = @import("libqt6").KConfigSkeletonItem;
const KCoreConfigSkeleton__ItemBool = @import("libqt6").KCoreConfigSkeleton__ItemBool;
const KCoreConfigSkeleton__ItemDateTime = @import("libqt6").KCoreConfigSkeleton__ItemDateTime;
const KCoreConfigSkeleton__ItemDouble = @import("libqt6").KCoreConfigSkeleton__ItemDouble;
const KCoreConfigSkeleton__ItemInt = @import("libqt6").KCoreConfigSkeleton__ItemInt;
const KCoreConfigSkeleton__ItemIntList = @import("libqt6").KCoreConfigSkeleton__ItemIntList;
const KCoreConfigSkeleton__ItemLongLong = @import("libqt6").KCoreConfigSkeleton__ItemLongLong;
const KCoreConfigSkeleton__ItemPassword = @import("libqt6").KCoreConfigSkeleton__ItemPassword;
const KCoreConfigSkeleton__ItemPath = @import("libqt6").KCoreConfigSkeleton__ItemPath;
const KCoreConfigSkeleton__ItemPoint = @import("libqt6").KCoreConfigSkeleton__ItemPoint;
const KCoreConfigSkeleton__ItemPointF = @import("libqt6").KCoreConfigSkeleton__ItemPointF;
const KCoreConfigSkeleton__ItemProperty = @import("libqt6").KCoreConfigSkeleton__ItemProperty;
const KCoreConfigSkeleton__ItemRect = @import("libqt6").KCoreConfigSkeleton__ItemRect;
const KCoreConfigSkeleton__ItemRectF = @import("libqt6").KCoreConfigSkeleton__ItemRectF;
const KCoreConfigSkeleton__ItemSize = @import("libqt6").KCoreConfigSkeleton__ItemSize;
const KCoreConfigSkeleton__ItemSizeF = @import("libqt6").KCoreConfigSkeleton__ItemSizeF;
const KCoreConfigSkeleton__ItemString = @import("libqt6").KCoreConfigSkeleton__ItemString;
const KCoreConfigSkeleton__ItemStringList = @import("libqt6").KCoreConfigSkeleton__ItemStringList;
const KCoreConfigSkeleton__ItemUInt = @import("libqt6").KCoreConfigSkeleton__ItemUInt;
const KCoreConfigSkeleton__ItemULongLong = @import("libqt6").KCoreConfigSkeleton__ItemULongLong;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QColor = @import("libqt6").QColor;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html)
pub const KConfigSkeleton = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KConfigSkeleton,

    pub const _is_KConfigSkeleton = {};
    pub const _is_KCoreConfigSkeleton = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KConfigSkeleton object in C++ memory
    ///
    pub fn new() KConfigSkeleton {
        return .{ .ptr = qtc.KConfigSkeleton_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KConfigSkeleton object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` configname: []const u8 `
    ///
    pub fn new2(configname: []const u8) KConfigSkeleton {
        const configname_str = qtc.libqt_string{
            .len = configname.len,
            .data = configname.ptr,
        };
        return .{ .ptr = qtc.KConfigSkeleton_new2(configname_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KConfigSkeleton object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` configname: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(configname: []const u8, _parent: anytype) KConfigSkeleton {
        const configname_str = qtc.libqt_string{
            .len = configname.len,
            .data = configname.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KConfigSkeleton_new3(configname_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn metaObject(self: KConfigSkeleton) QMetaObject {
        return .{ .ptr = qtc.KConfigSkeleton_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KConfigSkeleton, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KConfigSkeleton_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn superMetaObject(self: KConfigSkeleton) QMetaObject {
        return .{ .ptr = qtc.KConfigSkeleton_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KConfigSkeleton, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KConfigSkeleton_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KConfigSkeleton_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KConfigSkeleton, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KConfigSkeleton_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KConfigSkeleton, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KConfigSkeleton_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KConfigSkeleton_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KConfigSkeleton, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KConfigSkeleton_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigSkeleton.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addItemColor` instead
    ///
    pub const AddItemColor = addItemColor;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QColor `
    ///
    pub fn addItemColor(self: KConfigSkeleton, name: []const u8, reference: anytype) KConfigSkeleton__ItemColor {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QColor;
        return .{ .ptr = qtc.KConfigSkeleton_AddItemColor(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemFont` instead
    ///
    pub const AddItemFont = addItemFont;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QFont `
    ///
    pub fn addItemFont(self: KConfigSkeleton, name: []const u8, reference: anytype) KConfigSkeleton__ItemFont {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QFont;
        return .{ .ptr = qtc.KConfigSkeleton_AddItemFont(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigSkeleton.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigSkeleton.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addItemColor3` instead
    ///
    pub const AddItemColor3 = addItemColor3;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QColor `
    ///
    /// ` defaultValue: QColor `
    ///
    pub fn addItemColor3(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KConfigSkeleton__ItemColor {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QColor;
        comptime _ = @TypeOf(defaultValue)._is_QColor;
        return .{ .ptr = qtc.KConfigSkeleton_AddItemColor3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemColor4` instead
    ///
    pub const AddItemColor4 = addItemColor4;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QColor `
    ///
    /// ` defaultValue: QColor `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemColor4(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KConfigSkeleton__ItemColor {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QColor;
        comptime _ = @TypeOf(defaultValue)._is_QColor;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KConfigSkeleton_AddItemColor4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemFont3` instead
    ///
    pub const AddItemFont3 = addItemFont3;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QFont `
    ///
    /// ` defaultValue: QFont `
    ///
    pub fn addItemFont3(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KConfigSkeleton__ItemFont {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QFont;
        comptime _ = @TypeOf(defaultValue)._is_QFont;
        return .{ .ptr = qtc.KConfigSkeleton_AddItemFont3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemFont4` instead
    ///
    pub const AddItemFont4 = addItemFont4;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QFont `
    ///
    /// ` defaultValue: QFont `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemFont4(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KConfigSkeleton__ItemFont {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QFont;
        comptime _ = @TypeOf(defaultValue)._is_QFont;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KConfigSkeleton_AddItemFont4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `load` instead
    ///
    pub const Load = load;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn load(self: KConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_Load(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn read(self: KConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_Read(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDefaults` instead
    ///
    pub const IsDefaults = isDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isDefaults)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn isDefaults(self: KConfigSkeleton) bool {
        return qtc.KCoreConfigSkeleton_IsDefaults(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSaveNeeded` instead
    ///
    pub const IsSaveNeeded = isSaveNeeded;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isSaveNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn isSaveNeeded(self: KConfigSkeleton) bool {
        return qtc.KCoreConfigSkeleton_IsSaveNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentGroup` instead
    ///
    pub const SetCurrentGroup = setCurrentGroup;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setCurrentGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` group: []const u8 `
    ///
    pub fn setCurrentGroup(self: KConfigSkeleton, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KCoreConfigSkeleton_SetCurrentGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `currentGroup` instead
    ///
    pub const CurrentGroup = currentGroup;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#currentGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentGroup(self: KConfigSkeleton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCoreConfigSkeleton_CurrentGroup(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigSkeleton.currentGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` item: KConfigSkeletonItem `
    ///
    pub fn addItem(self: KConfigSkeleton, item: anytype) void {
        comptime _ = @TypeOf(item)._is_KConfigSkeletonItem;
        qtc.KCoreConfigSkeleton_AddItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `addItemString` instead
    ///
    pub const AddItemString = addItemString;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn addItemString(self: KConfigSkeleton, name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemString {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemString(@ptrCast(self.ptr), name_str, reference_str) };
    }

    /// ### DEPRECATED: Use `addItemPassword` instead
    ///
    pub const AddItemPassword = addItemPassword;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn addItemPassword(self: KConfigSkeleton, name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemPassword {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPassword(@ptrCast(self.ptr), name_str, reference_str) };
    }

    /// ### DEPRECATED: Use `addItemPath` instead
    ///
    pub const AddItemPath = addItemPath;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn addItemPath(self: KConfigSkeleton, name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemPath {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPath(@ptrCast(self.ptr), name_str, reference_str) };
    }

    /// ### DEPRECATED: Use `addItemProperty` instead
    ///
    pub const AddItemProperty = addItemProperty;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    pub fn addItemProperty(self: KConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QVariant;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemProperty(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemBool` instead
    ///
    pub const AddItemBool = addItemBool;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    pub fn addItemBool(self: KConfigSkeleton, name: []const u8, reference: *bool) KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemBool(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemInt` instead
    ///
    pub const AddItemInt = addItemInt;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    pub fn addItemInt(self: KConfigSkeleton, name: []const u8, reference: *i32) KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemInt(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemUInt` instead
    ///
    pub const AddItemUInt = addItemUInt;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    pub fn addItemUInt(self: KConfigSkeleton, name: []const u8, reference: *u32) KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemUInt(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemLongLong` instead
    ///
    pub const AddItemLongLong = addItemLongLong;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    pub fn addItemLongLong(self: KConfigSkeleton, name: []const u8, reference: *i64) KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemLongLong(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemULongLong` instead
    ///
    pub const AddItemULongLong = addItemULongLong;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    pub fn addItemULongLong(self: KConfigSkeleton, name: []const u8, reference: *u64) KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemULongLong(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemDouble` instead
    ///
    pub const AddItemDouble = addItemDouble;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    pub fn addItemDouble(self: KConfigSkeleton, name: []const u8, reference: *f64) KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDouble(@ptrCast(self.ptr), name_str, @ptrCast(reference)) };
    }

    /// ### DEPRECATED: Use `addItemRect` instead
    ///
    pub const AddItemRect = addItemRect;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    pub fn addItemRect(self: KConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRect;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRect(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemRectF` instead
    ///
    pub const AddItemRectF = addItemRectF;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    pub fn addItemRectF(self: KConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRectF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRectF(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemPoint` instead
    ///
    pub const AddItemPoint = addItemPoint;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    pub fn addItemPoint(self: KConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPoint;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPoint(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemPointF` instead
    ///
    pub const AddItemPointF = addItemPointF;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    pub fn addItemPointF(self: KConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPointF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPointF(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemSize` instead
    ///
    pub const AddItemSize = addItemSize;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    pub fn addItemSize(self: KConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSize;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSize(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemSizeF` instead
    ///
    pub const AddItemSizeF = addItemSizeF;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    pub fn addItemSizeF(self: KConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSizeF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSizeF(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemDateTime` instead
    ///
    pub const AddItemDateTime = addItemDateTime;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    pub fn addItemDateTime(self: KConfigSkeleton, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QDateTime;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDateTime(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemStringList` instead
    ///
    pub const AddItemStringList = addItemStringList;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    pub fn addItemStringList(self: KConfigSkeleton, allocator: std.mem.Allocator, name: []const u8, reference: []const []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("KConfigSkeleton.addItemStringList: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |str_item, i|
            reference_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemStringList(@ptrCast(self.ptr), name_str, reference_list) };
    }

    /// ### DEPRECATED: Use `addItemIntList` instead
    ///
    pub const AddItemIntList = addItemIntList;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    pub fn addItemIntList(self: KConfigSkeleton, name: []const u8, reference: []i32) KCoreConfigSkeleton__ItemIntList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemIntList(@ptrCast(self.ptr), name_str, reference_list) };
    }

    /// ### DEPRECATED: Use `config` instead
    ///
    pub const Config = config;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn config(self: KConfigSkeleton) KConfig {
        return .{ .ptr = qtc.KCoreConfigSkeleton_Config(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `config2` instead
    ///
    pub const Config2 = config2;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn config2(self: KConfigSkeleton) KConfig {
        return .{ .ptr = qtc.KCoreConfigSkeleton_Config2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `items` instead
    ///
    pub const Items = items;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn items(self: KConfigSkeleton, allocator: std.mem.Allocator) []KConfigSkeletonItem {
        const _arr: qtc.libqt_list = qtc.KCoreConfigSkeleton_Items(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KConfigSkeletonItem, _arr.len) catch @panic("KConfigSkeleton.items: Memory allocation failed");
        const _data_val: [*]QtC.KConfigSkeletonItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `removeItem` instead
    ///
    pub const RemoveItem = removeItem;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    pub fn removeItem(self: KConfigSkeleton, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KCoreConfigSkeleton_RemoveItem(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `clearItems` instead
    ///
    pub const ClearItems = clearItems;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#clearItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn clearItems(self: KConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_ClearItems(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImmutable` instead
    ///
    pub const IsImmutable = isImmutable;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#isImmutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    pub fn isImmutable(self: KConfigSkeleton, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_IsImmutable(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `findItem` instead
    ///
    pub const FindItem = findItem;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#findItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    pub fn findItem(self: KConfigSkeleton, name: []const u8) KConfigSkeletonItem {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_FindItem(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn save(self: KConfigSkeleton) bool {
        return qtc.KCoreConfigSkeleton_Save(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `configChanged` instead
    ///
    pub const ConfigChanged = configChanged;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn configChanged(self: KConfigSkeleton) void {
        qtc.KCoreConfigSkeleton_ConfigChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onConfigChanged` instead
    ///
    pub const OnConfigChanged = onConfigChanged;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KConfigSkeleton) callconv(.c) void `
    ///
    pub fn onConfigChanged(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_Connect_ConfigChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addItem2` instead
    ///
    pub const AddItem2 = addItem2;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` item: KConfigSkeletonItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn addItem2(self: KConfigSkeleton, item: anytype, name: []const u8) void {
        comptime _ = @TypeOf(item)._is_KConfigSkeletonItem;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KCoreConfigSkeleton_AddItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), name_str);
    }

    /// ### DEPRECATED: Use `addItemString3` instead
    ///
    pub const AddItemString3 = addItemString3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn addItemString3(self: KConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemString {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemString3(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str) };
    }

    /// ### DEPRECATED: Use `addItemString4` instead
    ///
    pub const AddItemString4 = addItemString4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemString4(self: KConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) KCoreConfigSkeleton__ItemString {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemString4(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str, key_str) };
    }

    /// ### DEPRECATED: Use `addItemPassword3` instead
    ///
    pub const AddItemPassword3 = addItemPassword3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn addItemPassword3(self: KConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemPassword {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPassword3(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str) };
    }

    /// ### DEPRECATED: Use `addItemPassword4` instead
    ///
    pub const AddItemPassword4 = addItemPassword4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemPassword4(self: KConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) KCoreConfigSkeleton__ItemPassword {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPassword4(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str, key_str) };
    }

    /// ### DEPRECATED: Use `addItemPath3` instead
    ///
    pub const AddItemPath3 = addItemPath3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn addItemPath3(self: KConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemPath {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPath3(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str) };
    }

    /// ### DEPRECATED: Use `addItemPath4` instead
    ///
    pub const AddItemPath4 = addItemPath4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemPath4(self: KConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) KCoreConfigSkeleton__ItemPath {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPath4(@ptrCast(self.ptr), name_str, reference_str, defaultValue_str, key_str) };
    }

    /// ### DEPRECATED: Use `addItemProperty3` instead
    ///
    pub const AddItemProperty3 = addItemProperty3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn addItemProperty3(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QVariant;
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemProperty3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemProperty4` instead
    ///
    pub const AddItemProperty4 = addItemProperty4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    /// ` defaultValue: QVariant `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemProperty4(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QVariant;
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemProperty4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemBool3` instead
    ///
    pub const AddItemBool3 = addItemBool3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn addItemBool3(self: KConfigSkeleton, name: []const u8, reference: *bool, defaultValue: bool) KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemBool3(@ptrCast(self.ptr), name_str, @ptrCast(reference), defaultValue) };
    }

    /// ### DEPRECATED: Use `addItemBool4` instead
    ///
    pub const AddItemBool4 = addItemBool4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    /// ` defaultValue: bool `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemBool4(self: KConfigSkeleton, name: []const u8, reference: *bool, defaultValue: bool, key: []const u8) KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemBool4(@ptrCast(self.ptr), name_str, @ptrCast(reference), defaultValue, key_str) };
    }

    /// ### DEPRECATED: Use `addItemInt3` instead
    ///
    pub const AddItemInt3 = addItemInt3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn addItemInt3(self: KConfigSkeleton, name: []const u8, reference: *i32, defaultValue: i32) KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemInt3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemInt4` instead
    ///
    pub const AddItemInt4 = addItemInt4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` defaultValue: i32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemInt4(self: KConfigSkeleton, name: []const u8, reference: *i32, defaultValue: i32, key: []const u8) KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemInt4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemUInt3` instead
    ///
    pub const AddItemUInt3 = addItemUInt3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    /// ` defaultValue: u32 `
    ///
    pub fn addItemUInt3(self: KConfigSkeleton, name: []const u8, reference: *u32, defaultValue: u32) KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemUInt3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemUInt4` instead
    ///
    pub const AddItemUInt4 = addItemUInt4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    /// ` defaultValue: u32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemUInt4(self: KConfigSkeleton, name: []const u8, reference: *u32, defaultValue: u32, key: []const u8) KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemUInt4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemLongLong3` instead
    ///
    pub const AddItemLongLong3 = addItemLongLong3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn addItemLongLong3(self: KConfigSkeleton, name: []const u8, reference: *i64, defaultValue: i64) KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemLongLong3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemLongLong4` instead
    ///
    pub const AddItemLongLong4 = addItemLongLong4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    /// ` defaultValue: i64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemLongLong4(self: KConfigSkeleton, name: []const u8, reference: *i64, defaultValue: i64, key: []const u8) KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemLongLong4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemULongLong3` instead
    ///
    pub const AddItemULongLong3 = addItemULongLong3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    /// ` defaultValue: u64 `
    ///
    pub fn addItemULongLong3(self: KConfigSkeleton, name: []const u8, reference: *u64, defaultValue: u64) KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemULongLong3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemULongLong4` instead
    ///
    pub const AddItemULongLong4 = addItemULongLong4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    /// ` defaultValue: u64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemULongLong4(self: KConfigSkeleton, name: []const u8, reference: *u64, defaultValue: u64, key: []const u8) KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemULongLong4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemDouble3` instead
    ///
    pub const AddItemDouble3 = addItemDouble3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn addItemDouble3(self: KConfigSkeleton, name: []const u8, reference: *f64, defaultValue: f64) KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDouble3(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue)) };
    }

    /// ### DEPRECATED: Use `addItemDouble4` instead
    ///
    pub const AddItemDouble4 = addItemDouble4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    /// ` defaultValue: f64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemDouble4(self: KConfigSkeleton, name: []const u8, reference: *f64, defaultValue: f64, key: []const u8) KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDouble4(@ptrCast(self.ptr), name_str, @ptrCast(reference), @bitCast(defaultValue), key_str) };
    }

    /// ### DEPRECATED: Use `addItemRect3` instead
    ///
    pub const AddItemRect3 = addItemRect3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    /// ` defaultValue: QRect `
    ///
    pub fn addItemRect3(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRect;
        comptime _ = @TypeOf(defaultValue)._is_QRect;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRect3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemRect4` instead
    ///
    pub const AddItemRect4 = addItemRect4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    /// ` defaultValue: QRect `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemRect4(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRect;
        comptime _ = @TypeOf(defaultValue)._is_QRect;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRect4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemRectF3` instead
    ///
    pub const AddItemRectF3 = addItemRectF3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    /// ` defaultValue: QRectF `
    ///
    pub fn addItemRectF3(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRectF;
        comptime _ = @TypeOf(defaultValue)._is_QRectF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRectF3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemRectF4` instead
    ///
    pub const AddItemRectF4 = addItemRectF4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    /// ` defaultValue: QRectF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemRectF4(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QRectF;
        comptime _ = @TypeOf(defaultValue)._is_QRectF;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemRectF4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemPoint3` instead
    ///
    pub const AddItemPoint3 = addItemPoint3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    /// ` defaultValue: QPoint `
    ///
    pub fn addItemPoint3(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPoint;
        comptime _ = @TypeOf(defaultValue)._is_QPoint;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPoint3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemPoint4` instead
    ///
    pub const AddItemPoint4 = addItemPoint4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    /// ` defaultValue: QPoint `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemPoint4(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPoint;
        comptime _ = @TypeOf(defaultValue)._is_QPoint;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPoint4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemPointF3` instead
    ///
    pub const AddItemPointF3 = addItemPointF3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    /// ` defaultValue: QPointF `
    ///
    pub fn addItemPointF3(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPointF;
        comptime _ = @TypeOf(defaultValue)._is_QPointF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPointF3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemPointF4` instead
    ///
    pub const AddItemPointF4 = addItemPointF4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    /// ` defaultValue: QPointF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemPointF4(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QPointF;
        comptime _ = @TypeOf(defaultValue)._is_QPointF;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemPointF4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemSize3` instead
    ///
    pub const AddItemSize3 = addItemSize3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    /// ` defaultValue: QSize `
    ///
    pub fn addItemSize3(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSize;
        comptime _ = @TypeOf(defaultValue)._is_QSize;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSize3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemSize4` instead
    ///
    pub const AddItemSize4 = addItemSize4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    /// ` defaultValue: QSize `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemSize4(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSize;
        comptime _ = @TypeOf(defaultValue)._is_QSize;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSize4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemSizeF3` instead
    ///
    pub const AddItemSizeF3 = addItemSizeF3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    /// ` defaultValue: QSizeF `
    ///
    pub fn addItemSizeF3(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSizeF;
        comptime _ = @TypeOf(defaultValue)._is_QSizeF;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSizeF3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemSizeF4` instead
    ///
    pub const AddItemSizeF4 = addItemSizeF4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    /// ` defaultValue: QSizeF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemSizeF4(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QSizeF;
        comptime _ = @TypeOf(defaultValue)._is_QSizeF;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemSizeF4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemDateTime3` instead
    ///
    pub const AddItemDateTime3 = addItemDateTime3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    /// ` defaultValue: QDateTime `
    ///
    pub fn addItemDateTime3(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QDateTime;
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDateTime3(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `addItemDateTime4` instead
    ///
    pub const AddItemDateTime4 = addItemDateTime4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    /// ` defaultValue: QDateTime `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemDateTime4(self: KConfigSkeleton, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QDateTime;
        comptime _ = @TypeOf(defaultValue)._is_QDateTime;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemDateTime4(@ptrCast(self.ptr), name_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `addItemStringList3` instead
    ///
    pub const AddItemStringList3 = addItemStringList3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    /// ` defaultValue: []const []const u8 `
    ///
    pub fn addItemStringList3(self: KConfigSkeleton, allocator: std.mem.Allocator, name: []const u8, reference: []const []const u8, defaultValue: []const []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("KConfigSkeleton.addItemStringList3: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |str_item, i|
            reference_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("KConfigSkeleton.addItemStringList3: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |str_item, i|
            defaultValue_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemStringList3(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list) };
    }

    /// ### DEPRECATED: Use `addItemStringList4` instead
    ///
    pub const AddItemStringList4 = addItemStringList4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    /// ` defaultValue: []const []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemStringList4(self: KConfigSkeleton, allocator: std.mem.Allocator, name: []const u8, reference: []const []const u8, defaultValue: []const []const u8, key: []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("KConfigSkeleton.addItemStringList4: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |str_item, i|
            reference_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("KConfigSkeleton.addItemStringList4: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |str_item, i|
            defaultValue_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemStringList4(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list, key_str) };
    }

    /// ### DEPRECATED: Use `addItemIntList3` instead
    ///
    pub const AddItemIntList3 = addItemIntList3;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    /// ` defaultValue: []i32 `
    ///
    pub fn addItemIntList3(self: KConfigSkeleton, name: []const u8, reference: []i32, defaultValue: []i32) KCoreConfigSkeleton__ItemIntList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemIntList3(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list) };
    }

    /// ### DEPRECATED: Use `addItemIntList4` instead
    ///
    pub const AddItemIntList4 = addItemIntList4;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    /// ` defaultValue: []i32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemIntList4(self: KConfigSkeleton, name: []const u8, reference: []i32, defaultValue: []i32, key: []const u8) KCoreConfigSkeleton__ItemIntList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference.ptr,
        };
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KCoreConfigSkeleton_AddItemIntList4(@ptrCast(self.ptr), name_str, reference_list, defaultValue_list, key_str) };
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KConfigSkeleton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigSkeleton.objectName: Memory allocation failed");
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KConfigSkeleton, name: []const u8) void {
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn isWidgetType(self: KConfigSkeleton) bool {
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn isWindowType(self: KConfigSkeleton) bool {
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn isQuickItemType(self: KConfigSkeleton) bool {
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn signalsBlocked(self: KConfigSkeleton) bool {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KConfigSkeleton, b: bool) bool {
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn thread(self: KConfigSkeleton) QThread {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KConfigSkeleton, _thread: anytype) bool {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KConfigSkeleton, interval: i32) i32 {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KConfigSkeleton, time: i64) i32 {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KConfigSkeleton, id: i32) void {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KConfigSkeleton, id: i32) void {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KConfigSkeleton, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KConfigSkeleton.children: Memory allocation failed");
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KConfigSkeleton, _parent: anytype) void {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KConfigSkeleton, filterObj: anytype) void {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KConfigSkeleton, obj: anytype) void {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KConfigSkeleton, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn disconnect3(self: KConfigSkeleton) bool {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KConfigSkeleton, receiver: anytype) bool {
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn dumpObjectTree(self: KConfigSkeleton) void {
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn dumpObjectInfo(self: KConfigSkeleton) void {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KConfigSkeleton, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KConfigSkeleton, name: [:0]const u8) QVariant {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KConfigSkeleton, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KConfigSkeleton.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigSkeleton.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn bindingStorage(self: KConfigSkeleton) QBindingStorage {
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn bindingStorage2(self: KConfigSkeleton) QBindingStorage {
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn destroyed(self: KConfigSkeleton) void {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KConfigSkeleton) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton) callconv(.c) void) void {
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn parent(self: KConfigSkeleton) QObject {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KConfigSkeleton, classname: [:0]const u8) bool {
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn deleteLater(self: KConfigSkeleton) void {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KConfigSkeleton, interval: i32, timerType: i32) i32 {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KConfigSkeleton, time: i64, timerType: i32) i32 {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KConfigSkeleton, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KConfigSkeleton, signal: [:0]const u8) bool {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KConfigSkeleton, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KConfigSkeleton, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KConfigSkeleton, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KConfigSkeleton, param1: anytype) void {
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setDefaults` instead
    ///
    pub const SetDefaults = setDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn setDefaults(self: KConfigSkeleton) void {
        qtc.KConfigSkeleton_SetDefaults(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSetDefaults` instead
    ///
    pub const SuperSetDefaults = superSetDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn superSetDefaults(self: KConfigSkeleton) void {
        qtc.KConfigSkeleton_SuperSetDefaults(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSetDefaults` instead
    ///
    pub const OnSetDefaults = onSetDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onSetDefaults(self: KConfigSkeleton, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigSkeleton_OnSetDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `useDefaults` instead
    ///
    pub const UseDefaults = useDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn useDefaults(self: KConfigSkeleton, b: bool) bool {
        return qtc.KConfigSkeleton_UseDefaults(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `superUseDefaults` instead
    ///
    pub const SuperUseDefaults = superUseDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn superUseDefaults(self: KConfigSkeleton, b: bool) bool {
        return qtc.KConfigSkeleton_SuperUseDefaults(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onUseDefaults` instead
    ///
    pub const OnUseDefaults = onUseDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, b: bool) callconv(.c) bool `
    ///
    pub fn onUseDefaults(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, bool) callconv(.c) bool) void {
        qtc.KConfigSkeleton_OnUseDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `usrUseDefaults` instead
    ///
    pub const UsrUseDefaults = usrUseDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn usrUseDefaults(self: KConfigSkeleton, b: bool) bool {
        return qtc.KConfigSkeleton_UsrUseDefaults(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `superUsrUseDefaults` instead
    ///
    pub const SuperUsrUseDefaults = superUsrUseDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    /// ` b: bool `
    ///
    pub fn superUsrUseDefaults(self: KConfigSkeleton, b: bool) bool {
        return qtc.KConfigSkeleton_SuperUsrUseDefaults(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onUsrUseDefaults` instead
    ///
    pub const OnUsrUseDefaults = onUsrUseDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, b: bool) callconv(.c) bool `
    ///
    pub fn onUsrUseDefaults(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, bool) callconv(.c) bool) void {
        qtc.KConfigSkeleton_OnUsrUseDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `usrSetDefaults` instead
    ///
    pub const UsrSetDefaults = usrSetDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn usrSetDefaults(self: KConfigSkeleton) void {
        qtc.KConfigSkeleton_UsrSetDefaults(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUsrSetDefaults` instead
    ///
    pub const SuperUsrSetDefaults = superUsrSetDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn superUsrSetDefaults(self: KConfigSkeleton) void {
        qtc.KConfigSkeleton_SuperUsrSetDefaults(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUsrSetDefaults` instead
    ///
    pub const OnUsrSetDefaults = onUsrSetDefaults;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUsrSetDefaults(self: KConfigSkeleton, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigSkeleton_OnUsrSetDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `usrRead` instead
    ///
    pub const UsrRead = usrRead;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn usrRead(self: KConfigSkeleton) void {
        qtc.KConfigSkeleton_UsrRead(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUsrRead` instead
    ///
    pub const SuperUsrRead = superUsrRead;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn superUsrRead(self: KConfigSkeleton) void {
        qtc.KConfigSkeleton_SuperUsrRead(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUsrRead` instead
    ///
    pub const OnUsrRead = onUsrRead;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUsrRead(self: KConfigSkeleton, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigSkeleton_OnUsrRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `usrSave` instead
    ///
    pub const UsrSave = usrSave;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn usrSave(self: KConfigSkeleton) bool {
        return qtc.KConfigSkeleton_UsrSave(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUsrSave` instead
    ///
    pub const SuperUsrSave = superUsrSave;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn superUsrSave(self: KConfigSkeleton) bool {
        return qtc.KConfigSkeleton_SuperUsrSave(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUsrSave` instead
    ///
    pub const OnUsrSave = onUsrSave;

    /// Inherited from KCoreConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onUsrSave(self: KConfigSkeleton, callback: *const fn () callconv(.c) bool) void {
        qtc.KConfigSkeleton_OnUsrSave(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KConfigSkeleton, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KConfigSkeleton_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KConfigSkeleton, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KConfigSkeleton_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, QEvent) callconv(.c) bool) void {
        qtc.KConfigSkeleton_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KConfigSkeleton, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KConfigSkeleton_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KConfigSkeleton, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KConfigSkeleton_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, QObject, QEvent) callconv(.c) bool) void {
        qtc.KConfigSkeleton_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KConfigSkeleton, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KConfigSkeleton_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KConfigSkeleton, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KConfigSkeleton_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, QTimerEvent) callconv(.c) void) void {
        qtc.KConfigSkeleton_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KConfigSkeleton, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KConfigSkeleton_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KConfigSkeleton, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KConfigSkeleton_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, QChildEvent) callconv(.c) void) void {
        qtc.KConfigSkeleton_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KConfigSkeleton, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KConfigSkeleton_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KConfigSkeleton, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KConfigSkeleton_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, QEvent) callconv(.c) void) void {
        qtc.KConfigSkeleton_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KConfigSkeleton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigSkeleton_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KConfigSkeleton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigSkeleton_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, QMetaMethod) callconv(.c) void) void {
        qtc.KConfigSkeleton_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KConfigSkeleton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigSkeleton_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KConfigSkeleton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigSkeleton_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, QMetaMethod) callconv(.c) void) void {
        qtc.KConfigSkeleton_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn sender(self: KConfigSkeleton) QObject {
        return .{ .ptr = qtc.KConfigSkeleton_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn superSender(self: KConfigSkeleton) QObject {
        return .{ .ptr = qtc.KConfigSkeleton_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KConfigSkeleton, callback: *const fn () callconv(.c) QObject) void {
        qtc.KConfigSkeleton_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn senderSignalIndex(self: KConfigSkeleton) i32 {
        return qtc.KConfigSkeleton_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KConfigSkeleton `
    ///
    pub fn superSenderSignalIndex(self: KConfigSkeleton) i32 {
        return qtc.KConfigSkeleton_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KConfigSkeleton, callback: *const fn () callconv(.c) i32) void {
        qtc.KConfigSkeleton_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KConfigSkeleton, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KConfigSkeleton_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KConfigSkeleton, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KConfigSkeleton_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, [*:0]const u8) callconv(.c) i32) void {
        qtc.KConfigSkeleton_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KConfigSkeleton, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KConfigSkeleton_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KConfigSkeleton, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KConfigSkeleton_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigSkeleton`
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, QMetaMethod) callconv(.c) bool) void {
        qtc.KConfigSkeleton_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigSkeleton `
    ///
    /// ` callback: *const fn (self: KConfigSkeleton, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KConfigSkeleton, callback: *const fn (KConfigSkeleton, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#dtor.KConfigSkeleton)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigSkeleton `
    ///
    pub fn delete(self: KConfigSkeleton) void {
        qtc.KConfigSkeleton_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QColor>

/// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html)
pub const KConfigSkeleton__ItemColor = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KConfigSkeleton__ItemColor,

    pub const _is_KConfigSkeleton__ItemColor = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KConfigSkeleton::ItemColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QColor `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: anytype) KConfigSkeleton__ItemColor {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QColor;
        return .{ .ptr = qtc.KConfigSkeleton__ItemColor_new(_group_str, _key_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KConfigSkeleton::ItemColor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QColor `
    ///
    /// ` defaultValue: QColor `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KConfigSkeleton__ItemColor {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QColor;
        comptime _ = @TypeOf(defaultValue)._is_QColor;
        return .{ .ptr = qtc.KConfigSkeleton__ItemColor_new2(_group_str, _key_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemColor `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KConfigSkeleton__ItemColor, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KConfigSkeleton__ItemColor_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton__ItemColor `
    ///
    /// ` callback: *const fn (self: KConfigSkeleton__ItemColor, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KConfigSkeleton__ItemColor, callback: *const fn (KConfigSkeleton__ItemColor, KConfig) callconv(.c) void) void {
        qtc.KConfigSkeleton__ItemColor_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemColor `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KConfigSkeleton__ItemColor, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KConfigSkeleton__ItemColor_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemColor `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KConfigSkeleton__ItemColor, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KConfigSkeleton__ItemColor_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton__ItemColor `
    ///
    /// ` callback: *const fn (self: KConfigSkeleton__ItemColor, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KConfigSkeleton__ItemColor, callback: *const fn (KConfigSkeleton__ItemColor, QVariant) callconv(.c) void) void {
        qtc.KConfigSkeleton__ItemColor_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemColor `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KConfigSkeleton__ItemColor, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KConfigSkeleton__ItemColor_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemColor `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KConfigSkeleton__ItemColor, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KConfigSkeleton__ItemColor_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton__ItemColor `
    ///
    /// ` callback: *const fn (self: KConfigSkeleton__ItemColor, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KConfigSkeleton__ItemColor, callback: *const fn (KConfigSkeleton__ItemColor, QVariant) callconv(.c) bool) void {
        qtc.KConfigSkeleton__ItemColor_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemColor `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KConfigSkeleton__ItemColor, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KConfigSkeleton__ItemColor_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemColor `
    ///
    pub fn property(self: KConfigSkeleton__ItemColor) QVariant {
        return .{ .ptr = qtc.KConfigSkeleton__ItemColor_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton__ItemColor `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KConfigSkeleton__ItemColor, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KConfigSkeleton__ItemColor_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemcolor.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemColor `
    ///
    pub fn superProperty(self: KConfigSkeleton__ItemColor) QVariant {
        return .{ .ptr = qtc.KConfigSkeleton__ItemColor_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigSkeleton__ItemColor `
    ///
    pub fn delete(self: KConfigSkeleton__ItemColor) void {
        qtc.KConfigSkeleton__ItemColor_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable KConfigSkeletonGenericItem<QFont>

/// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html)
pub const KConfigSkeleton__ItemFont = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KConfigSkeleton__ItemFont,

    pub const _is_KConfigSkeleton__ItemFont = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KConfigSkeleton::ItemFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QFont `
    ///
    pub fn new(_group: []const u8, _key: []const u8, reference: anytype) KConfigSkeleton__ItemFont {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QFont;
        return .{ .ptr = qtc.KConfigSkeleton__ItemFont_new(_group_str, _key_str, @ptrCast(reference.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KConfigSkeleton::ItemFont object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _group: []const u8 `
    ///
    /// ` _key: []const u8 `
    ///
    /// ` reference: QFont `
    ///
    /// ` defaultValue: QFont `
    ///
    pub fn new2(_group: []const u8, _key: []const u8, reference: anytype, defaultValue: anytype) KConfigSkeleton__ItemFont {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };
        comptime _ = @TypeOf(reference)._is_QFont;
        comptime _ = @TypeOf(defaultValue)._is_QFont;
        return .{ .ptr = qtc.KConfigSkeleton__ItemFont_new2(_group_str, _key_str, @ptrCast(reference.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `readConfig` instead
    ///
    pub const ReadConfig = readConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#readConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemFont `
    ///
    /// ` _config: KConfig `
    ///
    pub fn readConfig(self: KConfigSkeleton__ItemFont, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KConfigSkeleton__ItemFont_ReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `onReadConfig` instead
    ///
    pub const OnReadConfig = onReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton__ItemFont `
    ///
    /// ` callback: *const fn (self: KConfigSkeleton__ItemFont, config: KConfig) callconv(.c) void `
    ///
    pub fn onReadConfig(self: KConfigSkeleton__ItemFont, callback: *const fn (KConfigSkeleton__ItemFont, KConfig) callconv(.c) void) void {
        qtc.KConfigSkeleton__ItemFont_OnReadConfig(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadConfig` instead
    ///
    pub const SuperReadConfig = superReadConfig;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemFont `
    ///
    /// ` _config: KConfig `
    ///
    pub fn superReadConfig(self: KConfigSkeleton__ItemFont, _config: anytype) void {
        comptime _ = @TypeOf(_config)._is_KConfig;
        qtc.KConfigSkeleton__ItemFont_SuperReadConfig(@ptrCast(self.ptr), @ptrCast(_config.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemFont `
    ///
    /// ` p: QVariant `
    ///
    pub fn setProperty(self: KConfigSkeleton__ItemFont, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KConfigSkeleton__ItemFont_SetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton__ItemFont `
    ///
    /// ` callback: *const fn (self: KConfigSkeleton__ItemFont, p: QVariant) callconv(.c) void `
    ///
    pub fn onSetProperty(self: KConfigSkeleton__ItemFont, callback: *const fn (KConfigSkeleton__ItemFont, QVariant) callconv(.c) void) void {
        qtc.KConfigSkeleton__ItemFont_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemFont `
    ///
    /// ` p: QVariant `
    ///
    pub fn superSetProperty(self: KConfigSkeleton__ItemFont, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QVariant;
        qtc.KConfigSkeleton__ItemFont_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `isEqual` instead
    ///
    pub const IsEqual = isEqual;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#isEqual)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemFont `
    ///
    /// ` p: QVariant `
    ///
    pub fn isEqual(self: KConfigSkeleton__ItemFont, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KConfigSkeleton__ItemFont_IsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `onIsEqual` instead
    ///
    pub const OnIsEqual = onIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton__ItemFont `
    ///
    /// ` callback: *const fn (self: KConfigSkeleton__ItemFont, p: QVariant) callconv(.c) bool `
    ///
    pub fn onIsEqual(self: KConfigSkeleton__ItemFont, callback: *const fn (KConfigSkeleton__ItemFont, QVariant) callconv(.c) bool) void {
        qtc.KConfigSkeleton__ItemFont_OnIsEqual(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsEqual` instead
    ///
    pub const SuperIsEqual = superIsEqual;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemFont `
    ///
    /// ` p: QVariant `
    ///
    pub fn superIsEqual(self: KConfigSkeleton__ItemFont, p: anytype) bool {
        comptime _ = @TypeOf(p)._is_QVariant;
        return qtc.KConfigSkeleton__ItemFont_SuperIsEqual(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemFont `
    ///
    pub fn property(self: KConfigSkeleton__ItemFont) QVariant {
        return .{ .ptr = qtc.KConfigSkeleton__ItemFont_Property(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigSkeleton__ItemFont `
    ///
    /// ` callback: *const fn () callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KConfigSkeleton__ItemFont, callback: *const fn () callconv(.c) QVariant) void {
        qtc.KConfigSkeleton__ItemFont_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton-itemfont.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigSkeleton__ItemFont `
    ///
    pub fn superProperty(self: KConfigSkeleton__ItemFont) QVariant {
        return .{ .ptr = qtc.KConfigSkeleton__ItemFont_SuperProperty(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigSkeleton__ItemFont `
    ///
    pub fn delete(self: KConfigSkeleton__ItemFont) void {
        qtc.KConfigSkeleton__ItemFont_Delete(@ptrCast(self.ptr));
    }
};
