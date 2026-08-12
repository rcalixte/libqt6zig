const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfig = @import("libqt6").KConfig;
const KConfigGroup = @import("libqt6").KConfigGroup;
const KConfigSkeletonItem = @import("libqt6").KConfigSkeletonItem;
const KConfigSkeleton__ItemColor = @import("libqt6").KConfigSkeleton__ItemColor;
const KConfigSkeleton__ItemFont = @import("libqt6").KConfigSkeleton__ItemFont;
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
const QIODevice = @import("libqt6").QIODevice;
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

/// ### [Upstream resources](https://api.kde.org/kconfigloader.html)
pub const KConfigLoader = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kconfigloader.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KConfigLoader,

    pub const _is_KConfigLoader = {};
    pub const _is_KConfigSkeleton = {};
    pub const _is_KCoreConfigSkeleton = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KConfigLoader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` configFile: []const u8 `
    ///
    /// ` xml: QIODevice `
    ///
    pub fn new(configFile: []const u8, xml: anytype) KConfigLoader {
        const configFile_str = qtc.libqt_string{
            .len = configFile.len,
            .data = configFile.ptr,
        };
        comptime _ = @TypeOf(xml)._is_QIODevice;
        return .{ .ptr = qtc.KConfigLoader_new(configFile_str, @ptrCast(xml.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KConfigLoader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _config: KConfigGroup `
    ///
    /// ` xml: QIODevice `
    ///
    pub fn new2(_config: anytype, xml: anytype) KConfigLoader {
        comptime _ = @TypeOf(_config)._is_KConfigGroup;
        comptime _ = @TypeOf(xml)._is_QIODevice;
        return .{ .ptr = qtc.KConfigLoader_new2(@ptrCast(_config.ptr), @ptrCast(xml.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KConfigLoader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` configFile: []const u8 `
    ///
    /// ` xml: QIODevice `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(configFile: []const u8, xml: anytype, _parent: anytype) KConfigLoader {
        const configFile_str = qtc.libqt_string{
            .len = configFile.len,
            .data = configFile.ptr,
        };
        comptime _ = @TypeOf(xml)._is_QIODevice;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KConfigLoader_new3(configFile_str, @ptrCast(xml.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KConfigLoader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _config: KConfigGroup `
    ///
    /// ` xml: QIODevice `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_config: anytype, xml: anytype, _parent: anytype) KConfigLoader {
        comptime _ = @TypeOf(_config)._is_KConfigGroup;
        comptime _ = @TypeOf(xml)._is_QIODevice;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KConfigLoader_new4(@ptrCast(_config.ptr), @ptrCast(xml.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `findItem` instead
    ///
    pub const FindItem = findItem;

    /// ### [Upstream resources](https://api.kde.org/kconfigloader.html#findItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` group: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn findItem(self: KConfigLoader, group: []const u8, key: []const u8) KConfigSkeletonItem {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KConfigLoader_FindItem(@ptrCast(self.ptr), group_str, key_str) };
    }

    /// ### DEPRECATED: Use `findItemByName` instead
    ///
    pub const FindItemByName = findItemByName;

    /// ### [Upstream resources](https://api.kde.org/kconfigloader.html#findItemByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    pub fn findItemByName(self: KConfigLoader, name: []const u8) KConfigSkeletonItem {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KConfigLoader_FindItemByName(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kconfigloader.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    pub fn property(self: KConfigLoader, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KConfigLoader_Property(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `hasGroup` instead
    ///
    pub const HasGroup = hasGroup;

    /// ### [Upstream resources](https://api.kde.org/kconfigloader.html#hasGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` group: []const u8 `
    ///
    pub fn hasGroup(self: KConfigLoader, group: []const u8) bool {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KConfigLoader_HasGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### DEPRECATED: Use `groupList` instead
    ///
    pub const GroupList = groupList;

    /// ### [Upstream resources](https://api.kde.org/kconfigloader.html#groupList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn groupList(self: KConfigLoader, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KConfigLoader_GroupList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KConfigLoader.groupList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigLoader.groupList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `usrSave` instead
    ///
    pub const UsrSave = usrSave;

    /// ### [Upstream resources](https://api.kde.org/kconfigloader.html#usrSave)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    pub fn usrSave(self: KConfigLoader) bool {
        return qtc.KConfigLoader_UsrSave(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUsrSave` instead
    ///
    pub const OnUsrSave = onUsrSave;

    /// ### [Upstream resources](https://api.kde.org/kconfigloader.html#usrSave)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onUsrSave(self: KConfigLoader, callback: *const fn () callconv(.c) bool) void {
        qtc.KConfigLoader_OnUsrSave(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUsrSave` instead
    ///
    pub const SuperUsrSave = superUsrSave;

    /// ### [Upstream resources](https://api.kde.org/kconfigloader.html#usrSave)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    pub fn superUsrSave(self: KConfigLoader) bool {
        return qtc.KConfigLoader_SuperUsrSave(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from KConfigSkeleton
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigLoader.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addItemColor` instead
    ///
    pub const AddItemColor = addItemColor;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QColor `
    ///
    pub fn addItemColor(self: KConfigLoader, name: []const u8, reference: anytype) KConfigSkeleton__ItemColor {
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

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QFont `
    ///
    pub fn addItemFont(self: KConfigLoader, name: []const u8, reference: anytype) KConfigSkeleton__ItemFont {
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

    /// Inherited from KConfigSkeleton
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigLoader.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from KConfigSkeleton
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigLoader.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addItemColor3` instead
    ///
    pub const AddItemColor3 = addItemColor3;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QColor `
    ///
    /// ` defaultValue: QColor `
    ///
    pub fn addItemColor3(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype) KConfigSkeleton__ItemColor {
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

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QColor `
    ///
    /// ` defaultValue: QColor `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemColor4(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KConfigSkeleton__ItemColor {
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

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QFont `
    ///
    /// ` defaultValue: QFont `
    ///
    pub fn addItemFont3(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype) KConfigSkeleton__ItemFont {
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

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#addItemFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QFont `
    ///
    /// ` defaultValue: QFont `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemFont4(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KConfigSkeleton__ItemFont {
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
    /// ` self: KConfigLoader `
    ///
    pub fn load(self: KConfigLoader) void {
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
    /// ` self: KConfigLoader `
    ///
    pub fn read(self: KConfigLoader) void {
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
    /// ` self: KConfigLoader `
    ///
    pub fn isDefaults(self: KConfigLoader) bool {
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
    /// ` self: KConfigLoader `
    ///
    pub fn isSaveNeeded(self: KConfigLoader) bool {
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
    /// ` self: KConfigLoader `
    ///
    /// ` group: []const u8 `
    ///
    pub fn setCurrentGroup(self: KConfigLoader, group: []const u8) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentGroup(self: KConfigLoader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KCoreConfigSkeleton_CurrentGroup(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigLoader.currentGroup: Memory allocation failed");
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
    /// ` self: KConfigLoader `
    ///
    /// ` item: KConfigSkeletonItem `
    ///
    pub fn addItem(self: KConfigLoader, item: anytype) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn addItemString(self: KConfigLoader, name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemString {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn addItemPassword(self: KConfigLoader, name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemPassword {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    pub fn addItemPath(self: KConfigLoader, name: []const u8, reference: []const u8) KCoreConfigSkeleton__ItemPath {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    pub fn addItemProperty(self: KConfigLoader, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemProperty {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    pub fn addItemBool(self: KConfigLoader, name: []const u8, reference: *bool) KCoreConfigSkeleton__ItemBool {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    pub fn addItemInt(self: KConfigLoader, name: []const u8, reference: *i32) KCoreConfigSkeleton__ItemInt {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    pub fn addItemUInt(self: KConfigLoader, name: []const u8, reference: *u32) KCoreConfigSkeleton__ItemUInt {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    pub fn addItemLongLong(self: KConfigLoader, name: []const u8, reference: *i64) KCoreConfigSkeleton__ItemLongLong {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    pub fn addItemULongLong(self: KConfigLoader, name: []const u8, reference: *u64) KCoreConfigSkeleton__ItemULongLong {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    pub fn addItemDouble(self: KConfigLoader, name: []const u8, reference: *f64) KCoreConfigSkeleton__ItemDouble {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    pub fn addItemRect(self: KConfigLoader, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemRect {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    pub fn addItemRectF(self: KConfigLoader, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemRectF {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    pub fn addItemPoint(self: KConfigLoader, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemPoint {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    pub fn addItemPointF(self: KConfigLoader, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemPointF {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    pub fn addItemSize(self: KConfigLoader, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemSize {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    pub fn addItemSizeF(self: KConfigLoader, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemSizeF {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    pub fn addItemDateTime(self: KConfigLoader, name: []const u8, reference: anytype) KCoreConfigSkeleton__ItemDateTime {
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
    /// ` self: KConfigLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    pub fn addItemStringList(self: KConfigLoader, allocator: std.mem.Allocator, name: []const u8, reference: []const []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("KConfigLoader.addItemStringList: Memory allocation failed");
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    pub fn addItemIntList(self: KConfigLoader, name: []const u8, reference: []i32) KCoreConfigSkeleton__ItemIntList {
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
    /// ` self: KConfigLoader `
    ///
    pub fn config(self: KConfigLoader) KConfig {
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
    /// ` self: KConfigLoader `
    ///
    pub fn config2(self: KConfigLoader) KConfig {
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
    /// ` self: KConfigLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn items(self: KConfigLoader, allocator: std.mem.Allocator) []KConfigSkeletonItem {
        const _arr: qtc.libqt_list = qtc.KCoreConfigSkeleton_Items(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KConfigSkeletonItem, _arr.len) catch @panic("KConfigLoader.items: Memory allocation failed");
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    pub fn removeItem(self: KConfigLoader, name: []const u8) void {
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
    /// ` self: KConfigLoader `
    ///
    pub fn clearItems(self: KConfigLoader) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    pub fn isImmutable(self: KConfigLoader, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_IsImmutable(@ptrCast(self.ptr), name_str);
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
    /// ` self: KConfigLoader `
    ///
    pub fn save(self: KConfigLoader) bool {
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
    /// ` self: KConfigLoader `
    ///
    pub fn configChanged(self: KConfigLoader) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` callback: *const fn (self: KConfigLoader) callconv(.c) void `
    ///
    pub fn onConfigChanged(self: KConfigLoader, callback: *const fn (KConfigLoader) callconv(.c) void) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` item: KConfigSkeletonItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn addItem2(self: KConfigLoader, item: anytype, name: []const u8) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn addItemString3(self: KConfigLoader, name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemString {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemString4(self: KConfigLoader, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) KCoreConfigSkeleton__ItemString {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn addItemPassword3(self: KConfigLoader, name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemPassword {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemPassword4(self: KConfigLoader, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) KCoreConfigSkeleton__ItemPassword {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn addItemPath3(self: KConfigLoader, name: []const u8, reference: []const u8, defaultValue: []const u8) KCoreConfigSkeleton__ItemPath {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemPath4(self: KConfigLoader, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) KCoreConfigSkeleton__ItemPath {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn addItemProperty3(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemProperty {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QVariant `
    ///
    /// ` defaultValue: QVariant `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemProperty4(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemProperty {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn addItemBool3(self: KConfigLoader, name: []const u8, reference: *bool, defaultValue: bool) KCoreConfigSkeleton__ItemBool {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *bool `
    ///
    /// ` defaultValue: bool `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemBool4(self: KConfigLoader, name: []const u8, reference: *bool, defaultValue: bool, key: []const u8) KCoreConfigSkeleton__ItemBool {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn addItemInt3(self: KConfigLoader, name: []const u8, reference: *i32, defaultValue: i32) KCoreConfigSkeleton__ItemInt {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i32 `
    ///
    /// ` defaultValue: i32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemInt4(self: KConfigLoader, name: []const u8, reference: *i32, defaultValue: i32, key: []const u8) KCoreConfigSkeleton__ItemInt {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    /// ` defaultValue: u32 `
    ///
    pub fn addItemUInt3(self: KConfigLoader, name: []const u8, reference: *u32, defaultValue: u32) KCoreConfigSkeleton__ItemUInt {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u32 `
    ///
    /// ` defaultValue: u32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemUInt4(self: KConfigLoader, name: []const u8, reference: *u32, defaultValue: u32, key: []const u8) KCoreConfigSkeleton__ItemUInt {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn addItemLongLong3(self: KConfigLoader, name: []const u8, reference: *i64, defaultValue: i64) KCoreConfigSkeleton__ItemLongLong {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *i64 `
    ///
    /// ` defaultValue: i64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemLongLong4(self: KConfigLoader, name: []const u8, reference: *i64, defaultValue: i64, key: []const u8) KCoreConfigSkeleton__ItemLongLong {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    /// ` defaultValue: u64 `
    ///
    pub fn addItemULongLong3(self: KConfigLoader, name: []const u8, reference: *u64, defaultValue: u64) KCoreConfigSkeleton__ItemULongLong {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *u64 `
    ///
    /// ` defaultValue: u64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemULongLong4(self: KConfigLoader, name: []const u8, reference: *u64, defaultValue: u64, key: []const u8) KCoreConfigSkeleton__ItemULongLong {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn addItemDouble3(self: KConfigLoader, name: []const u8, reference: *f64, defaultValue: f64) KCoreConfigSkeleton__ItemDouble {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: *f64 `
    ///
    /// ` defaultValue: f64 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemDouble4(self: KConfigLoader, name: []const u8, reference: *f64, defaultValue: f64, key: []const u8) KCoreConfigSkeleton__ItemDouble {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    /// ` defaultValue: QRect `
    ///
    pub fn addItemRect3(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemRect {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRect `
    ///
    /// ` defaultValue: QRect `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemRect4(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemRect {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    /// ` defaultValue: QRectF `
    ///
    pub fn addItemRectF3(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemRectF {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QRectF `
    ///
    /// ` defaultValue: QRectF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemRectF4(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemRectF {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    /// ` defaultValue: QPoint `
    ///
    pub fn addItemPoint3(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemPoint {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPoint `
    ///
    /// ` defaultValue: QPoint `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemPoint4(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemPoint {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    /// ` defaultValue: QPointF `
    ///
    pub fn addItemPointF3(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemPointF {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QPointF `
    ///
    /// ` defaultValue: QPointF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemPointF4(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemPointF {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    /// ` defaultValue: QSize `
    ///
    pub fn addItemSize3(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemSize {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSize `
    ///
    /// ` defaultValue: QSize `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemSize4(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemSize {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    /// ` defaultValue: QSizeF `
    ///
    pub fn addItemSizeF3(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemSizeF {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QSizeF `
    ///
    /// ` defaultValue: QSizeF `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemSizeF4(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemSizeF {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    /// ` defaultValue: QDateTime `
    ///
    pub fn addItemDateTime3(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype) KCoreConfigSkeleton__ItemDateTime {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: QDateTime `
    ///
    /// ` defaultValue: QDateTime `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemDateTime4(self: KConfigLoader, name: []const u8, reference: anytype, defaultValue: anytype, key: []const u8) KCoreConfigSkeleton__ItemDateTime {
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
    /// ` self: KConfigLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []const []const u8 `
    ///
    /// ` defaultValue: []const []const u8 `
    ///
    pub fn addItemStringList3(self: KConfigLoader, allocator: std.mem.Allocator, name: []const u8, reference: []const []const u8, defaultValue: []const []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("KConfigLoader.addItemStringList3: Memory allocation failed");
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
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("KConfigLoader.addItemStringList3: Memory allocation failed");
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
    /// ` self: KConfigLoader `
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
    pub fn addItemStringList4(self: KConfigLoader, allocator: std.mem.Allocator, name: []const u8, reference: []const []const u8, defaultValue: []const []const u8, key: []const u8) KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("KConfigLoader.addItemStringList4: Memory allocation failed");
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
        const defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("KConfigLoader.addItemStringList4: Memory allocation failed");
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    /// ` defaultValue: []i32 `
    ///
    pub fn addItemIntList3(self: KConfigLoader, name: []const u8, reference: []i32, defaultValue: []i32) KCoreConfigSkeleton__ItemIntList {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` reference: []i32 `
    ///
    /// ` defaultValue: []i32 `
    ///
    /// ` key: []const u8 `
    ///
    pub fn addItemIntList4(self: KConfigLoader, name: []const u8, reference: []i32, defaultValue: []i32, key: []const u8) KCoreConfigSkeleton__ItemIntList {
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
    /// ` self: KConfigLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KConfigLoader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigLoader.objectName: Memory allocation failed");
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KConfigLoader, name: []const u8) void {
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
    /// ` self: KConfigLoader `
    ///
    pub fn isWidgetType(self: KConfigLoader) bool {
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
    /// ` self: KConfigLoader `
    ///
    pub fn isWindowType(self: KConfigLoader) bool {
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
    /// ` self: KConfigLoader `
    ///
    pub fn isQuickItemType(self: KConfigLoader) bool {
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
    /// ` self: KConfigLoader `
    ///
    pub fn signalsBlocked(self: KConfigLoader) bool {
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
    /// ` self: KConfigLoader `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KConfigLoader, b: bool) bool {
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
    /// ` self: KConfigLoader `
    ///
    pub fn thread(self: KConfigLoader) QThread {
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
    /// ` self: KConfigLoader `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KConfigLoader, _thread: anytype) bool {
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
    /// ` self: KConfigLoader `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KConfigLoader, interval: i32) i32 {
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
    /// ` self: KConfigLoader `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KConfigLoader, time: i64) i32 {
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
    /// ` self: KConfigLoader `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KConfigLoader, id: i32) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KConfigLoader, id: i32) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KConfigLoader, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KConfigLoader.children: Memory allocation failed");
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
    /// ` self: KConfigLoader `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KConfigLoader, _parent: anytype) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KConfigLoader, filterObj: anytype) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KConfigLoader, obj: anytype) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KConfigLoader, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KConfigLoader `
    ///
    pub fn disconnect3(self: KConfigLoader) bool {
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
    /// ` self: KConfigLoader `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KConfigLoader, receiver: anytype) bool {
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
    /// ` self: KConfigLoader `
    ///
    pub fn dumpObjectTree(self: KConfigLoader) void {
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
    /// ` self: KConfigLoader `
    ///
    pub fn dumpObjectInfo(self: KConfigLoader) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KConfigLoader, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
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
    /// ` self: KConfigLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KConfigLoader, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KConfigLoader.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigLoader.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KConfigLoader `
    ///
    pub fn bindingStorage(self: KConfigLoader) QBindingStorage {
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
    /// ` self: KConfigLoader `
    ///
    pub fn bindingStorage2(self: KConfigLoader) QBindingStorage {
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
    /// ` self: KConfigLoader `
    ///
    pub fn destroyed(self: KConfigLoader) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` callback: *const fn (self: KConfigLoader) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KConfigLoader, callback: *const fn (KConfigLoader) callconv(.c) void) void {
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
    /// ` self: KConfigLoader `
    ///
    pub fn parent(self: KConfigLoader) QObject {
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
    /// ` self: KConfigLoader `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KConfigLoader, classname: [:0]const u8) bool {
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
    /// ` self: KConfigLoader `
    ///
    pub fn deleteLater(self: KConfigLoader) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KConfigLoader, interval: i32, timerType: i32) i32 {
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
    /// ` self: KConfigLoader `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KConfigLoader, time: i64, timerType: i32) i32 {
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
    /// ` self: KConfigLoader `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KConfigLoader, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KConfigLoader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KConfigLoader, signal: [:0]const u8) bool {
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
    /// ` self: KConfigLoader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KConfigLoader, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KConfigLoader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KConfigLoader, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KConfigLoader `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KConfigLoader, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KConfigLoader `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KConfigLoader, param1: anytype) void {
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
    /// ` self: KConfigLoader `
    ///
    /// ` callback: *const fn (self: KConfigLoader, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KConfigLoader, callback: *const fn (KConfigLoader, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#metaObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    pub fn metaObject(self: KConfigLoader) QMetaObject {
        return .{ .ptr = qtc.KConfigLoader_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#metaObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    pub fn superMetaObject(self: KConfigLoader) QMetaObject {
        return .{ .ptr = qtc.KConfigLoader_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#metaObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KConfigLoader, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KConfigLoader_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#qt_metacast)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KConfigLoader, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KConfigLoader_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#qt_metacast)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KConfigLoader, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KConfigLoader_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#qt_metacast)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn (self: KConfigLoader, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KConfigLoader, callback: *const fn (KConfigLoader, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KConfigLoader_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#qt_metacall)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KConfigLoader, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KConfigLoader_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#qt_metacall)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigLoader `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KConfigLoader, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KConfigLoader_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Inherited from KConfigSkeleton
    ///
    /// ### [Upstream resources](https://api.kde.org/kconfigskeleton.html#qt_metacall)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn (self: KConfigLoader, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KConfigLoader, callback: *const fn (KConfigLoader, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KConfigLoader_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    pub fn setDefaults(self: KConfigLoader) void {
        qtc.KConfigLoader_SetDefaults(@ptrCast(self.ptr));
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
    /// ` self: KConfigLoader `
    ///
    pub fn superSetDefaults(self: KConfigLoader) void {
        qtc.KConfigLoader_SuperSetDefaults(@ptrCast(self.ptr));
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onSetDefaults(self: KConfigLoader, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigLoader_OnSetDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    /// ` b: bool `
    ///
    pub fn useDefaults(self: KConfigLoader, b: bool) bool {
        return qtc.KConfigLoader_UseDefaults(@ptrCast(self.ptr), b);
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
    /// ` self: KConfigLoader `
    ///
    /// ` b: bool `
    ///
    pub fn superUseDefaults(self: KConfigLoader, b: bool) bool {
        return qtc.KConfigLoader_SuperUseDefaults(@ptrCast(self.ptr), b);
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn (self: KConfigLoader, b: bool) callconv(.c) bool `
    ///
    pub fn onUseDefaults(self: KConfigLoader, callback: *const fn (KConfigLoader, bool) callconv(.c) bool) void {
        qtc.KConfigLoader_OnUseDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    /// ` b: bool `
    ///
    pub fn usrUseDefaults(self: KConfigLoader, b: bool) bool {
        return qtc.KConfigLoader_UsrUseDefaults(@ptrCast(self.ptr), b);
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
    /// ` self: KConfigLoader `
    ///
    /// ` b: bool `
    ///
    pub fn superUsrUseDefaults(self: KConfigLoader, b: bool) bool {
        return qtc.KConfigLoader_SuperUsrUseDefaults(@ptrCast(self.ptr), b);
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn (self: KConfigLoader, b: bool) callconv(.c) bool `
    ///
    pub fn onUsrUseDefaults(self: KConfigLoader, callback: *const fn (KConfigLoader, bool) callconv(.c) bool) void {
        qtc.KConfigLoader_OnUsrUseDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    pub fn usrSetDefaults(self: KConfigLoader) void {
        qtc.KConfigLoader_UsrSetDefaults(@ptrCast(self.ptr));
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
    /// ` self: KConfigLoader `
    ///
    pub fn superUsrSetDefaults(self: KConfigLoader) void {
        qtc.KConfigLoader_SuperUsrSetDefaults(@ptrCast(self.ptr));
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUsrSetDefaults(self: KConfigLoader, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigLoader_OnUsrSetDefaults(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    pub fn usrRead(self: KConfigLoader) void {
        qtc.KConfigLoader_UsrRead(@ptrCast(self.ptr));
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
    /// ` self: KConfigLoader `
    ///
    pub fn superUsrRead(self: KConfigLoader) void {
        qtc.KConfigLoader_SuperUsrRead(@ptrCast(self.ptr));
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUsrRead(self: KConfigLoader, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigLoader_OnUsrRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KConfigLoader, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KConfigLoader_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigLoader `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KConfigLoader, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KConfigLoader_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn (self: KConfigLoader, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KConfigLoader, callback: *const fn (KConfigLoader, QEvent) callconv(.c) bool) void {
        qtc.KConfigLoader_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KConfigLoader, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KConfigLoader_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigLoader `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KConfigLoader, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KConfigLoader_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn (self: KConfigLoader, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KConfigLoader, callback: *const fn (KConfigLoader, QObject, QEvent) callconv(.c) bool) void {
        qtc.KConfigLoader_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KConfigLoader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KConfigLoader_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigLoader `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KConfigLoader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KConfigLoader_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn (self: KConfigLoader, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KConfigLoader, callback: *const fn (KConfigLoader, QTimerEvent) callconv(.c) void) void {
        qtc.KConfigLoader_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KConfigLoader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KConfigLoader_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigLoader `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KConfigLoader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KConfigLoader_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn (self: KConfigLoader, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KConfigLoader, callback: *const fn (KConfigLoader, QChildEvent) callconv(.c) void) void {
        qtc.KConfigLoader_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KConfigLoader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KConfigLoader_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigLoader `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KConfigLoader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KConfigLoader_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn (self: KConfigLoader, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KConfigLoader, callback: *const fn (KConfigLoader, QEvent) callconv(.c) void) void {
        qtc.KConfigLoader_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KConfigLoader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigLoader_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigLoader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KConfigLoader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigLoader_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn (self: KConfigLoader, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KConfigLoader, callback: *const fn (KConfigLoader, QMetaMethod) callconv(.c) void) void {
        qtc.KConfigLoader_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KConfigLoader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigLoader_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigLoader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KConfigLoader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigLoader_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn (self: KConfigLoader, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KConfigLoader, callback: *const fn (KConfigLoader, QMetaMethod) callconv(.c) void) void {
        qtc.KConfigLoader_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    pub fn sender(self: KConfigLoader) QObject {
        return .{ .ptr = qtc.KConfigLoader_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KConfigLoader `
    ///
    pub fn superSender(self: KConfigLoader) QObject {
        return .{ .ptr = qtc.KConfigLoader_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KConfigLoader, callback: *const fn () callconv(.c) QObject) void {
        qtc.KConfigLoader_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    pub fn senderSignalIndex(self: KConfigLoader) i32 {
        return qtc.KConfigLoader_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KConfigLoader `
    ///
    pub fn superSenderSignalIndex(self: KConfigLoader) i32 {
        return qtc.KConfigLoader_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KConfigLoader, callback: *const fn () callconv(.c) i32) void {
        qtc.KConfigLoader_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KConfigLoader, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KConfigLoader_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KConfigLoader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KConfigLoader, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KConfigLoader_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn (self: KConfigLoader, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KConfigLoader, callback: *const fn (KConfigLoader, [*:0]const u8) callconv(.c) i32) void {
        qtc.KConfigLoader_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KConfigLoader, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KConfigLoader_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigLoader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KConfigLoader, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KConfigLoader_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigLoader`
    ///
    /// ` callback: *const fn (self: KConfigLoader, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KConfigLoader, callback: *const fn (KConfigLoader, QMetaMethod) callconv(.c) bool) void {
        qtc.KConfigLoader_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigLoader `
    ///
    /// ` callback: *const fn (self: KConfigLoader, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KConfigLoader, callback: *const fn (KConfigLoader, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kconfigloader.html#dtor.KConfigLoader)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigLoader `
    ///
    pub fn delete(self: KConfigLoader) void {
        qtc.KConfigLoader_Delete(@ptrCast(self.ptr));
    }
};
