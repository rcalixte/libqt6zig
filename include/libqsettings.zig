const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsettings_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsettings.html
pub const qsettings = struct {
    /// New constructs a new QSettings object.
    ///
    /// ``` organization: []const u8 ```
    pub fn New(organization: []const u8) QtC.QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };

        return qtc.QSettings_new(organization_str);
    }

    /// New2 constructs a new QSettings object.
    ///
    /// ``` scope: qsettings_enums.Scope, organization: []const u8 ```
    pub fn New2(scope: i32, organization: []const u8) QtC.QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };

        return qtc.QSettings_new2(@intCast(scope), organization_str);
    }

    /// New3 constructs a new QSettings object.
    ///
    /// ``` format: qsettings_enums.Format, scope: qsettings_enums.Scope, organization: []const u8 ```
    pub fn New3(format: i32, scope: i32, organization: []const u8) QtC.QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };

        return qtc.QSettings_new3(@intCast(format), @intCast(scope), organization_str);
    }

    /// New4 constructs a new QSettings object.
    ///
    /// ``` fileName: []const u8, format: qsettings_enums.Format ```
    pub fn New4(fileName: []const u8, format: i32) QtC.QSettings {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QSettings_new4(fileName_str, @intCast(format));
    }

    /// New5 constructs a new QSettings object.
    ///
    ///
    pub fn New5() QtC.QSettings {
        return qtc.QSettings_new5();
    }

    /// New6 constructs a new QSettings object.
    ///
    /// ``` scope: qsettings_enums.Scope ```
    pub fn New6(scope: i32) QtC.QSettings {
        return qtc.QSettings_new6(@intCast(scope));
    }

    /// New7 constructs a new QSettings object.
    ///
    /// ``` organization: []const u8, application: []const u8 ```
    pub fn New7(organization: []const u8, application: []const u8) QtC.QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };

        return qtc.QSettings_new7(organization_str, application_str);
    }

    /// New8 constructs a new QSettings object.
    ///
    /// ``` organization: []const u8, application: []const u8, parent: QtC.QObject ```
    pub fn New8(organization: []const u8, application: []const u8, parent: ?*anyopaque) QtC.QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };

        return qtc.QSettings_new8(organization_str, application_str, @ptrCast(parent));
    }

    /// New9 constructs a new QSettings object.
    ///
    /// ``` scope: qsettings_enums.Scope, organization: []const u8, application: []const u8 ```
    pub fn New9(scope: i32, organization: []const u8, application: []const u8) QtC.QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };

        return qtc.QSettings_new9(@intCast(scope), organization_str, application_str);
    }

    /// New10 constructs a new QSettings object.
    ///
    /// ``` scope: qsettings_enums.Scope, organization: []const u8, application: []const u8, parent: QtC.QObject ```
    pub fn New10(scope: i32, organization: []const u8, application: []const u8, parent: ?*anyopaque) QtC.QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };

        return qtc.QSettings_new10(@intCast(scope), organization_str, application_str, @ptrCast(parent));
    }

    /// New11 constructs a new QSettings object.
    ///
    /// ``` format: qsettings_enums.Format, scope: qsettings_enums.Scope, organization: []const u8, application: []const u8 ```
    pub fn New11(format: i32, scope: i32, organization: []const u8, application: []const u8) QtC.QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };

        return qtc.QSettings_new11(@intCast(format), @intCast(scope), organization_str, application_str);
    }

    /// New12 constructs a new QSettings object.
    ///
    /// ``` format: qsettings_enums.Format, scope: qsettings_enums.Scope, organization: []const u8, application: []const u8, parent: QtC.QObject ```
    pub fn New12(format: i32, scope: i32, organization: []const u8, application: []const u8, parent: ?*anyopaque) QtC.QSettings {
        const organization_str = qtc.libqt_string{
            .len = organization.len,
            .data = organization.ptr,
        };
        const application_str = qtc.libqt_string{
            .len = application.len,
            .data = application.ptr,
        };

        return qtc.QSettings_new12(@intCast(format), @intCast(scope), organization_str, application_str, @ptrCast(parent));
    }

    /// New13 constructs a new QSettings object.
    ///
    /// ``` fileName: []const u8, format: qsettings_enums.Format, parent: QtC.QObject ```
    pub fn New13(fileName: []const u8, format: i32, parent: ?*anyopaque) QtC.QSettings {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };

        return qtc.QSettings_new13(fileName_str, @intCast(format), @ptrCast(parent));
    }

    /// New14 constructs a new QSettings object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New14(parent: ?*anyopaque) QtC.QSettings {
        return qtc.QSettings_new14(@ptrCast(parent));
    }

    /// New15 constructs a new QSettings object.
    ///
    /// ``` scope: qsettings_enums.Scope, parent: QtC.QObject ```
    pub fn New15(scope: i32, parent: ?*anyopaque) QtC.QSettings {
        return qtc.QSettings_new15(@intCast(scope), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSettings_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QSettings, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSettings_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QSettings, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSettings_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSettings, callback: *const fn (self: QtC.QSettings, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSettings_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QSettings, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSettings_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QSettings_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#clear)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QSettings_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#sync)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn Sync(self: ?*anyopaque) void {
        qtc.QSettings_Sync(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#status)
    ///
    /// ``` self: QtC.QSettings ```
    ///
    /// Returns: ``` qsettings_enums.Status ```
    pub fn Status(self: ?*anyopaque) i32 {
        return qtc.QSettings_Status(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#isAtomicSyncRequired)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn IsAtomicSyncRequired(self: ?*anyopaque) bool {
        return qtc.QSettings_IsAtomicSyncRequired(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setAtomicSyncRequired)
    ///
    /// ``` self: QtC.QSettings, enable: bool ```
    pub fn SetAtomicSyncRequired(self: ?*anyopaque, enable: bool) void {
        qtc.QSettings_SetAtomicSyncRequired(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginGroup)
    ///
    /// ``` self: QtC.QSettings, prefix: []const u8 ```
    pub fn BeginGroup(self: ?*anyopaque, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QSettings_BeginGroup(@ptrCast(self), prefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#endGroup)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn EndGroup(self: ?*anyopaque) void {
        qtc.QSettings_EndGroup(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#group)
    ///
    /// ``` self: QtC.QSettings, allocator: std.mem.Allocator ```
    pub fn Group(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSettings_Group(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginReadArray)
    ///
    /// ``` self: QtC.QSettings, prefix: []const u8 ```
    pub fn BeginReadArray(self: ?*anyopaque, prefix: []const u8) i32 {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        return qtc.QSettings_BeginReadArray(@ptrCast(self), prefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginWriteArray)
    ///
    /// ``` self: QtC.QSettings, prefix: []const u8 ```
    pub fn BeginWriteArray(self: ?*anyopaque, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QSettings_BeginWriteArray(@ptrCast(self), prefix_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#endArray)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn EndArray(self: ?*anyopaque) void {
        qtc.QSettings_EndArray(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setArrayIndex)
    ///
    /// ``` self: QtC.QSettings, i: i32 ```
    pub fn SetArrayIndex(self: ?*anyopaque, i: i32) void {
        qtc.QSettings_SetArrayIndex(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#allKeys)
    ///
    /// ``` self: QtC.QSettings, allocator: std.mem.Allocator ```
    pub fn AllKeys(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSettings_AllKeys(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#childKeys)
    ///
    /// ``` self: QtC.QSettings, allocator: std.mem.Allocator ```
    pub fn ChildKeys(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSettings_ChildKeys(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#childGroups)
    ///
    /// ``` self: QtC.QSettings, allocator: std.mem.Allocator ```
    pub fn ChildGroups(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSettings_ChildGroups(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#isWritable)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QSettings_IsWritable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setValue)
    ///
    /// ``` self: QtC.QSettings, key: []const u8, value: QtC.QVariant ```
    pub fn SetValue(self: ?*anyopaque, key: []const u8, value: ?*anyopaque) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSettings_SetValue(@ptrCast(self), key_str, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#value)
    ///
    /// ``` self: QtC.QSettings, key: []const u8, defaultValue: QtC.QVariant ```
    pub fn Value(self: ?*anyopaque, key: []const u8, defaultValue: ?*anyopaque) QtC.QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QSettings_Value(@ptrCast(self), key_str, @ptrCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#value)
    ///
    /// ``` self: QtC.QSettings, key: []const u8 ```
    pub fn Value2(self: ?*anyopaque, key: []const u8) QtC.QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QSettings_Value2(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#remove)
    ///
    /// ``` self: QtC.QSettings, key: []const u8 ```
    pub fn Remove(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QSettings_Remove(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#contains)
    ///
    /// ``` self: QtC.QSettings, key: []const u8 ```
    pub fn Contains(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QSettings_Contains(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setFallbacksEnabled)
    ///
    /// ``` self: QtC.QSettings, b: bool ```
    pub fn SetFallbacksEnabled(self: ?*anyopaque, b: bool) void {
        qtc.QSettings_SetFallbacksEnabled(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#fallbacksEnabled)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn FallbacksEnabled(self: ?*anyopaque) bool {
        return qtc.QSettings_FallbacksEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#fileName)
    ///
    /// ``` self: QtC.QSettings, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSettings_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#format)
    ///
    /// ``` self: QtC.QSettings ```
    ///
    /// Returns: ``` qsettings_enums.Format ```
    pub fn Format(self: ?*anyopaque) i32 {
        return qtc.QSettings_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#scope)
    ///
    /// ``` self: QtC.QSettings ```
    ///
    /// Returns: ``` qsettings_enums.Scope ```
    pub fn Scope(self: ?*anyopaque) i32 {
        return qtc.QSettings_Scope(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#organizationName)
    ///
    /// ``` self: QtC.QSettings, allocator: std.mem.Allocator ```
    pub fn OrganizationName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSettings_OrganizationName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.OrganizationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#applicationName)
    ///
    /// ``` self: QtC.QSettings, allocator: std.mem.Allocator ```
    pub fn ApplicationName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSettings_ApplicationName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.ApplicationName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setDefaultFormat)
    ///
    /// ``` format: qsettings_enums.Format ```
    pub fn SetDefaultFormat(format: i32) void {
        qtc.QSettings_SetDefaultFormat(@intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#defaultFormat)
    ///
    ///
    ///
    /// Returns: ``` qsettings_enums.Format ```
    pub fn DefaultFormat() i32 {
        return qtc.QSettings_DefaultFormat();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setPath)
    ///
    /// ``` format: qsettings_enums.Format, scope: qsettings_enums.Scope, path: []const u8 ```
    pub fn SetPath(format: i32, scope: i32, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QSettings_SetPath(@intCast(format), @intCast(scope), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#event)
    ///
    /// ``` self: QtC.QSettings, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSettings_Event(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSettings, callback: *const fn (self: QtC.QSettings, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSettings_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSettings, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSettings_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSettings_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSettings_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginWriteArray)
    ///
    /// ``` self: QtC.QSettings, prefix: []const u8, size: i32 ```
    pub fn BeginWriteArray2(self: ?*anyopaque, prefix: []const u8, size: i32) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QSettings_BeginWriteArray2(@ptrCast(self), prefix_str, @intCast(size));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QSettings, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsettings.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QSettings, name: []const u8 ```
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
    /// ``` self: QtC.QSettings ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QSettings, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSettings, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSettings, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSettings, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSettings, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QSettings, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qsettings.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QSettings, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QSettings, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QSettings, obj: QtC.QObject ```
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
    /// ``` self: QtC.QSettings, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QSettings ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QSettings, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QSettings, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QSettings, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSettings, callback: *const fn (self: QtC.QSettings) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QSettings, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QSettings ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSettings, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSettings, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QSettings, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSettings, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSettings, callback: *const fn (self: QtC.QSettings, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSettings, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSettings_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSettings_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, callback: *const fn (self: QtC.QSettings, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSettings_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSettings, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSettings_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSettings_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, callback: *const fn (self: QtC.QSettings, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSettings_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSettings, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSettings_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSettings_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, callback: *const fn (self: QtC.QSettings, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSettings_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSettings, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSettings_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSettings_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, callback: *const fn (self: QtC.QSettings, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSettings_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSettings, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSettings_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSettings_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, callback: *const fn (self: QtC.QSettings, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSettings_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSettings, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSettings_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSettings_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, callback: *const fn (self: QtC.QSettings, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSettings_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSettings ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSettings_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSettings_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QSettings_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSettings ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSettings_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSettings_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QSettings_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSettings, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSettings_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSettings_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, callback: *const fn (self: QtC.QSettings, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSettings_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSettings, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSettings_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSettings_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSettings, callback: *const fn (self: QtC.QSettings, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSettings_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSettings, callback: *const fn (self: QtC.QSettings, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#dtor.QSettings)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSettings ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSettings_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsettings.html#types
pub const enums = struct {
    pub const Status = enum {
        pub const NoError: i32 = 0;
        pub const AccessError: i32 = 1;
        pub const FormatError: i32 = 2;
    };

    pub const Format = enum {
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

    pub const Scope = enum {
        pub const UserScope: i32 = 0;
        pub const SystemScope: i32 = 1;
    };
};
