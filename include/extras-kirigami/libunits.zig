const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QJSEngine = @import("libqt6").QJSEngine;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QQmlEngine = @import("libqt6").QQmlEngine;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html)
pub const Kirigami__Platform__IconSizes = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Kirigami__Platform__IconSizes,

    pub const _is_Kirigami__Platform__IconSizes = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Kirigami::Platform::IconSizes object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` units: Kirigami__Platform__Units `
    ///
    pub fn new(units: anytype) Kirigami__Platform__IconSizes {
        comptime _ = @TypeOf(units)._is_Kirigami__Platform__Units;
        return .{ .ptr = qtc.Kirigami__Platform__IconSizes_new(@ptrCast(units.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn metaObject(self: Kirigami__Platform__IconSizes) QMetaObject {
        return .{ .ptr = qtc.Kirigami__Platform__IconSizes_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: Kirigami__Platform__IconSizes, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.Kirigami__Platform__IconSizes_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn superMetaObject(self: Kirigami__Platform__IconSizes) QMetaObject {
        return .{ .ptr = qtc.Kirigami__Platform__IconSizes_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Kirigami__Platform__IconSizes, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Kirigami__Platform__IconSizes_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.Kirigami__Platform__IconSizes_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: Kirigami__Platform__IconSizes, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Kirigami__Platform__IconSizes_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: Kirigami__Platform__IconSizes, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Kirigami__Platform__IconSizes_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.Kirigami__Platform__IconSizes_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: Kirigami__Platform__IconSizes, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Kirigami__Platform__IconSizes_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
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
        var _str = qtc.Kirigami__Platform__IconSizes_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__IconSizes.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sizeForLabels` instead
    ///
    pub const SizeForLabels = sizeForLabels;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#sizeForLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn sizeForLabels(self: Kirigami__Platform__IconSizes) i32 {
        return qtc.Kirigami__Platform__IconSizes_SizeForLabels(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `small` instead
    ///
    pub const Small = small;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#small)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn small(self: Kirigami__Platform__IconSizes) i32 {
        return qtc.Kirigami__Platform__IconSizes_Small(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `smallMedium` instead
    ///
    pub const SmallMedium = smallMedium;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#smallMedium)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn smallMedium(self: Kirigami__Platform__IconSizes) i32 {
        return qtc.Kirigami__Platform__IconSizes_SmallMedium(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `medium` instead
    ///
    pub const Medium = medium;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#medium)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn medium(self: Kirigami__Platform__IconSizes) i32 {
        return qtc.Kirigami__Platform__IconSizes_Medium(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `large` instead
    ///
    pub const Large = large;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#large)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn large(self: Kirigami__Platform__IconSizes) i32 {
        return qtc.Kirigami__Platform__IconSizes_Large(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `huge` instead
    ///
    pub const Huge = huge;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#huge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn huge(self: Kirigami__Platform__IconSizes) i32 {
        return qtc.Kirigami__Platform__IconSizes_Huge(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enormous` instead
    ///
    pub const Enormous = enormous;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#enormous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn enormous(self: Kirigami__Platform__IconSizes) i32 {
        return qtc.Kirigami__Platform__IconSizes_Enormous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `roundedIconSize` instead
    ///
    pub const RoundedIconSize = roundedIconSize;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#roundedIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` size: i32 `
    ///
    pub fn roundedIconSize(self: Kirigami__Platform__IconSizes, size: i32) i32 {
        return qtc.Kirigami__Platform__IconSizes_RoundedIconSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `sizeForLabelsChanged` instead
    ///
    pub const SizeForLabelsChanged = sizeForLabelsChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#sizeForLabelsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn sizeForLabelsChanged(self: Kirigami__Platform__IconSizes) void {
        qtc.Kirigami__Platform__IconSizes_SizeForLabelsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSizeForLabelsChanged` instead
    ///
    pub const OnSizeForLabelsChanged = onSizeForLabelsChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#sizeForLabelsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes) callconv(.c) void `
    ///
    pub fn onSizeForLabelsChanged(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes) callconv(.c) void) void {
        qtc.Kirigami__Platform__IconSizes_Connect_SizeForLabelsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `smallChanged` instead
    ///
    pub const SmallChanged = smallChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#smallChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn smallChanged(self: Kirigami__Platform__IconSizes) void {
        qtc.Kirigami__Platform__IconSizes_SmallChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSmallChanged` instead
    ///
    pub const OnSmallChanged = onSmallChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#smallChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes) callconv(.c) void `
    ///
    pub fn onSmallChanged(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes) callconv(.c) void) void {
        qtc.Kirigami__Platform__IconSizes_Connect_SmallChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `smallMediumChanged` instead
    ///
    pub const SmallMediumChanged = smallMediumChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#smallMediumChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn smallMediumChanged(self: Kirigami__Platform__IconSizes) void {
        qtc.Kirigami__Platform__IconSizes_SmallMediumChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSmallMediumChanged` instead
    ///
    pub const OnSmallMediumChanged = onSmallMediumChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#smallMediumChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes) callconv(.c) void `
    ///
    pub fn onSmallMediumChanged(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes) callconv(.c) void) void {
        qtc.Kirigami__Platform__IconSizes_Connect_SmallMediumChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mediumChanged` instead
    ///
    pub const MediumChanged = mediumChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#mediumChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn mediumChanged(self: Kirigami__Platform__IconSizes) void {
        qtc.Kirigami__Platform__IconSizes_MediumChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMediumChanged` instead
    ///
    pub const OnMediumChanged = onMediumChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#mediumChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes) callconv(.c) void `
    ///
    pub fn onMediumChanged(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes) callconv(.c) void) void {
        qtc.Kirigami__Platform__IconSizes_Connect_MediumChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `largeChanged` instead
    ///
    pub const LargeChanged = largeChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#largeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn largeChanged(self: Kirigami__Platform__IconSizes) void {
        qtc.Kirigami__Platform__IconSizes_LargeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLargeChanged` instead
    ///
    pub const OnLargeChanged = onLargeChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#largeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes) callconv(.c) void `
    ///
    pub fn onLargeChanged(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes) callconv(.c) void) void {
        qtc.Kirigami__Platform__IconSizes_Connect_LargeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hugeChanged` instead
    ///
    pub const HugeChanged = hugeChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#hugeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn hugeChanged(self: Kirigami__Platform__IconSizes) void {
        qtc.Kirigami__Platform__IconSizes_HugeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHugeChanged` instead
    ///
    pub const OnHugeChanged = onHugeChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#hugeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes) callconv(.c) void `
    ///
    pub fn onHugeChanged(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes) callconv(.c) void) void {
        qtc.Kirigami__Platform__IconSizes_Connect_HugeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enormousChanged` instead
    ///
    pub const EnormousChanged = enormousChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#enormousChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn enormousChanged(self: Kirigami__Platform__IconSizes) void {
        qtc.Kirigami__Platform__IconSizes_EnormousChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEnormousChanged` instead
    ///
    pub const OnEnormousChanged = onEnormousChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-iconsizes.html#enormousChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes) callconv(.c) void `
    ///
    pub fn onEnormousChanged(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes) callconv(.c) void) void {
        qtc.Kirigami__Platform__IconSizes_Connect_EnormousChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
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
        var _str = qtc.Kirigami__Platform__IconSizes_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__IconSizes.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
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
        var _str = qtc.Kirigami__Platform__IconSizes_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__IconSizes.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Kirigami__Platform__IconSizes, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__IconSizes.objectName: Memory allocation failed");
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: Kirigami__Platform__IconSizes, name: []const u8) void {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn isWidgetType(self: Kirigami__Platform__IconSizes) bool {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn isWindowType(self: Kirigami__Platform__IconSizes) bool {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn isQuickItemType(self: Kirigami__Platform__IconSizes) bool {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn signalsBlocked(self: Kirigami__Platform__IconSizes) bool {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Kirigami__Platform__IconSizes, b: bool) bool {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn thread(self: Kirigami__Platform__IconSizes) QThread {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Kirigami__Platform__IconSizes, _thread: anytype) bool {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Kirigami__Platform__IconSizes, interval: i32) i32 {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Kirigami__Platform__IconSizes, time: i64) i32 {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: Kirigami__Platform__IconSizes, id: i32) void {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Kirigami__Platform__IconSizes, id: i32) void {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Kirigami__Platform__IconSizes, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Kirigami__Platform__IconSizes.children: Memory allocation failed");
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Kirigami__Platform__IconSizes, _parent: anytype) void {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Kirigami__Platform__IconSizes, filterObj: anytype) void {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Kirigami__Platform__IconSizes, obj: anytype) void {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Kirigami__Platform__IconSizes, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn disconnect3(self: Kirigami__Platform__IconSizes) bool {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Kirigami__Platform__IconSizes, receiver: anytype) bool {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn dumpObjectTree(self: Kirigami__Platform__IconSizes) void {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn dumpObjectInfo(self: Kirigami__Platform__IconSizes) void {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Kirigami__Platform__IconSizes, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: Kirigami__Platform__IconSizes, name: [:0]const u8) QVariant {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Kirigami__Platform__IconSizes, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Kirigami__Platform__IconSizes.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Kirigami__Platform__IconSizes.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn bindingStorage(self: Kirigami__Platform__IconSizes) QBindingStorage {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn bindingStorage2(self: Kirigami__Platform__IconSizes) QBindingStorage {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn destroyed(self: Kirigami__Platform__IconSizes) void {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes) callconv(.c) void) void {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn parent(self: Kirigami__Platform__IconSizes) QObject {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Kirigami__Platform__IconSizes, classname: [:0]const u8) bool {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn deleteLater(self: Kirigami__Platform__IconSizes) void {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Kirigami__Platform__IconSizes, interval: i32, timerType: i32) i32 {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Kirigami__Platform__IconSizes, time: i64, timerType: i32) i32 {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Kirigami__Platform__IconSizes, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Kirigami__Platform__IconSizes, signal: [:0]const u8) bool {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Kirigami__Platform__IconSizes, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Kirigami__Platform__IconSizes, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Kirigami__Platform__IconSizes, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Kirigami__Platform__IconSizes, param1: anytype) void {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes, QObject) callconv(.c) void) void {
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Kirigami__Platform__IconSizes, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Kirigami__Platform__IconSizes_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: Kirigami__Platform__IconSizes, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Kirigami__Platform__IconSizes_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes, QEvent) callconv(.c) bool) void {
        qtc.Kirigami__Platform__IconSizes_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Kirigami__Platform__IconSizes, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Kirigami__Platform__IconSizes_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: Kirigami__Platform__IconSizes, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.Kirigami__Platform__IconSizes_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes, QObject, QEvent) callconv(.c) bool) void {
        qtc.Kirigami__Platform__IconSizes_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: Kirigami__Platform__IconSizes, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Kirigami__Platform__IconSizes_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: Kirigami__Platform__IconSizes, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.Kirigami__Platform__IconSizes_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes, QTimerEvent) callconv(.c) void) void {
        qtc.Kirigami__Platform__IconSizes_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: Kirigami__Platform__IconSizes, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Kirigami__Platform__IconSizes_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: Kirigami__Platform__IconSizes, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.Kirigami__Platform__IconSizes_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes, QChildEvent) callconv(.c) void) void {
        qtc.Kirigami__Platform__IconSizes_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: Kirigami__Platform__IconSizes, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Kirigami__Platform__IconSizes_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: Kirigami__Platform__IconSizes, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.Kirigami__Platform__IconSizes_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes, QEvent) callconv(.c) void) void {
        qtc.Kirigami__Platform__IconSizes_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: Kirigami__Platform__IconSizes, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Kirigami__Platform__IconSizes_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: Kirigami__Platform__IconSizes, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Kirigami__Platform__IconSizes_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes, QMetaMethod) callconv(.c) void) void {
        qtc.Kirigami__Platform__IconSizes_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: Kirigami__Platform__IconSizes, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Kirigami__Platform__IconSizes_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: Kirigami__Platform__IconSizes, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.Kirigami__Platform__IconSizes_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes, QMetaMethod) callconv(.c) void) void {
        qtc.Kirigami__Platform__IconSizes_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn sender(self: Kirigami__Platform__IconSizes) QObject {
        return .{ .ptr = qtc.Kirigami__Platform__IconSizes_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn superSender(self: Kirigami__Platform__IconSizes) QObject {
        return .{ .ptr = qtc.Kirigami__Platform__IconSizes_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: Kirigami__Platform__IconSizes`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: Kirigami__Platform__IconSizes, callback: *const fn () callconv(.c) QObject) void {
        qtc.Kirigami__Platform__IconSizes_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn senderSignalIndex(self: Kirigami__Platform__IconSizes) i32 {
        return qtc.Kirigami__Platform__IconSizes_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn superSenderSignalIndex(self: Kirigami__Platform__IconSizes) i32 {
        return qtc.Kirigami__Platform__IconSizes_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: Kirigami__Platform__IconSizes, callback: *const fn () callconv(.c) i32) void {
        qtc.Kirigami__Platform__IconSizes_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: Kirigami__Platform__IconSizes, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Kirigami__Platform__IconSizes_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: Kirigami__Platform__IconSizes, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.Kirigami__Platform__IconSizes_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: Kirigami__Platform__IconSizes`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes, [*:0]const u8) callconv(.c) i32) void {
        qtc.Kirigami__Platform__IconSizes_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: Kirigami__Platform__IconSizes, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Kirigami__Platform__IconSizes_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: Kirigami__Platform__IconSizes, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.Kirigami__Platform__IconSizes_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: Kirigami__Platform__IconSizes`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes, QMetaMethod) callconv(.c) bool) void {
        qtc.Kirigami__Platform__IconSizes_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__IconSizes, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Kirigami__Platform__IconSizes, callback: *const fn (Kirigami__Platform__IconSizes, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Kirigami__Platform__IconSizes `
    ///
    pub fn delete(self: Kirigami__Platform__IconSizes) void {
        qtc.Kirigami__Platform__IconSizes_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html)
pub const Kirigami__Platform__Units = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Kirigami__Platform__Units,

    pub const _is_Kirigami__Platform__Units = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn metaObject(self: Kirigami__Platform__Units) QMetaObject {
        return .{ .ptr = qtc.Kirigami__Platform__Units_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Kirigami__Platform__Units, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Kirigami__Platform__Units_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: Kirigami__Platform__Units, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Kirigami__Platform__Units_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
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
        var _str = qtc.Kirigami__Platform__Units_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__Units.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `gridUnit` instead
    ///
    pub const GridUnit = gridUnit;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#gridUnit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn gridUnit(self: Kirigami__Platform__Units) i32 {
        return qtc.Kirigami__Platform__Units_GridUnit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGridUnit` instead
    ///
    pub const SetGridUnit = setGridUnit;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setGridUnit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` size: i32 `
    ///
    pub fn setGridUnit(self: Kirigami__Platform__Units, size: i32) void {
        qtc.Kirigami__Platform__Units_SetGridUnit(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `smallSpacing` instead
    ///
    pub const SmallSpacing = smallSpacing;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#smallSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn smallSpacing(self: Kirigami__Platform__Units) i32 {
        return qtc.Kirigami__Platform__Units_SmallSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSmallSpacing` instead
    ///
    pub const SetSmallSpacing = setSmallSpacing;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setSmallSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` size: i32 `
    ///
    pub fn setSmallSpacing(self: Kirigami__Platform__Units, size: i32) void {
        qtc.Kirigami__Platform__Units_SetSmallSpacing(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `mediumSpacing` instead
    ///
    pub const MediumSpacing = mediumSpacing;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#mediumSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn mediumSpacing(self: Kirigami__Platform__Units) i32 {
        return qtc.Kirigami__Platform__Units_MediumSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMediumSpacing` instead
    ///
    pub const SetMediumSpacing = setMediumSpacing;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setMediumSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` size: i32 `
    ///
    pub fn setMediumSpacing(self: Kirigami__Platform__Units, size: i32) void {
        qtc.Kirigami__Platform__Units_SetMediumSpacing(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `largeSpacing` instead
    ///
    pub const LargeSpacing = largeSpacing;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#largeSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn largeSpacing(self: Kirigami__Platform__Units) i32 {
        return qtc.Kirigami__Platform__Units_LargeSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLargeSpacing` instead
    ///
    pub const SetLargeSpacing = setLargeSpacing;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setLargeSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` size: i32 `
    ///
    pub fn setLargeSpacing(self: Kirigami__Platform__Units, size: i32) void {
        qtc.Kirigami__Platform__Units_SetLargeSpacing(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `veryLongDuration` instead
    ///
    pub const VeryLongDuration = veryLongDuration;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#veryLongDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn veryLongDuration(self: Kirigami__Platform__Units) i32 {
        return qtc.Kirigami__Platform__Units_VeryLongDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVeryLongDuration` instead
    ///
    pub const SetVeryLongDuration = setVeryLongDuration;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setVeryLongDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` duration: i32 `
    ///
    pub fn setVeryLongDuration(self: Kirigami__Platform__Units, duration: i32) void {
        qtc.Kirigami__Platform__Units_SetVeryLongDuration(@ptrCast(self.ptr), @bitCast(duration));
    }

    /// ### DEPRECATED: Use `longDuration` instead
    ///
    pub const LongDuration = longDuration;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#longDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn longDuration(self: Kirigami__Platform__Units) i32 {
        return qtc.Kirigami__Platform__Units_LongDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLongDuration` instead
    ///
    pub const SetLongDuration = setLongDuration;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setLongDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` duration: i32 `
    ///
    pub fn setLongDuration(self: Kirigami__Platform__Units, duration: i32) void {
        qtc.Kirigami__Platform__Units_SetLongDuration(@ptrCast(self.ptr), @bitCast(duration));
    }

    /// ### DEPRECATED: Use `shortDuration` instead
    ///
    pub const ShortDuration = shortDuration;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#shortDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn shortDuration(self: Kirigami__Platform__Units) i32 {
        return qtc.Kirigami__Platform__Units_ShortDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShortDuration` instead
    ///
    pub const SetShortDuration = setShortDuration;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setShortDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` duration: i32 `
    ///
    pub fn setShortDuration(self: Kirigami__Platform__Units, duration: i32) void {
        qtc.Kirigami__Platform__Units_SetShortDuration(@ptrCast(self.ptr), @bitCast(duration));
    }

    /// ### DEPRECATED: Use `veryShortDuration` instead
    ///
    pub const VeryShortDuration = veryShortDuration;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#veryShortDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn veryShortDuration(self: Kirigami__Platform__Units) i32 {
        return qtc.Kirigami__Platform__Units_VeryShortDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVeryShortDuration` instead
    ///
    pub const SetVeryShortDuration = setVeryShortDuration;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setVeryShortDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` duration: i32 `
    ///
    pub fn setVeryShortDuration(self: Kirigami__Platform__Units, duration: i32) void {
        qtc.Kirigami__Platform__Units_SetVeryShortDuration(@ptrCast(self.ptr), @bitCast(duration));
    }

    /// ### DEPRECATED: Use `humanMoment` instead
    ///
    pub const HumanMoment = humanMoment;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#humanMoment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn humanMoment(self: Kirigami__Platform__Units) i32 {
        return qtc.Kirigami__Platform__Units_HumanMoment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHumanMoment` instead
    ///
    pub const SetHumanMoment = setHumanMoment;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setHumanMoment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` duration: i32 `
    ///
    pub fn setHumanMoment(self: Kirigami__Platform__Units, duration: i32) void {
        qtc.Kirigami__Platform__Units_SetHumanMoment(@ptrCast(self.ptr), @bitCast(duration));
    }

    /// ### DEPRECATED: Use `toolTipDelay` instead
    ///
    pub const ToolTipDelay = toolTipDelay;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#toolTipDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn toolTipDelay(self: Kirigami__Platform__Units) i32 {
        return qtc.Kirigami__Platform__Units_ToolTipDelay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setToolTipDelay` instead
    ///
    pub const SetToolTipDelay = setToolTipDelay;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setToolTipDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` delay: i32 `
    ///
    pub fn setToolTipDelay(self: Kirigami__Platform__Units, delay: i32) void {
        qtc.Kirigami__Platform__Units_SetToolTipDelay(@ptrCast(self.ptr), @bitCast(delay));
    }

    /// ### DEPRECATED: Use `cornerRadius` instead
    ///
    pub const CornerRadius = cornerRadius;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#cornerRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn cornerRadius(self: Kirigami__Platform__Units) f64 {
        return qtc.Kirigami__Platform__Units_CornerRadius(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setcornerRadius` instead
    ///
    pub const SetcornerRadius = setcornerRadius;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#setcornerRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` _cornerRadius: f64 `
    ///
    pub fn setcornerRadius(self: Kirigami__Platform__Units, _cornerRadius: f64) void {
        qtc.Kirigami__Platform__Units_SetcornerRadius(@ptrCast(self.ptr), @bitCast(_cornerRadius));
    }

    /// ### DEPRECATED: Use `iconSizes` instead
    ///
    pub const IconSizes = iconSizes;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#iconSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn iconSizes(self: Kirigami__Platform__Units) Kirigami__Platform__IconSizes {
        return .{ .ptr = qtc.Kirigami__Platform__Units_IconSizes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` qmlEngine: QQmlEngine `
    ///
    /// ` jsEngine: QJSEngine `
    ///
    pub fn create(qmlEngine: anytype, jsEngine: anytype) Kirigami__Platform__Units {
        comptime _ = @TypeOf(qmlEngine)._is_QQmlEngine;
        comptime _ = @TypeOf(jsEngine)._is_QJSEngine;
        return .{ .ptr = qtc.Kirigami__Platform__Units_Create(@ptrCast(qmlEngine.ptr), @ptrCast(jsEngine.ptr)) };
    }

    /// ### DEPRECATED: Use `gridUnitChanged` instead
    ///
    pub const GridUnitChanged = gridUnitChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#gridUnitChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn gridUnitChanged(self: Kirigami__Platform__Units) void {
        qtc.Kirigami__Platform__Units_GridUnitChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onGridUnitChanged` instead
    ///
    pub const OnGridUnitChanged = onGridUnitChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#gridUnitChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units) callconv(.c) void `
    ///
    pub fn onGridUnitChanged(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units) callconv(.c) void) void {
        qtc.Kirigami__Platform__Units_Connect_GridUnitChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `smallSpacingChanged` instead
    ///
    pub const SmallSpacingChanged = smallSpacingChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#smallSpacingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn smallSpacingChanged(self: Kirigami__Platform__Units) void {
        qtc.Kirigami__Platform__Units_SmallSpacingChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSmallSpacingChanged` instead
    ///
    pub const OnSmallSpacingChanged = onSmallSpacingChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#smallSpacingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units) callconv(.c) void `
    ///
    pub fn onSmallSpacingChanged(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units) callconv(.c) void) void {
        qtc.Kirigami__Platform__Units_Connect_SmallSpacingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mediumSpacingChanged` instead
    ///
    pub const MediumSpacingChanged = mediumSpacingChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#mediumSpacingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn mediumSpacingChanged(self: Kirigami__Platform__Units) void {
        qtc.Kirigami__Platform__Units_MediumSpacingChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMediumSpacingChanged` instead
    ///
    pub const OnMediumSpacingChanged = onMediumSpacingChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#mediumSpacingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units) callconv(.c) void `
    ///
    pub fn onMediumSpacingChanged(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units) callconv(.c) void) void {
        qtc.Kirigami__Platform__Units_Connect_MediumSpacingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `largeSpacingChanged` instead
    ///
    pub const LargeSpacingChanged = largeSpacingChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#largeSpacingChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn largeSpacingChanged(self: Kirigami__Platform__Units) void {
        qtc.Kirigami__Platform__Units_LargeSpacingChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLargeSpacingChanged` instead
    ///
    pub const OnLargeSpacingChanged = onLargeSpacingChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#largeSpacingChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units) callconv(.c) void `
    ///
    pub fn onLargeSpacingChanged(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units) callconv(.c) void) void {
        qtc.Kirigami__Platform__Units_Connect_LargeSpacingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `veryLongDurationChanged` instead
    ///
    pub const VeryLongDurationChanged = veryLongDurationChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#veryLongDurationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn veryLongDurationChanged(self: Kirigami__Platform__Units) void {
        qtc.Kirigami__Platform__Units_VeryLongDurationChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVeryLongDurationChanged` instead
    ///
    pub const OnVeryLongDurationChanged = onVeryLongDurationChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#veryLongDurationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units) callconv(.c) void `
    ///
    pub fn onVeryLongDurationChanged(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units) callconv(.c) void) void {
        qtc.Kirigami__Platform__Units_Connect_VeryLongDurationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `longDurationChanged` instead
    ///
    pub const LongDurationChanged = longDurationChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#longDurationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn longDurationChanged(self: Kirigami__Platform__Units) void {
        qtc.Kirigami__Platform__Units_LongDurationChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLongDurationChanged` instead
    ///
    pub const OnLongDurationChanged = onLongDurationChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#longDurationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units) callconv(.c) void `
    ///
    pub fn onLongDurationChanged(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units) callconv(.c) void) void {
        qtc.Kirigami__Platform__Units_Connect_LongDurationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `shortDurationChanged` instead
    ///
    pub const ShortDurationChanged = shortDurationChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#shortDurationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn shortDurationChanged(self: Kirigami__Platform__Units) void {
        qtc.Kirigami__Platform__Units_ShortDurationChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onShortDurationChanged` instead
    ///
    pub const OnShortDurationChanged = onShortDurationChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#shortDurationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units) callconv(.c) void `
    ///
    pub fn onShortDurationChanged(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units) callconv(.c) void) void {
        qtc.Kirigami__Platform__Units_Connect_ShortDurationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `veryShortDurationChanged` instead
    ///
    pub const VeryShortDurationChanged = veryShortDurationChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#veryShortDurationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn veryShortDurationChanged(self: Kirigami__Platform__Units) void {
        qtc.Kirigami__Platform__Units_VeryShortDurationChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVeryShortDurationChanged` instead
    ///
    pub const OnVeryShortDurationChanged = onVeryShortDurationChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#veryShortDurationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units) callconv(.c) void `
    ///
    pub fn onVeryShortDurationChanged(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units) callconv(.c) void) void {
        qtc.Kirigami__Platform__Units_Connect_VeryShortDurationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `humanMomentChanged` instead
    ///
    pub const HumanMomentChanged = humanMomentChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#humanMomentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn humanMomentChanged(self: Kirigami__Platform__Units) void {
        qtc.Kirigami__Platform__Units_HumanMomentChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHumanMomentChanged` instead
    ///
    pub const OnHumanMomentChanged = onHumanMomentChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#humanMomentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units) callconv(.c) void `
    ///
    pub fn onHumanMomentChanged(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units) callconv(.c) void) void {
        qtc.Kirigami__Platform__Units_Connect_HumanMomentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `toolTipDelayChanged` instead
    ///
    pub const ToolTipDelayChanged = toolTipDelayChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#toolTipDelayChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn toolTipDelayChanged(self: Kirigami__Platform__Units) void {
        qtc.Kirigami__Platform__Units_ToolTipDelayChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onToolTipDelayChanged` instead
    ///
    pub const OnToolTipDelayChanged = onToolTipDelayChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#toolTipDelayChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units) callconv(.c) void `
    ///
    pub fn onToolTipDelayChanged(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units) callconv(.c) void) void {
        qtc.Kirigami__Platform__Units_Connect_ToolTipDelayChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelScrollLinesChanged` instead
    ///
    pub const WheelScrollLinesChanged = wheelScrollLinesChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#wheelScrollLinesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn wheelScrollLinesChanged(self: Kirigami__Platform__Units) void {
        qtc.Kirigami__Platform__Units_WheelScrollLinesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWheelScrollLinesChanged` instead
    ///
    pub const OnWheelScrollLinesChanged = onWheelScrollLinesChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#wheelScrollLinesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units) callconv(.c) void `
    ///
    pub fn onWheelScrollLinesChanged(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units) callconv(.c) void) void {
        qtc.Kirigami__Platform__Units_Connect_WheelScrollLinesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cornerRadiusChanged` instead
    ///
    pub const CornerRadiusChanged = cornerRadiusChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#cornerRadiusChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn cornerRadiusChanged(self: Kirigami__Platform__Units) void {
        qtc.Kirigami__Platform__Units_CornerRadiusChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCornerRadiusChanged` instead
    ///
    pub const OnCornerRadiusChanged = onCornerRadiusChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-units.html#cornerRadiusChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units) callconv(.c) void `
    ///
    pub fn onCornerRadiusChanged(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units) callconv(.c) void) void {
        qtc.Kirigami__Platform__Units_Connect_CornerRadiusChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
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
        var _str = qtc.Kirigami__Platform__Units_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__Units.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
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
        var _str = qtc.Kirigami__Platform__Units_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__Units.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Kirigami__Platform__Units, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Kirigami__Platform__Units, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__Units.objectName: Memory allocation failed");
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: Kirigami__Platform__Units, name: []const u8) void {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn isWidgetType(self: Kirigami__Platform__Units) bool {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn isWindowType(self: Kirigami__Platform__Units) bool {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn isQuickItemType(self: Kirigami__Platform__Units) bool {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn signalsBlocked(self: Kirigami__Platform__Units) bool {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Kirigami__Platform__Units, b: bool) bool {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn thread(self: Kirigami__Platform__Units) QThread {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Kirigami__Platform__Units, _thread: anytype) bool {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Kirigami__Platform__Units, interval: i32) i32 {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Kirigami__Platform__Units, time: i64) i32 {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: Kirigami__Platform__Units, id: i32) void {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Kirigami__Platform__Units, id: i32) void {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Kirigami__Platform__Units, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Kirigami__Platform__Units.children: Memory allocation failed");
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Kirigami__Platform__Units, _parent: anytype) void {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Kirigami__Platform__Units, filterObj: anytype) void {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Kirigami__Platform__Units, obj: anytype) void {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Kirigami__Platform__Units, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn disconnect3(self: Kirigami__Platform__Units) bool {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Kirigami__Platform__Units, receiver: anytype) bool {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn dumpObjectTree(self: Kirigami__Platform__Units) void {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn dumpObjectInfo(self: Kirigami__Platform__Units) void {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Kirigami__Platform__Units, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: Kirigami__Platform__Units, name: [:0]const u8) QVariant {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Kirigami__Platform__Units, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Kirigami__Platform__Units.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Kirigami__Platform__Units.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn bindingStorage(self: Kirigami__Platform__Units) QBindingStorage {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn bindingStorage2(self: Kirigami__Platform__Units) QBindingStorage {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn destroyed(self: Kirigami__Platform__Units) void {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units) callconv(.c) void) void {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn parent(self: Kirigami__Platform__Units) QObject {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Kirigami__Platform__Units, classname: [:0]const u8) bool {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn deleteLater(self: Kirigami__Platform__Units) void {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Kirigami__Platform__Units, interval: i32, timerType: i32) i32 {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Kirigami__Platform__Units, time: i64, timerType: i32) i32 {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Kirigami__Platform__Units, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Kirigami__Platform__Units, signal: [:0]const u8) bool {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Kirigami__Platform__Units, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Kirigami__Platform__Units, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Kirigami__Platform__Units, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Kirigami__Platform__Units, param1: anytype) void {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units, QObject) callconv(.c) void) void {
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
    /// ` self: Kirigami__Platform__Units `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__Units, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Kirigami__Platform__Units, callback: *const fn (Kirigami__Platform__Units, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Kirigami__Platform__Units `
    ///
    pub fn delete(self: Kirigami__Platform__Units) void {
        qtc.Kirigami__Platform__Units_Delete(@ptrCast(self.ptr));
    }
};
