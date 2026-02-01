const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kemailsettings_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kemailsettings.html)
pub const kemailsettings = struct {
    /// New constructs a new KEMailSettings object.
    ///
    pub fn New() QtC.KEMailSettings {
        return qtc.KEMailSettings_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(sourceText: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailsettings.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html#profiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KEMailSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Profiles(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KEMailSettings_Profiles(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html#setProfile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KEMailSettings `
    ///
    /// ` s: []const u8 `
    ///
    pub fn SetProfile(self: ?*anyopaque, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.KEMailSettings_SetProfile(@ptrCast(self), s_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html#defaultProfileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KEMailSettings `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultProfileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KEMailSettings_DefaultProfileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailsettings.DefaultProfileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html#setDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KEMailSettings `
    ///
    /// ` def: []const u8 `
    ///
    pub fn SetDefault(self: ?*anyopaque, def: []const u8) void {
        const def_str = qtc.libqt_string{
            .len = def.len,
            .data = def.ptr,
        };
        qtc.KEMailSettings_SetDefault(@ptrCast(self), def_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html#getSetting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KEMailSettings `
    ///
    /// ` s: kemailsettings_enums.Setting `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetSetting(self: ?*anyopaque, s: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KEMailSettings_GetSetting(@ptrCast(self), @intCast(s));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailsettings.GetSetting: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html#setSetting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KEMailSettings `
    ///
    /// ` s: kemailsettings_enums.Setting `
    ///
    /// ` v: []const u8 `
    ///
    pub fn SetSetting(self: ?*anyopaque, s: i32, v: []const u8) void {
        const v_str = qtc.libqt_string{
            .len = v.len,
            .data = v.ptr,
        };
        qtc.KEMailSettings_SetSetting(@ptrCast(self), @intCast(s), v_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(sourceText: [:0]const u8, disambiguation: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailsettings.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kemailsettings.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kemailsettings.html#dtor.KEMailSettings)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KEMailSettings `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KEMailSettings_Delete(@ptrCast(self));
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
