const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsettings_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html)
pub const QSettings = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSettings,

    pub const _is_QSettings = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSettings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` organization: []const u8 `
    ///
    pub fn new(organization: []const u8) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        return .{ .ptr = qtc.QSettings_new(organization_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSettings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _scope: qsettings_enums.Scope `
    ///
    /// ` organization: []const u8 `
    ///
    pub fn new2(_scope: i32, organization: []const u8) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        return .{ .ptr = qtc.QSettings_new2(@bitCast(_scope), organization_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSettings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _format: qsettings_enums.Format `
    ///
    /// ` _scope: qsettings_enums.Scope `
    ///
    /// ` organization: []const u8 `
    ///
    pub fn new3(_format: i32, _scope: i32, organization: []const u8) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        return .{ .ptr = qtc.QSettings_new3(@bitCast(_format), @bitCast(_scope), organization_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSettings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    /// ` _format: qsettings_enums.Format `
    ///
    pub fn new4(_fileName: []const u8, _format: i32) QSettings {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        return .{ .ptr = qtc.QSettings_new4(fileName_str, @bitCast(_format)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QSettings object in C++ memory
    ///
    pub fn new5() QSettings {
        return .{ .ptr = qtc.QSettings_new5() };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QSettings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _scope: qsettings_enums.Scope `
    ///
    pub fn new6(_scope: i32) QSettings {
        return .{ .ptr = qtc.QSettings_new6(@bitCast(_scope)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QSettings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` organization: []const u8 `
    ///
    /// ` application: []const u8 `
    ///
    pub fn new7(organization: []const u8, application: []const u8) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        return .{ .ptr = qtc.QSettings_new7(organization_str, application_str) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QSettings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` organization: []const u8 `
    ///
    /// ` application: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new8(organization: []const u8, application: []const u8, _parent: anytype) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSettings_new8(organization_str, application_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QSettings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _scope: qsettings_enums.Scope `
    ///
    /// ` organization: []const u8 `
    ///
    /// ` application: []const u8 `
    ///
    pub fn new9(_scope: i32, organization: []const u8, application: []const u8) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        return .{ .ptr = qtc.QSettings_new9(@bitCast(_scope), organization_str, application_str) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QSettings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _scope: qsettings_enums.Scope `
    ///
    /// ` organization: []const u8 `
    ///
    /// ` application: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new10(_scope: i32, organization: []const u8, application: []const u8, _parent: anytype) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSettings_new10(@bitCast(_scope), organization_str, application_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QSettings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _format: qsettings_enums.Format `
    ///
    /// ` _scope: qsettings_enums.Scope `
    ///
    /// ` organization: []const u8 `
    ///
    /// ` application: []const u8 `
    ///
    pub fn new11(_format: i32, _scope: i32, organization: []const u8, application: []const u8) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        return .{ .ptr = qtc.QSettings_new11(@bitCast(_format), @bitCast(_scope), organization_str, application_str) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QSettings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _format: qsettings_enums.Format `
    ///
    /// ` _scope: qsettings_enums.Scope `
    ///
    /// ` organization: []const u8 `
    ///
    /// ` application: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new12(_format: i32, _scope: i32, organization: []const u8, application: []const u8, _parent: anytype) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSettings_new12(@bitCast(_format), @bitCast(_scope), organization_str, application_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new13` instead
    ///
    pub const New13 = new13;

    /// Allocate a new QSettings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    /// ` _format: qsettings_enums.Format `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new13(_fileName: []const u8, _format: i32, _parent: anytype) QSettings {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSettings_new13(fileName_str, @bitCast(_format), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new14` instead
    ///
    pub const New14 = new14;

    /// Allocate a new QSettings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new14(_parent: anytype) QSettings {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSettings_new14(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new15` instead
    ///
    pub const New15 = new15;

    /// Allocate a new QSettings object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _scope: qsettings_enums.Scope `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new15(_scope: i32, _parent: anytype) QSettings {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSettings_new15(@bitCast(_scope), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn metaObject(self: QSettings) QMetaObject {
        return .{ .ptr = qtc.QSettings_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QSettings `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QSettings, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSettings_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSettings `
    ///
    pub fn superMetaObject(self: QSettings) QMetaObject {
        return .{ .ptr = qtc.QSettings_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QSettings, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSettings_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSettings `
    ///
    /// ` callback: *const fn (self: QSettings, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QSettings, callback: *const fn (QSettings, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSettings_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QSettings, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSettings_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QSettings, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSettings_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSettings `
    ///
    /// ` callback: *const fn (self: QSettings, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QSettings, callback: *const fn (QSettings, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSettings_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QSettings, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSettings_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSettings.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn clear(self: QSettings) void {
        qtc.QSettings_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sync` instead
    ///
    pub const Sync = sync;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#sync)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn sync(self: QSettings) void {
        qtc.QSettings_Sync(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ## Returns:
    ///
    /// ` qsettings_enums.Status `
    ///
    pub fn status(self: QSettings) i32 {
        return qtc.QSettings_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAtomicSyncRequired` instead
    ///
    pub const IsAtomicSyncRequired = isAtomicSyncRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#isAtomicSyncRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn isAtomicSyncRequired(self: QSettings) bool {
        return qtc.QSettings_IsAtomicSyncRequired(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAtomicSyncRequired` instead
    ///
    pub const SetAtomicSyncRequired = setAtomicSyncRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#setAtomicSyncRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` enable: bool `
    ///
    pub fn setAtomicSyncRequired(self: QSettings, enable: bool) void {
        qtc.QSettings_SetAtomicSyncRequired(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `beginGroup` instead
    ///
    pub const BeginGroup = beginGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#beginGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn beginGroup(self: QSettings, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QSettings_BeginGroup(@ptrCast(self.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `endGroup` instead
    ///
    pub const EndGroup = endGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#endGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn endGroup(self: QSettings) void {
        qtc.QSettings_EndGroup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn group(self: QSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSettings_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSettings.group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `beginReadArray` instead
    ///
    pub const BeginReadArray = beginReadArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#beginReadArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn beginReadArray(self: QSettings, prefix: []const u8) i32 {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QSettings_BeginReadArray(@ptrCast(self.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `beginWriteArray` instead
    ///
    pub const BeginWriteArray = beginWriteArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#beginWriteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn beginWriteArray(self: QSettings, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QSettings_BeginWriteArray(@ptrCast(self.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `endArray` instead
    ///
    pub const EndArray = endArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#endArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn endArray(self: QSettings) void {
        qtc.QSettings_EndArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setArrayIndex` instead
    ///
    pub const SetArrayIndex = setArrayIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#setArrayIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` i: i32 `
    ///
    pub fn setArrayIndex(self: QSettings, i: i32) void {
        qtc.QSettings_SetArrayIndex(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `allKeys` instead
    ///
    pub const AllKeys = allKeys;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#allKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allKeys(self: QSettings, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSettings_AllKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSettings.allKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSettings.allKeys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `childKeys` instead
    ///
    pub const ChildKeys = childKeys;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#childKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childKeys(self: QSettings, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSettings_ChildKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSettings.childKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSettings.childKeys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `childGroups` instead
    ///
    pub const ChildGroups = childGroups;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#childGroups)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn childGroups(self: QSettings, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSettings_ChildGroups(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSettings.childGroups: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSettings.childGroups: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isWritable` instead
    ///
    pub const IsWritable = isWritable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn isWritable(self: QSettings) bool {
        return qtc.QSettings_IsWritable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` key: []const u8 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setValue(self: QSettings, key: []const u8, _value: anytype) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QSettings_SetValue(@ptrCast(self.ptr), key_str, @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn value(self: QSettings, key: []const u8, defaultValue: anytype) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.QSettings_Value(@ptrCast(self.ptr), key_str, @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `value2` instead
    ///
    pub const Value2 = value2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` key: []const u8 `
    ///
    pub fn value2(self: QSettings, key: []const u8) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QSettings_Value2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` key: []const u8 `
    ///
    pub fn remove(self: QSettings, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSettings_Remove(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` key: []const u8 `
    ///
    pub fn contains(self: QSettings, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QSettings_Contains(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `setFallbacksEnabled` instead
    ///
    pub const SetFallbacksEnabled = setFallbacksEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#setFallbacksEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` b: bool `
    ///
    pub fn setFallbacksEnabled(self: QSettings, b: bool) void {
        qtc.QSettings_SetFallbacksEnabled(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `fallbacksEnabled` instead
    ///
    pub const FallbacksEnabled = fallbacksEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#fallbacksEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn fallbacksEnabled(self: QSettings) bool {
        return qtc.QSettings_FallbacksEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: QSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSettings_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSettings.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ## Returns:
    ///
    /// ` qsettings_enums.Format `
    ///
    pub fn format(self: QSettings) i32 {
        return qtc.QSettings_Format(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scope` instead
    ///
    pub const Scope = scope;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#scope)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ## Returns:
    ///
    /// ` qsettings_enums.Scope `
    ///
    pub fn scope(self: QSettings) i32 {
        return qtc.QSettings_Scope(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `organizationName` instead
    ///
    pub const OrganizationName = organizationName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#organizationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn organizationName(self: QSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSettings_OrganizationName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSettings.organizationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `applicationName` instead
    ///
    pub const ApplicationName = applicationName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#applicationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn applicationName(self: QSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSettings_ApplicationName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSettings.applicationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDefaultFormat` instead
    ///
    pub const SetDefaultFormat = setDefaultFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#setDefaultFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` _format: qsettings_enums.Format `
    ///
    pub fn setDefaultFormat(_format: i32) void {
        qtc.QSettings_SetDefaultFormat(@bitCast(_format));
    }

    /// ### DEPRECATED: Use `defaultFormat` instead
    ///
    pub const DefaultFormat = defaultFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#defaultFormat)
    ///
    /// ## Returns:
    ///
    /// ` qsettings_enums.Format `
    ///
    pub fn defaultFormat() i32 {
        return qtc.QSettings_DefaultFormat();
    }

    /// ### DEPRECATED: Use `setPath` instead
    ///
    pub const SetPath = setPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` _format: qsettings_enums.Format `
    ///
    /// ` _scope: qsettings_enums.Scope `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setPath(_format: i32, _scope: i32, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QSettings_SetPath(@bitCast(_format), @bitCast(_scope), path_str);
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QSettings, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSettings_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSettings `
    ///
    /// ` callback: *const fn (self: QSettings, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QSettings, callback: *const fn (QSettings, QEvent) callconv(.c) bool) void {
        qtc.QSettings_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QSettings, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSettings_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSettings.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSettings.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `beginWriteArray2` instead
    ///
    pub const BeginWriteArray2 = beginWriteArray2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#beginWriteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    /// ` size: i32 `
    ///
    pub fn beginWriteArray2(self: QSettings, prefix: []const u8, size: i32) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QSettings_BeginWriteArray2(@ptrCast(self.ptr), prefix_str, @bitCast(size));
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
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSettings.objectName: Memory allocation failed");
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
    /// ` self: QSettings `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QSettings, name: []const u8) void {
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
    /// ` self: QSettings `
    ///
    pub fn isWidgetType(self: QSettings) bool {
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
    /// ` self: QSettings `
    ///
    pub fn isWindowType(self: QSettings) bool {
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
    /// ` self: QSettings `
    ///
    pub fn isQuickItemType(self: QSettings) bool {
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
    /// ` self: QSettings `
    ///
    pub fn signalsBlocked(self: QSettings) bool {
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
    /// ` self: QSettings `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QSettings, b: bool) bool {
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
    /// ` self: QSettings `
    ///
    pub fn thread(self: QSettings) QThread {
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
    /// ` self: QSettings `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QSettings, _thread: anytype) bool {
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
    /// ` self: QSettings `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QSettings, interval: i32) i32 {
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
    /// ` self: QSettings `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QSettings, time: i64) i32 {
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
    /// ` self: QSettings `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QSettings, id: i32) void {
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
    /// ` self: QSettings `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QSettings, id: i32) void {
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
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QSettings, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QSettings.children: Memory allocation failed");
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
    /// ` self: QSettings `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QSettings, _parent: anytype) void {
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
    /// ` self: QSettings `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QSettings, filterObj: anytype) void {
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
    /// ` self: QSettings `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QSettings, obj: anytype) void {
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
    /// ` self: QSettings `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QSettings, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSettings `
    ///
    pub fn disconnect3(self: QSettings) bool {
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
    /// ` self: QSettings `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QSettings, receiver: anytype) bool {
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
    /// ` self: QSettings `
    ///
    pub fn dumpObjectTree(self: QSettings) void {
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
    /// ` self: QSettings `
    ///
    pub fn dumpObjectInfo(self: QSettings) void {
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
    /// ` self: QSettings `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setProperty(self: QSettings, name: [:0]const u8, _value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(_value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(_value.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QSettings, name: [:0]const u8) QVariant {
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
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QSettings, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSettings.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSettings.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSettings `
    ///
    pub fn bindingStorage(self: QSettings) QBindingStorage {
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
    /// ` self: QSettings `
    ///
    pub fn bindingStorage2(self: QSettings) QBindingStorage {
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
    /// ` self: QSettings `
    ///
    pub fn destroyed(self: QSettings) void {
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
    /// ` self: QSettings `
    ///
    /// ` callback: *const fn (self: QSettings) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QSettings, callback: *const fn (QSettings) callconv(.c) void) void {
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
    /// ` self: QSettings `
    ///
    pub fn parent(self: QSettings) QObject {
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
    /// ` self: QSettings `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QSettings, classname: [:0]const u8) bool {
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
    /// ` self: QSettings `
    ///
    pub fn deleteLater(self: QSettings) void {
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
    /// ` self: QSettings `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QSettings, interval: i32, timerType: i32) i32 {
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
    /// ` self: QSettings `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QSettings, time: i64, timerType: i32) i32 {
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
    /// ` self: QSettings `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QSettings, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSettings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QSettings, signal: [:0]const u8) bool {
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
    /// ` self: QSettings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QSettings, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSettings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QSettings, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSettings `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QSettings, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSettings `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QSettings, param1: anytype) void {
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
    /// ` self: QSettings `
    ///
    /// ` callback: *const fn (self: QSettings, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QSettings, callback: *const fn (QSettings, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSettings `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QSettings, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSettings_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QSettings, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSettings_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSettings`
    ///
    /// ` callback: *const fn (self: QSettings, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QSettings, callback: *const fn (QSettings, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSettings_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSettings `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QSettings, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSettings_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QSettings, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSettings_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSettings`
    ///
    /// ` callback: *const fn (self: QSettings, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QSettings, callback: *const fn (QSettings, QTimerEvent) callconv(.c) void) void {
        qtc.QSettings_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSettings `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QSettings, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSettings_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QSettings, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSettings_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSettings`
    ///
    /// ` callback: *const fn (self: QSettings, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QSettings, callback: *const fn (QSettings, QChildEvent) callconv(.c) void) void {
        qtc.QSettings_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSettings `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QSettings, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSettings_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QSettings, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSettings_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSettings`
    ///
    /// ` callback: *const fn (self: QSettings, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QSettings, callback: *const fn (QSettings, QEvent) callconv(.c) void) void {
        qtc.QSettings_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSettings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QSettings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSettings_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QSettings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSettings_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSettings`
    ///
    /// ` callback: *const fn (self: QSettings, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QSettings, callback: *const fn (QSettings, QMetaMethod) callconv(.c) void) void {
        qtc.QSettings_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSettings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QSettings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSettings_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QSettings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSettings_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSettings`
    ///
    /// ` callback: *const fn (self: QSettings, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QSettings, callback: *const fn (QSettings, QMetaMethod) callconv(.c) void) void {
        qtc.QSettings_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSettings `
    ///
    pub fn sender(self: QSettings) QObject {
        return .{ .ptr = qtc.QSettings_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSettings `
    ///
    pub fn superSender(self: QSettings) QObject {
        return .{ .ptr = qtc.QSettings_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QSettings`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QSettings, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSettings_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSettings `
    ///
    pub fn senderSignalIndex(self: QSettings) i32 {
        return qtc.QSettings_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSettings `
    ///
    pub fn superSenderSignalIndex(self: QSettings) i32 {
        return qtc.QSettings_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSettings`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QSettings, callback: *const fn () callconv(.c) i32) void {
        qtc.QSettings_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSettings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QSettings, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSettings_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSettings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QSettings, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSettings_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSettings`
    ///
    /// ` callback: *const fn (self: QSettings, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QSettings, callback: *const fn (QSettings, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSettings_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSettings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QSettings, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSettings_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QSettings, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSettings_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSettings`
    ///
    /// ` callback: *const fn (self: QSettings, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QSettings, callback: *const fn (QSettings, QMetaMethod) callconv(.c) bool) void {
        qtc.QSettings_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSettings `
    ///
    /// ` callback: *const fn (self: QSettings, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QSettings, callback: *const fn (QSettings, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#dtor.QSettings)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSettings `
    ///
    pub fn delete(self: QSettings) void {
        qtc.QSettings_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#public-types)
pub const enums = struct {
    pub const Status = enum(i32) {
        pub const NoError: i32 = 0;
        pub const AccessError: i32 = 1;
        pub const FormatError: i32 = 2;
    };

    pub const Format = enum(i32) {
        pub const NativeFormat: i32 = 0;
        pub const IniFormat: i32 = 1;
        pub const Registry32Format: i32 = 2;
        pub const Registry64Format: i32 = 3;
        pub const InvalidFormat: i32 = 16;
        pub const CustomFormat1: i32 = 17;
        pub const CustomFormat2: i32 = 18;
        pub const CustomFormat3: i32 = 19;
        pub const CustomFormat4: i32 = 20;
        pub const CustomFormat5: i32 = 21;
        pub const CustomFormat6: i32 = 22;
        pub const CustomFormat7: i32 = 23;
        pub const CustomFormat8: i32 = 24;
        pub const CustomFormat9: i32 = 25;
        pub const CustomFormat10: i32 = 26;
        pub const CustomFormat11: i32 = 27;
        pub const CustomFormat12: i32 = 28;
        pub const CustomFormat13: i32 = 29;
        pub const CustomFormat14: i32 = 30;
        pub const CustomFormat15: i32 = 31;
        pub const CustomFormat16: i32 = 32;
    };

    pub const Scope = enum(i32) {
        pub const UserScope: i32 = 0;
        pub const SystemScope: i32 = 1;
    };
};
