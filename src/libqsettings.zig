const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsettings_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsettings.html
pub const qsettings = struct {
    /// New constructs a new QSettings object.
    ///
    /// ``` organization: []const u8 ```
    pub fn New(organization: []const u8) ?*C.QSettings {
        const organization_str = C.struct_libqt_string{
            .len = organization.len,
            .data = @constCast(organization.ptr),
        };

        return C.QSettings_new(organization_str);
    }

    /// New2 constructs a new QSettings object.
    ///
    /// ``` scope: qsettings_enums.Scope, organization: []const u8 ```
    pub fn New2(scope: i64, organization: []const u8) ?*C.QSettings {
        const organization_str = C.struct_libqt_string{
            .len = organization.len,
            .data = @constCast(organization.ptr),
        };

        return C.QSettings_new2(@intCast(scope), organization_str);
    }

    /// New3 constructs a new QSettings object.
    ///
    /// ``` format: qsettings_enums.Format, scope: qsettings_enums.Scope, organization: []const u8 ```
    pub fn New3(format: i64, scope: i64, organization: []const u8) ?*C.QSettings {
        const organization_str = C.struct_libqt_string{
            .len = organization.len,
            .data = @constCast(organization.ptr),
        };

        return C.QSettings_new3(@intCast(format), @intCast(scope), organization_str);
    }

    /// New4 constructs a new QSettings object.
    ///
    /// ``` fileName: []const u8, format: qsettings_enums.Format ```
    pub fn New4(fileName: []const u8, format: i64) ?*C.QSettings {
        const fileName_str = C.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };

        return C.QSettings_new4(fileName_str, @intCast(format));
    }

    /// New5 constructs a new QSettings object.
    ///
    ///
    pub fn New5() ?*C.QSettings {
        return C.QSettings_new5();
    }

    /// New6 constructs a new QSettings object.
    ///
    /// ``` scope: qsettings_enums.Scope ```
    pub fn New6(scope: i64) ?*C.QSettings {
        return C.QSettings_new6(@intCast(scope));
    }

    /// New7 constructs a new QSettings object.
    ///
    /// ``` organization: []const u8, application: []const u8 ```
    pub fn New7(organization: []const u8, application: []const u8) ?*C.QSettings {
        const organization_str = C.struct_libqt_string{
            .len = organization.len,
            .data = @constCast(organization.ptr),
        };
        const application_str = C.struct_libqt_string{
            .len = application.len,
            .data = @constCast(application.ptr),
        };

        return C.QSettings_new7(organization_str, application_str);
    }

    /// New8 constructs a new QSettings object.
    ///
    /// ``` organization: []const u8, application: []const u8, parent: ?*C.QObject ```
    pub fn New8(organization: []const u8, application: []const u8, parent: ?*anyopaque) ?*C.QSettings {
        const organization_str = C.struct_libqt_string{
            .len = organization.len,
            .data = @constCast(organization.ptr),
        };
        const application_str = C.struct_libqt_string{
            .len = application.len,
            .data = @constCast(application.ptr),
        };

        return C.QSettings_new8(organization_str, application_str, @ptrCast(parent));
    }

    /// New9 constructs a new QSettings object.
    ///
    /// ``` scope: qsettings_enums.Scope, organization: []const u8, application: []const u8 ```
    pub fn New9(scope: i64, organization: []const u8, application: []const u8) ?*C.QSettings {
        const organization_str = C.struct_libqt_string{
            .len = organization.len,
            .data = @constCast(organization.ptr),
        };
        const application_str = C.struct_libqt_string{
            .len = application.len,
            .data = @constCast(application.ptr),
        };

        return C.QSettings_new9(@intCast(scope), organization_str, application_str);
    }

    /// New10 constructs a new QSettings object.
    ///
    /// ``` scope: qsettings_enums.Scope, organization: []const u8, application: []const u8, parent: ?*C.QObject ```
    pub fn New10(scope: i64, organization: []const u8, application: []const u8, parent: ?*anyopaque) ?*C.QSettings {
        const organization_str = C.struct_libqt_string{
            .len = organization.len,
            .data = @constCast(organization.ptr),
        };
        const application_str = C.struct_libqt_string{
            .len = application.len,
            .data = @constCast(application.ptr),
        };

        return C.QSettings_new10(@intCast(scope), organization_str, application_str, @ptrCast(parent));
    }

    /// New11 constructs a new QSettings object.
    ///
    /// ``` format: qsettings_enums.Format, scope: qsettings_enums.Scope, organization: []const u8, application: []const u8 ```
    pub fn New11(format: i64, scope: i64, organization: []const u8, application: []const u8) ?*C.QSettings {
        const organization_str = C.struct_libqt_string{
            .len = organization.len,
            .data = @constCast(organization.ptr),
        };
        const application_str = C.struct_libqt_string{
            .len = application.len,
            .data = @constCast(application.ptr),
        };

        return C.QSettings_new11(@intCast(format), @intCast(scope), organization_str, application_str);
    }

    /// New12 constructs a new QSettings object.
    ///
    /// ``` format: qsettings_enums.Format, scope: qsettings_enums.Scope, organization: []const u8, application: []const u8, parent: ?*C.QObject ```
    pub fn New12(format: i64, scope: i64, organization: []const u8, application: []const u8, parent: ?*anyopaque) ?*C.QSettings {
        const organization_str = C.struct_libqt_string{
            .len = organization.len,
            .data = @constCast(organization.ptr),
        };
        const application_str = C.struct_libqt_string{
            .len = application.len,
            .data = @constCast(application.ptr),
        };

        return C.QSettings_new12(@intCast(format), @intCast(scope), organization_str, application_str, @ptrCast(parent));
    }

    /// New13 constructs a new QSettings object.
    ///
    /// ``` fileName: []const u8, format: qsettings_enums.Format, parent: ?*C.QObject ```
    pub fn New13(fileName: []const u8, format: i64, parent: ?*anyopaque) ?*C.QSettings {
        const fileName_str = C.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };

        return C.QSettings_new13(fileName_str, @intCast(format), @ptrCast(parent));
    }

    /// New14 constructs a new QSettings object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New14(parent: ?*anyopaque) ?*C.QSettings {
        return C.QSettings_new14(@ptrCast(parent));
    }

    /// New15 constructs a new QSettings object.
    ///
    /// ``` scope: qsettings_enums.Scope, parent: ?*C.QObject ```
    pub fn New15(scope: i64, parent: ?*anyopaque) ?*C.QSettings {
        return C.QSettings_new15(@intCast(scope), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QSettings_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QSettings, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QSettings_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QSettings, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QSettings_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSettings, slot: fn (?*C.QSettings, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QSettings_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSettings, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QSettings_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QSettings_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#clear)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QSettings_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#sync)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn Sync(self: ?*anyopaque) void {
        C.QSettings_Sync(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#status)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn Status(self: ?*anyopaque) i64 {
        return C.QSettings_Status(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#isAtomicSyncRequired)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn IsAtomicSyncRequired(self: ?*anyopaque) bool {
        return C.QSettings_IsAtomicSyncRequired(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setAtomicSyncRequired)
    ///
    /// ``` self: ?*C.QSettings, enable: bool ```
    pub fn SetAtomicSyncRequired(self: ?*anyopaque, enable: bool) void {
        C.QSettings_SetAtomicSyncRequired(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginGroup)
    ///
    /// ``` self: ?*C.QSettings, prefix: []const u8 ```
    pub fn BeginGroup(self: ?*anyopaque, prefix: []const u8) void {
        C.QSettings_BeginGroup(@ptrCast(self), @constCast(prefix.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#endGroup)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn EndGroup(self: ?*anyopaque) void {
        C.QSettings_EndGroup(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#group)
    ///
    /// ``` self: ?*C.QSettings, allocator: std.mem.Allocator ```
    pub fn Group(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QSettings_Group(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginReadArray)
    ///
    /// ``` self: ?*C.QSettings, prefix: []const u8 ```
    pub fn BeginReadArray(self: ?*anyopaque, prefix: []const u8) i32 {
        return C.QSettings_BeginReadArray(@ptrCast(self), @constCast(prefix.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginWriteArray)
    ///
    /// ``` self: ?*C.QSettings, prefix: []const u8 ```
    pub fn BeginWriteArray(self: ?*anyopaque, prefix: []const u8) void {
        C.QSettings_BeginWriteArray(@ptrCast(self), @constCast(prefix.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#endArray)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn EndArray(self: ?*anyopaque) void {
        C.QSettings_EndArray(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setArrayIndex)
    ///
    /// ``` self: ?*C.QSettings, i: i32 ```
    pub fn SetArrayIndex(self: ?*anyopaque, i: i32) void {
        C.QSettings_SetArrayIndex(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#allKeys)
    ///
    /// ``` self: ?*C.QSettings, allocator: std.mem.Allocator ```
    pub fn AllKeys(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QSettings_AllKeys(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#childKeys)
    ///
    /// ``` self: ?*C.QSettings, allocator: std.mem.Allocator ```
    pub fn ChildKeys(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QSettings_ChildKeys(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#childGroups)
    ///
    /// ``` self: ?*C.QSettings, allocator: std.mem.Allocator ```
    pub fn ChildGroups(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QSettings_ChildGroups(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#isWritable)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return C.QSettings_IsWritable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setValue)
    ///
    /// ``` self: ?*C.QSettings, key: []const u8, value: ?*C.QVariant ```
    pub fn SetValue(self: ?*anyopaque, key: []const u8, value: ?*anyopaque) void {
        C.QSettings_SetValue(@ptrCast(self), @constCast(key.ptr), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#value)
    ///
    /// ``` self: ?*C.QSettings, key: []const u8, defaultValue: ?*C.QVariant ```
    pub fn Value(self: ?*anyopaque, key: []const u8, defaultValue: ?*anyopaque) ?*C.QVariant {
        return C.QSettings_Value(@ptrCast(self), @constCast(key.ptr), @ptrCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#value)
    ///
    /// ``` self: ?*C.QSettings, key: []const u8 ```
    pub fn ValueWithKey(self: ?*anyopaque, key: []const u8) ?*C.QVariant {
        return C.QSettings_ValueWithKey(@ptrCast(self), @constCast(key.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#remove)
    ///
    /// ``` self: ?*C.QSettings, key: []const u8 ```
    pub fn Remove(self: ?*anyopaque, key: []const u8) void {
        C.QSettings_Remove(@ptrCast(self), @constCast(key.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#contains)
    ///
    /// ``` self: ?*C.QSettings, key: []const u8 ```
    pub fn Contains(self: ?*anyopaque, key: []const u8) bool {
        return C.QSettings_Contains(@ptrCast(self), @constCast(key.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setFallbacksEnabled)
    ///
    /// ``` self: ?*C.QSettings, b: bool ```
    pub fn SetFallbacksEnabled(self: ?*anyopaque, b: bool) void {
        C.QSettings_SetFallbacksEnabled(@ptrCast(self), b);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#fallbacksEnabled)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn FallbacksEnabled(self: ?*anyopaque) bool {
        return C.QSettings_FallbacksEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#fileName)
    ///
    /// ``` self: ?*C.QSettings, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QSettings_FileName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#format)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn Format(self: ?*anyopaque) i64 {
        return C.QSettings_Format(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#scope)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn Scope(self: ?*anyopaque) i64 {
        return C.QSettings_Scope(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#organizationName)
    ///
    /// ``` self: ?*C.QSettings, allocator: std.mem.Allocator ```
    pub fn OrganizationName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QSettings_OrganizationName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#applicationName)
    ///
    /// ``` self: ?*C.QSettings, allocator: std.mem.Allocator ```
    pub fn ApplicationName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QSettings_ApplicationName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setDefaultFormat)
    ///
    /// ``` format: qsettings_enums.Format ```
    pub fn SetDefaultFormat(format: i64) void {
        C.QSettings_SetDefaultFormat(@intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#defaultFormat)
    ///
    ///
    pub fn DefaultFormat() i64 {
        return C.QSettings_DefaultFormat();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#setPath)
    ///
    /// ``` format: qsettings_enums.Format, scope: qsettings_enums.Scope, path: []const u8 ```
    pub fn SetPath(format: i64, scope: i64, path: []const u8) void {
        const path_str = C.struct_libqt_string{
            .len = path.len,
            .data = @constCast(path.ptr),
        };
        C.QSettings_SetPath(@intCast(format), @intCast(scope), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#event)
    ///
    /// ``` self: ?*C.QSettings, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSettings_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSettings, slot: fn (?*C.QSettings, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSettings_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSettings, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSettings_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QSettings_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QSettings_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsettings.html#beginWriteArray)
    ///
    /// ``` self: ?*C.QSettings, prefix: []const u8, size: i32 ```
    pub fn BeginWriteArray2(self: ?*anyopaque, prefix: []const u8, size: i32) void {
        C.QSettings_BeginWriteArray2(@ptrCast(self), @constCast(prefix.ptr), @intCast(size));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QSettings, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QSettings, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QSettings, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QSettings, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QSettings, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QSettings, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QSettings, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QSettings, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QSettings, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QSettings, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QSettings, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QSettings, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QSettings, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QSettings, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QSettings, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QSettings, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QSettings, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QSettings, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSettings_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSettings_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, slot: fn (?*C.QSettings, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSettings_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSettings_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSettings_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, slot: fn (?*C.QSettings, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSettings_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSettings_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSettings_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, slot: fn (?*C.QSettings, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSettings_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSettings_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSettings_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, slot: fn (?*C.QSettings, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSettings_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSettings_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSettings_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, slot: fn (?*C.QSettings, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSettings_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSettings_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSettings_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, slot: fn (?*C.QSettings, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSettings_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QSettings_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QSettings_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QSettings_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QSettings_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QSettings_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QSettings_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QSettings_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QSettings_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, slot: fn (?*C.QSettings, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QSettings_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QSettings_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QSettings_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSettings, slot: fn (?*C.QSettings, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSettings_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QSettings ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QSettings_Delete(@ptrCast(self));
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
