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

    /// New constructs a new QSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` organization: []const u8 `
    ///
    pub fn New(organization: []const u8) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        return .{ .ptr = qtc.QSettings_new(organization_str) };
    }

    /// New2 constructs a new QSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` scope: qsettings_enums.Scope `
    ///
    /// ` organization: []const u8 `
    ///
    pub fn New2(scope: i32, organization: []const u8) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        return .{ .ptr = qtc.QSettings_new2(@bitCast(scope), organization_str) };
    }

    /// New3 constructs a new QSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` format: qsettings_enums.Format `
    ///
    /// ` scope: qsettings_enums.Scope `
    ///
    /// ` organization: []const u8 `
    ///
    pub fn New3(format: i32, scope: i32, organization: []const u8) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        return .{ .ptr = qtc.QSettings_new3(@bitCast(format), @bitCast(scope), organization_str) };
    }

    /// New4 constructs a new QSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: qsettings_enums.Format `
    ///
    pub fn New4(fileName: []const u8, format: i32) QSettings {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QSettings_new4(fileName_str, @bitCast(format)) };
    }

    /// New5 constructs a new QSettings object.
    ///
    pub fn New5() QSettings {
        return .{ .ptr = qtc.QSettings_new5() };
    }

    /// New6 constructs a new QSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` scope: qsettings_enums.Scope `
    ///
    pub fn New6(scope: i32) QSettings {
        return .{ .ptr = qtc.QSettings_new6(@bitCast(scope)) };
    }

    /// New7 constructs a new QSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` organization: []const u8 `
    ///
    /// ` application: []const u8 `
    ///
    pub fn New7(organization: []const u8, application: []const u8) QSettings {
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

    /// New8 constructs a new QSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` organization: []const u8 `
    ///
    /// ` application: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New8(organization: []const u8, application: []const u8, parent: anytype) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSettings_new8(organization_str, application_str, @ptrCast(parent.ptr)) };
    }

    /// New9 constructs a new QSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` scope: qsettings_enums.Scope `
    ///
    /// ` organization: []const u8 `
    ///
    /// ` application: []const u8 `
    ///
    pub fn New9(scope: i32, organization: []const u8, application: []const u8) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        return .{ .ptr = qtc.QSettings_new9(@bitCast(scope), organization_str, application_str) };
    }

    /// New10 constructs a new QSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` scope: qsettings_enums.Scope `
    ///
    /// ` organization: []const u8 `
    ///
    /// ` application: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New10(scope: i32, organization: []const u8, application: []const u8, parent: anytype) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSettings_new10(@bitCast(scope), organization_str, application_str, @ptrCast(parent.ptr)) };
    }

    /// New11 constructs a new QSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` format: qsettings_enums.Format `
    ///
    /// ` scope: qsettings_enums.Scope `
    ///
    /// ` organization: []const u8 `
    ///
    /// ` application: []const u8 `
    ///
    pub fn New11(format: i32, scope: i32, organization: []const u8, application: []const u8) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        return .{ .ptr = qtc.QSettings_new11(@bitCast(format), @bitCast(scope), organization_str, application_str) };
    }

    /// New12 constructs a new QSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` format: qsettings_enums.Format `
    ///
    /// ` scope: qsettings_enums.Scope `
    ///
    /// ` organization: []const u8 `
    ///
    /// ` application: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New12(format: i32, scope: i32, organization: []const u8, application: []const u8, parent: anytype) QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSettings_new12(@bitCast(format), @bitCast(scope), organization_str, application_str, @ptrCast(parent.ptr)) };
    }

    /// New13 constructs a new QSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: qsettings_enums.Format `
    ///
    /// ` parent: QObject `
    ///
    pub fn New13(fileName: []const u8, format: i32, parent: anytype) QSettings {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSettings_new13(fileName_str, @bitCast(format), @ptrCast(parent.ptr)) };
    }

    /// New14 constructs a new QSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New14(parent: anytype) QSettings {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSettings_new14(@ptrCast(parent.ptr)) };
    }

    /// New15 constructs a new QSettings object.
    ///
    /// ## Parameter(s):
    ///
    /// ` scope: qsettings_enums.Scope `
    ///
    /// ` parent: QObject `
    ///
    pub fn New15(scope: i32, parent: anytype) QSettings {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSettings_new15(@bitCast(scope), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn MetaObject(self: QSettings) QMetaObject {
        return .{ .ptr = qtc.QSettings_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QSettings, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSettings_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn SuperMetaObject(self: QSettings) QMetaObject {
        return .{ .ptr = qtc.QSettings_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QSettings, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSettings_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSettings `
    ///
    /// ` callback: *const fn (self: QSettings, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QSettings, callback: *const fn (QSettings, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSettings_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QSettings, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSettings_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QSettings, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSettings_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSettings `
    ///
    /// ` callback: *const fn (self: QSettings, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QSettings, callback: *const fn (QSettings, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSettings_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QSettings, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSettings_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn Clear(self: QSettings) void {
        qtc.QSettings_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#sync)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn Sync(self: QSettings) void {
        qtc.QSettings_Sync(@ptrCast(self.ptr));
    }

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
    pub fn Status(self: QSettings) i32 {
        return qtc.QSettings_Status(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#isAtomicSyncRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn IsAtomicSyncRequired(self: QSettings) bool {
        return qtc.QSettings_IsAtomicSyncRequired(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#setAtomicSyncRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAtomicSyncRequired(self: QSettings, enable: bool) void {
        qtc.QSettings_SetAtomicSyncRequired(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#beginGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn BeginGroup(self: QSettings, prefix: []const u8) void {
        qtc.QSettings_BeginGroup(@ptrCast(self.ptr), prefix.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#endGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn EndGroup(self: QSettings) void {
        qtc.QSettings_EndGroup(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: QSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSettings_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#beginReadArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn BeginReadArray(self: QSettings, prefix: []const u8) i32 {
        return qtc.QSettings_BeginReadArray(@ptrCast(self.ptr), prefix.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#beginWriteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn BeginWriteArray(self: QSettings, prefix: []const u8) void {
        qtc.QSettings_BeginWriteArray(@ptrCast(self.ptr), prefix.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#endArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn EndArray(self: QSettings) void {
        qtc.QSettings_EndArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#setArrayIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` i: i32 `
    ///
    pub fn SetArrayIndex(self: QSettings, i: i32) void {
        qtc.QSettings_SetArrayIndex(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#allKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllKeys(self: QSettings, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSettings_AllKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsettings.AllKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsettings.AllKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#childKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildKeys(self: QSettings, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSettings_ChildKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsettings.ChildKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsettings.ChildKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#childGroups)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ChildGroups(self: QSettings, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSettings_ChildGroups(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsettings.ChildGroups: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsettings.ChildGroups: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn IsWritable(self: QSettings) bool {
        return qtc.QSettings_IsWritable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetValue(self: QSettings, key: []const u8, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QSettings_SetValue(@ptrCast(self.ptr), key.ptr, @ptrCast(value.ptr));
    }

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
    pub fn Value(self: QSettings, key: []const u8, defaultValue: anytype) QVariant {
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.QSettings_Value(@ptrCast(self.ptr), key.ptr, @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Value2(self: QSettings, key: []const u8) QVariant {
        return .{ .ptr = qtc.QSettings_Value2(@ptrCast(self.ptr), key.ptr) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Remove(self: QSettings, key: []const u8) void {
        qtc.QSettings_Remove(@ptrCast(self.ptr), key.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Contains(self: QSettings, key: []const u8) bool {
        return qtc.QSettings_Contains(@ptrCast(self.ptr), key.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#setFallbacksEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` b: bool `
    ///
    pub fn SetFallbacksEnabled(self: QSettings, b: bool) void {
        qtc.QSettings_SetFallbacksEnabled(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#fallbacksEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn FallbacksEnabled(self: QSettings) bool {
        return qtc.QSettings_FallbacksEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: QSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSettings_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Format(self: QSettings) i32 {
        return qtc.QSettings_Format(@ptrCast(self.ptr));
    }

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
    pub fn Scope(self: QSettings) i32 {
        return qtc.QSettings_Scope(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#organizationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OrganizationName(self: QSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSettings_OrganizationName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.OrganizationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#applicationName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ApplicationName(self: QSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSettings_ApplicationName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.ApplicationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#setDefaultFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` format: qsettings_enums.Format `
    ///
    pub fn SetDefaultFormat(format: i32) void {
        qtc.QSettings_SetDefaultFormat(@bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#defaultFormat)
    ///
    /// ## Returns:
    ///
    /// ` qsettings_enums.Format `
    ///
    pub fn DefaultFormat() i32 {
        return qtc.QSettings_DefaultFormat();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` format: qsettings_enums.Format `
    ///
    /// ` scope: qsettings_enums.Scope `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetPath(format: i32, scope: i32, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QSettings_SetPath(@bitCast(format), @bitCast(scope), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QSettings, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSettings_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QSettings, callback: *const fn (QSettings, QEvent) callconv(.c) bool) void {
        qtc.QSettings_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QSettings, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSettings_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn BeginWriteArray2(self: QSettings, prefix: []const u8, size: i32) void {
        qtc.QSettings_BeginWriteArray2(@ptrCast(self.ptr), prefix.ptr, @bitCast(size));
    }

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
    pub fn ObjectName(self: QSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QSettings, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn IsWidgetType(self: QSettings) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn IsWindowType(self: QSettings) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn IsQuickItemType(self: QSettings) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn SignalsBlocked(self: QSettings) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QSettings, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn Thread(self: QSettings) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QSettings, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QSettings, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QSettings, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QSettings, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QSettings, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QSettings, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qsettings.Children: Memory allocation failed");
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
    /// ` self: QSettings `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QSettings, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QSettings, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QSettings, obj: anytype) void {
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
    /// ` self: QSettings `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QSettings, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSettings `
    ///
    pub fn Disconnect3(self: QSettings) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QSettings, receiver: anytype) bool {
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
    /// ` self: QSettings `
    ///
    pub fn DumpObjectTree(self: QSettings) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn DumpObjectInfo(self: QSettings) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QSettings, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSettings `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QSettings, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QSettings, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsettings.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsettings.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSettings `
    ///
    pub fn BindingStorage(self: QSettings) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn BindingStorage2(self: QSettings) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn Destroyed(self: QSettings) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QSettings, callback: *const fn (QSettings) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn Parent(self: QSettings) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QSettings, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSettings `
    ///
    pub fn DeleteLater(self: QSettings) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QSettings, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QSettings, time: i64, timerType: i32) i32 {
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
    /// ` self: QSettings `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QSettings, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSettings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QSettings, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QSettings, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSettings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QSettings, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSettings `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QSettings, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSettings `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QSettings, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QSettings, callback: *const fn (QSettings, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QSettings, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSettings_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QSettings, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSettings_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QSettings, callback: *const fn (QSettings, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSettings_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QSettings, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSettings_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QSettings, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSettings_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QSettings, callback: *const fn (QSettings, QTimerEvent) callconv(.c) void) void {
        qtc.QSettings_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QSettings, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSettings_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QSettings, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSettings_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QSettings, callback: *const fn (QSettings, QChildEvent) callconv(.c) void) void {
        qtc.QSettings_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QSettings, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSettings_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QSettings, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSettings_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QSettings, callback: *const fn (QSettings, QEvent) callconv(.c) void) void {
        qtc.QSettings_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QSettings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSettings_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QSettings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSettings_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QSettings, callback: *const fn (QSettings, QMetaMethod) callconv(.c) void) void {
        qtc.QSettings_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QSettings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSettings_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QSettings, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSettings_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QSettings, callback: *const fn (QSettings, QMetaMethod) callconv(.c) void) void {
        qtc.QSettings_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QSettings) QObject {
        return .{ .ptr = qtc.QSettings_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSettings `
    ///
    pub fn SuperSender(self: QSettings) QObject {
        return .{ .ptr = qtc.QSettings_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QSettings, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSettings_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QSettings) i32 {
        return qtc.QSettings_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSettings `
    ///
    pub fn SuperSenderSignalIndex(self: QSettings) i32 {
        return qtc.QSettings_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QSettings, callback: *const fn () callconv(.c) i32) void {
        qtc.QSettings_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QSettings, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSettings_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSettings `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QSettings, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSettings_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QSettings, callback: *const fn (QSettings, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSettings_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QSettings, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSettings_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSettings `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QSettings, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSettings_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QSettings, callback: *const fn (QSettings, QMetaMethod) callconv(.c) bool) void {
        qtc.QSettings_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QSettings, callback: *const fn (QSettings, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsettings.html#dtor.QSettings)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSettings `
    ///
    pub fn Delete(self: QSettings) void {
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
