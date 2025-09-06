const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kemailsettings_enums = enums;
const std = @import("std");

/// https://api-staging.kde.org/kemailsettings.html
pub const kemailsettings = struct {
    /// New constructs a new KEMailSettings object.
    ///
    ///
    pub fn New() QtC.KEMailSettings {
        return qtc.KEMailSettings_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(sourceText: []const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const _str = qtc.KEMailSettings_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailsettings.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kemailsettings.html#profiles)
    ///
    /// ``` self: QtC.KEMailSettings, allocator: std.mem.Allocator ```
    pub fn Profiles(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KEMailSettings_Profiles(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kemailsettings.Profiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kemailsettings.Profiles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kemailsettings.html#setProfile)
    ///
    /// ``` self: QtC.KEMailSettings, s: []const u8 ```
    pub fn SetProfile(self: ?*anyopaque, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.KEMailSettings_SetProfile(@ptrCast(self), s_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kemailsettings.html#defaultProfileName)
    ///
    /// ``` self: QtC.KEMailSettings, allocator: std.mem.Allocator ```
    pub fn DefaultProfileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KEMailSettings_DefaultProfileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailsettings.DefaultProfileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kemailsettings.html#setDefault)
    ///
    /// ``` self: QtC.KEMailSettings, def: []const u8 ```
    pub fn SetDefault(self: ?*anyopaque, def: []const u8) void {
        const def_str = qtc.libqt_string{
            .len = def.len,
            .data = def.ptr,
        };
        qtc.KEMailSettings_SetDefault(@ptrCast(self), def_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kemailsettings.html#getSetting)
    ///
    /// ``` self: QtC.KEMailSettings, s: kemailsettings_enums.Setting, allocator: std.mem.Allocator ```
    pub fn GetSetting(self: ?*anyopaque, s: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KEMailSettings_GetSetting(@ptrCast(self), @intCast(s));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailsettings.GetSetting: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kemailsettings.html#setSetting)
    ///
    /// ``` self: QtC.KEMailSettings, s: kemailsettings_enums.Setting, v: []const u8 ```
    pub fn SetSetting(self: ?*anyopaque, s: i32, v: []const u8) void {
        const v_str = qtc.libqt_string{
            .len = v.len,
            .data = v.ptr,
        };
        qtc.KEMailSettings_SetSetting(@ptrCast(self), @intCast(s), v_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.KEMailSettings_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailsettings.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.KEMailSettings_Tr3(sourceText_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailsettings.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kemailsettings.html#dtor.KEMailSettings)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KEMailSettings ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KEMailSettings_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kemailsettings.html#types
pub const enums = struct {
    pub const Setting = enum {
        pub const ClientProgram: i32 = 0;
        pub const ClientTerminal: i32 = 1;
        pub const RealName: i32 = 2;
        pub const EmailAddress: i32 = 3;
        pub const ReplyToAddress: i32 = 4;
        pub const Organization: i32 = 5;
    };
};
