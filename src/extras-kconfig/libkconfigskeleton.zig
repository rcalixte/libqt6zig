const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kconfigskeleton.html
pub const kconfigskeleton = struct {
    /// New constructs a new KConfigSkeleton object.
    ///
    ///
    pub fn New() QtC.KConfigSkeleton {
        return qtc.KConfigSkeleton_new();
    }

    /// New2 constructs a new KConfigSkeleton object.
    ///
    /// ``` configname: []const u8 ```
    pub fn New2(configname: []const u8) QtC.KConfigSkeleton {
        const configname_str = qtc.libqt_string{
            .len = configname.len,
            .data = configname.ptr,
        };

        return qtc.KConfigSkeleton_new2(configname_str);
    }

    /// New3 constructs a new KConfigSkeleton object.
    ///
    /// ``` configname: []const u8, parent: QtC.QObject ```
    pub fn New3(configname: []const u8, parent: ?*anyopaque) QtC.KConfigSkeleton {
        const configname_str = qtc.libqt_string{
            .len = configname.len,
            .data = configname.ptr,
        };

        return qtc.KConfigSkeleton_new3(configname_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KConfigSkeleton_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KConfigSkeleton, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KConfigSkeleton_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KConfigSkeleton, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KConfigSkeleton_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KConfigSkeleton_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigSkeleton, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KConfigSkeleton_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KConfigSkeleton_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeleton.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton.html#addItemColor)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QColor ```
    pub fn AddItemColor(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KConfigSkeleton__ItemColor {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KConfigSkeleton_AddItemColor(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton.html#addItemFont)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QFont ```
    pub fn AddItemFont(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KConfigSkeleton__ItemFont {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KConfigSkeleton_AddItemFont(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KConfigSkeleton_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeleton.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KConfigSkeleton_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeleton.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton.html#addItemColor)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QColor, defaultValue: QtC.QColor ```
    pub fn AddItemColor3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KConfigSkeleton__ItemColor {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KConfigSkeleton_AddItemColor3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton.html#addItemColor)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QColor, defaultValue: QtC.QColor, key: []const u8 ```
    pub fn AddItemColor4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KConfigSkeleton__ItemColor {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KConfigSkeleton_AddItemColor4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton.html#addItemFont)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QFont, defaultValue: QtC.QFont ```
    pub fn AddItemFont3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KConfigSkeleton__ItemFont {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KConfigSkeleton_AddItemFont3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton.html#addItemFont)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QFont, defaultValue: QtC.QFont, key: []const u8 ```
    pub fn AddItemFont4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KConfigSkeleton__ItemFont {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KConfigSkeleton_AddItemFont4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#load)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn Load(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_Load(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#read)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn Read(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_Read(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#isDefaults)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn IsDefaults(self: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton_IsDefaults(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#isSaveNeeded)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn IsSaveNeeded(self: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton_IsSaveNeeded(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#setCurrentGroup)
    ///
    /// ``` self: QtC.KConfigSkeleton, group: []const u8 ```
    pub fn SetCurrentGroup(self: ?*anyopaque, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KCoreConfigSkeleton_SetCurrentGroup(@ptrCast(self), group_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#currentGroup)
    ///
    /// ``` self: QtC.KConfigSkeleton, allocator: std.mem.Allocator ```
    pub fn CurrentGroup(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCoreConfigSkeleton_CurrentGroup(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeleton.CurrentGroup: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItem)
    ///
    /// ``` self: QtC.KConfigSkeleton, item: QtC.KConfigSkeletonItem ```
    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_AddItem(@ptrCast(self), @ptrCast(item));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: []const u8 ```
    pub fn AddItemString(self: ?*anyopaque, name: []const u8, reference: []const u8) QtC.KCoreConfigSkeleton__ItemString {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemString(@ptrCast(self), name_str, reference_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: []const u8 ```
    pub fn AddItemPassword(self: ?*anyopaque, name: []const u8, reference: []const u8) QtC.KCoreConfigSkeleton__ItemPassword {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPassword(@ptrCast(self), name_str, reference_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: []const u8 ```
    pub fn AddItemPath(self: ?*anyopaque, name: []const u8, reference: []const u8) QtC.KCoreConfigSkeleton__ItemPath {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_str = qtc.libqt_string{
            .len = reference.len,
            .data = reference.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPath(@ptrCast(self), name_str, reference_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QVariant ```
    pub fn AddItemProperty(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemProperty(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *bool ```
    pub fn AddItemBool(self: ?*anyopaque, name: []const u8, reference: *bool) QtC.KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemBool(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *i32 ```
    pub fn AddItemInt(self: ?*anyopaque, name: []const u8, reference: *i32) QtC.KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemInt(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *u32 ```
    pub fn AddItemUInt(self: ?*anyopaque, name: []const u8, reference: *u32) QtC.KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemUInt(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *i64 ```
    pub fn AddItemLongLong(self: ?*anyopaque, name: []const u8, reference: *i64) QtC.KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemLongLong(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *u64 ```
    pub fn AddItemULongLong(self: ?*anyopaque, name: []const u8, reference: *u64) QtC.KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemULongLong(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *f64 ```
    pub fn AddItemDouble(self: ?*anyopaque, name: []const u8, reference: *f64) QtC.KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemDouble(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QRect ```
    pub fn AddItemRect(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemRect(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QRectF ```
    pub fn AddItemRectF(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemRectF(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QPoint ```
    pub fn AddItemPoint(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPoint(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QPointF ```
    pub fn AddItemPointF(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPointF(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QSize ```
    pub fn AddItemSize(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemSize(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QSizeF ```
    pub fn AddItemSizeF(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemSizeF(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QDateTime ```
    pub fn AddItemDateTime(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemDateTime(@ptrCast(self), name_str, @ptrCast(reference));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: [][]const u8, allocator: std.mem.Allocator ```
    pub fn AddItemStringList(self: ?*anyopaque, name: []const u8, reference: [][]const u8, allocator: std.mem.Allocator) QtC.KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kconfigskeleton.AddItemStringList: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i| {
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemStringList(@ptrCast(self), name_str, reference_list);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: []i32 ```
    pub fn AddItemIntList(self: ?*anyopaque, name: []const u8, reference: []i32) QtC.KCoreConfigSkeleton__ItemIntList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemIntList(@ptrCast(self), name_str, reference_list);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#config)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn Config(self: ?*anyopaque) QtC.KConfig {
        return qtc.KCoreConfigSkeleton_Config(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#config)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn Config2(self: ?*anyopaque) QtC.KConfig {
        return qtc.KCoreConfigSkeleton_Config2(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#items)
    ///
    /// ``` self: QtC.KConfigSkeleton, allocator: std.mem.Allocator ```
    pub fn Items(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KConfigSkeletonItem {
        const _arr: qtc.libqt_list = qtc.KCoreConfigSkeleton_Items(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KConfigSkeletonItem, _arr.len) catch @panic("kconfigskeleton.Items: Memory allocation failed");
        const _data: [*]QtC.KConfigSkeletonItem = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#removeItem)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8 ```
    pub fn RemoveItem(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KCoreConfigSkeleton_RemoveItem(@ptrCast(self), name_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#clearItems)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn ClearItems(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_ClearItems(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#isImmutable)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8 ```
    pub fn IsImmutable(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_IsImmutable(@ptrCast(self), name_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#findItem)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8 ```
    pub fn FindItem(self: ?*anyopaque, name: []const u8) QtC.KConfigSkeletonItem {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_FindItem(@ptrCast(self), name_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#save)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn Save(self: ?*anyopaque) bool {
        return qtc.KCoreConfigSkeleton_Save(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn ConfigChanged(self: ?*anyopaque) void {
        qtc.KCoreConfigSkeleton_ConfigChanged(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#configChanged)
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton) callconv(.c) void ```
    pub fn OnConfigChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KCoreConfigSkeleton_Connect_ConfigChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItem)
    ///
    /// ``` self: QtC.KConfigSkeleton, item: QtC.KConfigSkeletonItem, name: []const u8 ```
    pub fn AddItem2(self: ?*anyopaque, item: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KCoreConfigSkeleton_AddItem2(@ptrCast(self), @ptrCast(item), name_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8 ```
    pub fn AddItemString3(self: ?*anyopaque, name: []const u8, reference: []const u8, defaultValue: []const u8) QtC.KCoreConfigSkeleton__ItemString {
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
        return qtc.KCoreConfigSkeleton_AddItemString3(@ptrCast(self), name_str, reference_str, defaultValue_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemString)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8 ```
    pub fn AddItemString4(self: ?*anyopaque, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) QtC.KCoreConfigSkeleton__ItemString {
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
        return qtc.KCoreConfigSkeleton_AddItemString4(@ptrCast(self), name_str, reference_str, defaultValue_str, key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8 ```
    pub fn AddItemPassword3(self: ?*anyopaque, name: []const u8, reference: []const u8, defaultValue: []const u8) QtC.KCoreConfigSkeleton__ItemPassword {
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
        return qtc.KCoreConfigSkeleton_AddItemPassword3(@ptrCast(self), name_str, reference_str, defaultValue_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemPassword)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8 ```
    pub fn AddItemPassword4(self: ?*anyopaque, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) QtC.KCoreConfigSkeleton__ItemPassword {
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
        return qtc.KCoreConfigSkeleton_AddItemPassword4(@ptrCast(self), name_str, reference_str, defaultValue_str, key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8 ```
    pub fn AddItemPath3(self: ?*anyopaque, name: []const u8, reference: []const u8, defaultValue: []const u8) QtC.KCoreConfigSkeleton__ItemPath {
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
        return qtc.KCoreConfigSkeleton_AddItemPath3(@ptrCast(self), name_str, reference_str, defaultValue_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemPath)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8 ```
    pub fn AddItemPath4(self: ?*anyopaque, name: []const u8, reference: []const u8, defaultValue: []const u8, key: []const u8) QtC.KCoreConfigSkeleton__ItemPath {
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
        return qtc.KCoreConfigSkeleton_AddItemPath4(@ptrCast(self), name_str, reference_str, defaultValue_str, key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QVariant, defaultValue: QtC.QVariant ```
    pub fn AddItemProperty3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemProperty3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemProperty)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QVariant, defaultValue: QtC.QVariant, key: []const u8 ```
    pub fn AddItemProperty4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemProperty {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemProperty4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *bool, defaultValue: bool ```
    pub fn AddItemBool3(self: ?*anyopaque, name: []const u8, reference: *bool, defaultValue: bool) QtC.KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemBool3(@ptrCast(self), name_str, @ptrCast(reference), defaultValue);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemBool)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *bool, defaultValue: bool, key: []const u8 ```
    pub fn AddItemBool4(self: ?*anyopaque, name: []const u8, reference: *bool, defaultValue: bool, key: []const u8) QtC.KCoreConfigSkeleton__ItemBool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemBool4(@ptrCast(self), name_str, @ptrCast(reference), defaultValue, key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *i32, defaultValue: i32 ```
    pub fn AddItemInt3(self: ?*anyopaque, name: []const u8, reference: *i32, defaultValue: i32) QtC.KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemInt3(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemInt)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *i32, defaultValue: i32, key: []const u8 ```
    pub fn AddItemInt4(self: ?*anyopaque, name: []const u8, reference: *i32, defaultValue: i32, key: []const u8) QtC.KCoreConfigSkeleton__ItemInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemInt4(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue), key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *u32, defaultValue: u32 ```
    pub fn AddItemUInt3(self: ?*anyopaque, name: []const u8, reference: *u32, defaultValue: u32) QtC.KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemUInt3(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemUInt)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *u32, defaultValue: u32, key: []const u8 ```
    pub fn AddItemUInt4(self: ?*anyopaque, name: []const u8, reference: *u32, defaultValue: u32, key: []const u8) QtC.KCoreConfigSkeleton__ItemUInt {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemUInt4(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue), key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *i64, defaultValue: i64 ```
    pub fn AddItemLongLong3(self: ?*anyopaque, name: []const u8, reference: *i64, defaultValue: i64) QtC.KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemLongLong3(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemLongLong)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *i64, defaultValue: i64, key: []const u8 ```
    pub fn AddItemLongLong4(self: ?*anyopaque, name: []const u8, reference: *i64, defaultValue: i64, key: []const u8) QtC.KCoreConfigSkeleton__ItemLongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemLongLong4(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue), key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *u64, defaultValue: u64 ```
    pub fn AddItemULongLong3(self: ?*anyopaque, name: []const u8, reference: *u64, defaultValue: u64) QtC.KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemULongLong3(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemULongLong)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *u64, defaultValue: u64, key: []const u8 ```
    pub fn AddItemULongLong4(self: ?*anyopaque, name: []const u8, reference: *u64, defaultValue: u64, key: []const u8) QtC.KCoreConfigSkeleton__ItemULongLong {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemULongLong4(@ptrCast(self), name_str, @ptrCast(reference), @intCast(defaultValue), key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *f64, defaultValue: f64 ```
    pub fn AddItemDouble3(self: ?*anyopaque, name: []const u8, reference: *f64, defaultValue: f64) QtC.KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemDouble3(@ptrCast(self), name_str, @ptrCast(reference), @floatCast(defaultValue));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemDouble)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: *f64, defaultValue: f64, key: []const u8 ```
    pub fn AddItemDouble4(self: ?*anyopaque, name: []const u8, reference: *f64, defaultValue: f64, key: []const u8) QtC.KCoreConfigSkeleton__ItemDouble {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemDouble4(@ptrCast(self), name_str, @ptrCast(reference), @floatCast(defaultValue), key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QRect, defaultValue: QtC.QRect ```
    pub fn AddItemRect3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemRect3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemRect)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QRect, defaultValue: QtC.QRect, key: []const u8 ```
    pub fn AddItemRect4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemRect {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemRect4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QRectF, defaultValue: QtC.QRectF ```
    pub fn AddItemRectF3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemRectF3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemRectF)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QRectF, defaultValue: QtC.QRectF, key: []const u8 ```
    pub fn AddItemRectF4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemRectF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemRectF4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QPoint, defaultValue: QtC.QPoint ```
    pub fn AddItemPoint3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPoint3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemPoint)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QPoint, defaultValue: QtC.QPoint, key: []const u8 ```
    pub fn AddItemPoint4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemPoint {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPoint4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QPointF, defaultValue: QtC.QPointF ```
    pub fn AddItemPointF3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPointF3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemPointF)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QPointF, defaultValue: QtC.QPointF, key: []const u8 ```
    pub fn AddItemPointF4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemPointF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemPointF4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QSize, defaultValue: QtC.QSize ```
    pub fn AddItemSize3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemSize3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemSize)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QSize, defaultValue: QtC.QSize, key: []const u8 ```
    pub fn AddItemSize4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemSize {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemSize4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QSizeF, defaultValue: QtC.QSizeF ```
    pub fn AddItemSizeF3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemSizeF3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemSizeF)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QSizeF, defaultValue: QtC.QSizeF, key: []const u8 ```
    pub fn AddItemSizeF4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemSizeF {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemSizeF4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QDateTime, defaultValue: QtC.QDateTime ```
    pub fn AddItemDateTime3(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemDateTime3(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemDateTime)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: QtC.QDateTime, defaultValue: QtC.QDateTime, key: []const u8 ```
    pub fn AddItemDateTime4(self: ?*anyopaque, name: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque, key: []const u8) QtC.KCoreConfigSkeleton__ItemDateTime {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemDateTime4(@ptrCast(self), name_str, @ptrCast(reference), @ptrCast(defaultValue), key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: [][]const u8, defaultValue: [][]const u8, allocator: std.mem.Allocator ```
    pub fn AddItemStringList3(self: ?*anyopaque, name: []const u8, reference: [][]const u8, defaultValue: [][]const u8, allocator: std.mem.Allocator) QtC.KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kconfigskeleton.AddItemStringList3: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i| {
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        var defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("kconfigskeleton.AddItemStringList3: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |item, i| {
            defaultValue_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemStringList3(@ptrCast(self), name_str, reference_list, defaultValue_list);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemStringList)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: [][]const u8, defaultValue: [][]const u8, key: []const u8, allocator: std.mem.Allocator ```
    pub fn AddItemStringList4(self: ?*anyopaque, name: []const u8, reference: [][]const u8, defaultValue: [][]const u8, key: []const u8, allocator: std.mem.Allocator) QtC.KCoreConfigSkeleton__ItemStringList {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var reference_arr = allocator.alloc(qtc.libqt_string, reference.len) catch @panic("kconfigskeleton.AddItemStringList4: Memory allocation failed");
        defer allocator.free(reference_arr);
        for (reference, 0..reference.len) |item, i| {
            reference_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const reference_list = qtc.libqt_list{
            .len = reference.len,
            .data = reference_arr.ptr,
        };
        var defaultValue_arr = allocator.alloc(qtc.libqt_string, defaultValue.len) catch @panic("kconfigskeleton.AddItemStringList4: Memory allocation failed");
        defer allocator.free(defaultValue_arr);
        for (defaultValue, 0..defaultValue.len) |item, i| {
            defaultValue_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const defaultValue_list = qtc.libqt_list{
            .len = defaultValue.len,
            .data = defaultValue_arr.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KCoreConfigSkeleton_AddItemStringList4(@ptrCast(self), name_str, reference_list, defaultValue_list, key_str);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: []i32, defaultValue: []i32 ```
    pub fn AddItemIntList3(self: ?*anyopaque, name: []const u8, reference: []i32, defaultValue: []i32) QtC.KCoreConfigSkeleton__ItemIntList {
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
        return qtc.KCoreConfigSkeleton_AddItemIntList3(@ptrCast(self), name_str, reference_list, defaultValue_list);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#addItemIntList)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, reference: []i32, defaultValue: []i32, key: []const u8 ```
    pub fn AddItemIntList4(self: ?*anyopaque, name: []const u8, reference: []i32, defaultValue: []i32, key: []const u8) QtC.KCoreConfigSkeleton__ItemIntList {
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
        return qtc.KCoreConfigSkeleton_AddItemIntList4(@ptrCast(self), name_str, reference_list, defaultValue_list, key_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KConfigSkeleton, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigskeleton.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KConfigSkeleton, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KConfigSkeleton, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KConfigSkeleton, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KConfigSkeleton, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KConfigSkeleton, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KConfigSkeleton, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kconfigskeleton.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KConfigSkeleton, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KConfigSkeleton, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KConfigSkeleton, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KConfigSkeleton, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KConfigSkeleton, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KConfigSkeleton, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kconfigskeleton.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfigskeleton.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KConfigSkeleton, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KConfigSkeleton, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KConfigSkeleton, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KConfigSkeleton, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KConfigSkeleton, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn SetDefaults(self: ?*anyopaque) void {
        qtc.KConfigSkeleton_SetDefaults(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn QBaseSetDefaults(self: ?*anyopaque) void {
        qtc.KConfigSkeleton_QBaseSetDefaults(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#setDefaults)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn () callconv(.c) void ```
    pub fn OnSetDefaults(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigSkeleton_OnSetDefaults(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, b: bool ```
    pub fn UseDefaults(self: ?*anyopaque, b: bool) bool {
        return qtc.KConfigSkeleton_UseDefaults(@ptrCast(self), b);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, b: bool ```
    pub fn QBaseUseDefaults(self: ?*anyopaque, b: bool) bool {
        return qtc.KConfigSkeleton_QBaseUseDefaults(@ptrCast(self), b);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#useDefaults)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton, b: bool) callconv(.c) bool ```
    pub fn OnUseDefaults(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.KConfigSkeleton_OnUseDefaults(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, b: bool ```
    pub fn UsrUseDefaults(self: ?*anyopaque, b: bool) bool {
        return qtc.KConfigSkeleton_UsrUseDefaults(@ptrCast(self), b);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, b: bool ```
    pub fn QBaseUsrUseDefaults(self: ?*anyopaque, b: bool) bool {
        return qtc.KConfigSkeleton_QBaseUsrUseDefaults(@ptrCast(self), b);
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#usrUseDefaults)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton, b: bool) callconv(.c) bool ```
    pub fn OnUsrUseDefaults(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.KConfigSkeleton_OnUsrUseDefaults(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn UsrSetDefaults(self: ?*anyopaque) void {
        qtc.KConfigSkeleton_UsrSetDefaults(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn QBaseUsrSetDefaults(self: ?*anyopaque) void {
        qtc.KConfigSkeleton_QBaseUsrSetDefaults(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#usrSetDefaults)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn () callconv(.c) void ```
    pub fn OnUsrSetDefaults(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigSkeleton_OnUsrSetDefaults(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn UsrRead(self: ?*anyopaque) void {
        qtc.KConfigSkeleton_UsrRead(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn QBaseUsrRead(self: ?*anyopaque) void {
        qtc.KConfigSkeleton_QBaseUsrRead(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#usrRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn () callconv(.c) void ```
    pub fn OnUsrRead(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigSkeleton_OnUsrRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn UsrSave(self: ?*anyopaque) bool {
        return qtc.KConfigSkeleton_UsrSave(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn QBaseUsrSave(self: ?*anyopaque) bool {
        return qtc.KConfigSkeleton_QBaseUsrSave(@ptrCast(self));
    }

    /// Inherited from KCoreConfigSkeleton
    ///
    /// [Qt documentation](https://api.kde.org/kcoreconfigskeleton.html#usrSave)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn () callconv(.c) bool ```
    pub fn OnUsrSave(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KConfigSkeleton_OnUsrSave(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KConfigSkeleton_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KConfigSkeleton_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KConfigSkeleton_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KConfigSkeleton_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KConfigSkeleton_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KConfigSkeleton_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KConfigSkeleton_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KConfigSkeleton_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigSkeleton_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KConfigSkeleton_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KConfigSkeleton_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigSkeleton_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KConfigSkeleton_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KConfigSkeleton_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigSkeleton_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KConfigSkeleton_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KConfigSkeleton_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigSkeleton_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KConfigSkeleton_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KConfigSkeleton_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigSkeleton_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KConfigSkeleton_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KConfigSkeleton_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KConfigSkeleton_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KConfigSkeleton_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KConfigSkeleton_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KConfigSkeleton_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KConfigSkeleton_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KConfigSkeleton_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KConfigSkeleton_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KConfigSkeleton_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KConfigSkeleton_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KConfigSkeleton_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KConfigSkeleton, callback: *const fn (self: QtC.KConfigSkeleton, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton.html#dtor.KConfigSkeleton)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KConfigSkeleton ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KConfigSkeleton_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kconfigskeleton-itemcolor.html
pub const kconfigskeleton__itemcolor = struct {
    /// New constructs a new KConfigSkeleton::ItemColor object.
    ///
    /// ``` _group: []const u8, _key: []const u8, reference: QtC.QColor ```
    pub fn New(_group: []const u8, _key: []const u8, reference: ?*anyopaque) QtC.KConfigSkeleton__ItemColor {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KConfigSkeleton__ItemColor_new(_group_str, _key_str, @ptrCast(reference));
    }

    /// New2 constructs a new KConfigSkeleton::ItemColor object.
    ///
    /// ``` _group: []const u8, _key: []const u8, reference: QtC.QColor, defaultValue: QtC.QColor ```
    pub fn New2(_group: []const u8, _key: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KConfigSkeleton__ItemColor {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KConfigSkeleton__ItemColor_new2(_group_str, _key_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemcolor.html#readConfig)
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemColor, config: QtC.KConfig ```
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KConfigSkeleton__ItemColor_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemcolor.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemColor, callback: *const fn (self: QtC.KConfigSkeleton__ItemColor, config: QtC.KConfig) callconv(.c) void ```
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigSkeleton__ItemColor_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemcolor.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemColor, config: QtC.KConfig ```
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KConfigSkeleton__ItemColor_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemcolor.html#setProperty)
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemColor, p: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KConfigSkeleton__ItemColor_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemcolor.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemColor, callback: *const fn (self: QtC.KConfigSkeleton__ItemColor, p: QtC.QVariant) callconv(.c) void ```
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigSkeleton__ItemColor_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemcolor.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemColor, p: QtC.QVariant ```
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KConfigSkeleton__ItemColor_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemcolor.html#isEqual)
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemColor, p: QtC.QVariant ```
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KConfigSkeleton__ItemColor_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemcolor.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemColor, callback: *const fn (self: QtC.KConfigSkeleton__ItemColor, p: QtC.QVariant) callconv(.c) bool ```
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KConfigSkeleton__ItemColor_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemcolor.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemColor, p: QtC.QVariant ```
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KConfigSkeleton__ItemColor_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemcolor.html#property)
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemColor ```
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigSkeleton__ItemColor_Property(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemcolor.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemColor, callback: *const fn () callconv(.c) QtC.QVariant ```
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KConfigSkeleton__ItemColor_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemcolor.html#property)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemColor ```
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigSkeleton__ItemColor_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemColor ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KConfigSkeleton__ItemColor_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kconfigskeleton-itemfont.html
pub const kconfigskeleton__itemfont = struct {
    /// New constructs a new KConfigSkeleton::ItemFont object.
    ///
    /// ``` _group: []const u8, _key: []const u8, reference: QtC.QFont ```
    pub fn New(_group: []const u8, _key: []const u8, reference: ?*anyopaque) QtC.KConfigSkeleton__ItemFont {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KConfigSkeleton__ItemFont_new(_group_str, _key_str, @ptrCast(reference));
    }

    /// New2 constructs a new KConfigSkeleton::ItemFont object.
    ///
    /// ``` _group: []const u8, _key: []const u8, reference: QtC.QFont, defaultValue: QtC.QFont ```
    pub fn New2(_group: []const u8, _key: []const u8, reference: ?*anyopaque, defaultValue: ?*anyopaque) QtC.KConfigSkeleton__ItemFont {
        const _group_str = qtc.libqt_string{
            .len = _group.len,
            .data = _group.ptr,
        };
        const _key_str = qtc.libqt_string{
            .len = _key.len,
            .data = _key.ptr,
        };

        return qtc.KConfigSkeleton__ItemFont_new2(_group_str, _key_str, @ptrCast(reference), @ptrCast(defaultValue));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemfont.html#readConfig)
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemFont, config: QtC.KConfig ```
    pub fn ReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KConfigSkeleton__ItemFont_ReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemfont.html#readConfig)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemFont, callback: *const fn (self: QtC.KConfigSkeleton__ItemFont, config: QtC.KConfig) callconv(.c) void ```
    pub fn OnReadConfig(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigSkeleton__ItemFont_OnReadConfig(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemfont.html#readConfig)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemFont, config: QtC.KConfig ```
    pub fn QBaseReadConfig(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.KConfigSkeleton__ItemFont_QBaseReadConfig(@ptrCast(self), @ptrCast(config));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemfont.html#setProperty)
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemFont, p: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KConfigSkeleton__ItemFont_SetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemfont.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemFont, callback: *const fn (self: QtC.KConfigSkeleton__ItemFont, p: QtC.QVariant) callconv(.c) void ```
    pub fn OnSetProperty(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigSkeleton__ItemFont_OnSetProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemfont.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemFont, p: QtC.QVariant ```
    pub fn QBaseSetProperty(self: ?*anyopaque, p: ?*anyopaque) void {
        qtc.KConfigSkeleton__ItemFont_QBaseSetProperty(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemfont.html#isEqual)
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemFont, p: QtC.QVariant ```
    pub fn IsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KConfigSkeleton__ItemFont_IsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemfont.html#isEqual)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemFont, callback: *const fn (self: QtC.KConfigSkeleton__ItemFont, p: QtC.QVariant) callconv(.c) bool ```
    pub fn OnIsEqual(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KConfigSkeleton__ItemFont_OnIsEqual(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemfont.html#isEqual)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemFont, p: QtC.QVariant ```
    pub fn QBaseIsEqual(self: ?*anyopaque, p: ?*anyopaque) bool {
        return qtc.KConfigSkeleton__ItemFont_QBaseIsEqual(@ptrCast(self), @ptrCast(p));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemfont.html#property)
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemFont ```
    pub fn Property(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigSkeleton__ItemFont_Property(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemfont.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemFont, callback: *const fn () callconv(.c) QtC.QVariant ```
    pub fn OnProperty(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QVariant) void {
        qtc.KConfigSkeleton__ItemFont_OnProperty(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kconfigskeleton-itemfont.html#property)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemFont ```
    pub fn QBaseProperty(self: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigSkeleton__ItemFont_QBaseProperty(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KConfigSkeleton__ItemFont ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KConfigSkeleton__ItemFont_Delete(@ptrCast(self));
    }
};
