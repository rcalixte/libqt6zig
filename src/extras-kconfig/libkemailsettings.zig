const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kemailsettings_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kemailsettings.html)
pub const KEMailSettings = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KEMailSettings,

    pub const _is_KEMailSettings = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KEMailSettings object in C++ memory
    ///
    pub fn new() KEMailSettings {
        return .{ .ptr = qtc.KEMailSettings_new() };
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
    /// ` sourceText: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, sourceText: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEMailSettings.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `profiles` instead
    ///
    pub const Profiles = profiles;

    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html#profiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn profiles(self: KEMailSettings, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KEMailSettings_Profiles(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KEMailSettings.profiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KEMailSettings.profiles: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setProfile` instead
    ///
    pub const SetProfile = setProfile;

    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html#setProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailSettings `
    ///
    /// ` s: []const u8 `
    ///
    pub fn setProfile(self: KEMailSettings, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.KEMailSettings_SetProfile(@ptrCast(self.ptr), s_str);
    }

    /// ### DEPRECATED: Use `defaultProfileName` instead
    ///
    pub const DefaultProfileName = defaultProfileName;

    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html#defaultProfileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultProfileName(self: KEMailSettings, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KEMailSettings_DefaultProfileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEMailSettings.defaultProfileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDefault` instead
    ///
    pub const SetDefault = setDefault;

    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html#setDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailSettings `
    ///
    /// ` def: []const u8 `
    ///
    pub fn setDefault(self: KEMailSettings, def: []const u8) void {
        const def_str = qtc.libqt_string{
            .len = def.len,
            .data = def.ptr,
        };
        qtc.KEMailSettings_SetDefault(@ptrCast(self.ptr), def_str);
    }

    /// ### DEPRECATED: Use `getSetting` instead
    ///
    pub const GetSetting = getSetting;

    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html#getSetting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: kemailsettings_enums.Setting `
    ///
    pub fn getSetting(self: KEMailSettings, allocator: std.mem.Allocator, s: i32) []const u8 {
        var _str = qtc.KEMailSettings_GetSetting(@ptrCast(self.ptr), @bitCast(s));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEMailSettings.getSetting: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSetting` instead
    ///
    pub const SetSetting = setSetting;

    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html#setSetting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailSettings `
    ///
    /// ` s: kemailsettings_enums.Setting `
    ///
    /// ` v: []const u8 `
    ///
    pub fn setSetting(self: KEMailSettings, s: i32, v: []const u8) void {
        const v_str = qtc.libqt_string{
            .len = v.len,
            .data = v.ptr,
        };
        qtc.KEMailSettings_SetSetting(@ptrCast(self.ptr), @bitCast(s), v_str);
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
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEMailSettings.tr2: Memory allocation failed");
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
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEMailSettings.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html#dtor.KEMailSettings)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KEMailSettings `
    ///
    pub fn delete(self: KEMailSettings) void {
        qtc.KEMailSettings_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kemailsettings.html#public-types)
pub const enums = struct {
    pub const Setting = enum(i32) {
        pub const ClientProgram: i32 = 0;
        pub const ClientTerminal: i32 = 1;
        pub const RealName: i32 = 2;
        pub const EmailAddress: i32 = 3;
        pub const ReplyToAddress: i32 = 4;
        pub const Organization: i32 = 5;
    };
};
