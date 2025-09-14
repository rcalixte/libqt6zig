const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/kkeyserver.html
pub const kkeyserver = struct {
    /// [Qt documentation](https://api.kde.org/kkeyserver.html#modToStringUser)
    ///
    /// ``` param1: u32, allocator: std.mem.Allocator ```
    pub fn ModToStringUser(param1: u32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KKeyServer_ModToStringUser(@intCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kkeyserver.ModToStringUser: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#stringUserToMod)
    ///
    /// ``` param1: []const u8 ```
    pub fn StringUserToMod(param1: []const u8) u32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.KKeyServer_StringUserToMod(param1_str);
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#isShiftAsModifierAllowed)
    ///
    /// ``` param1: i32 ```
    pub fn IsShiftAsModifierAllowed(param1: i32) bool {
        return qtc.KKeyServer_IsShiftAsModifierAllowed(@intCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#initializeMods)
    ///
    ///
    pub fn InitializeMods() bool {
        return qtc.KKeyServer_InitializeMods();
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#keyboardHasMetaKey)
    ///
    ///
    pub fn KeyboardHasMetaKey() bool {
        return qtc.KKeyServer_KeyboardHasMetaKey();
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#modXShift)
    ///
    ///
    pub fn ModXShift() u32 {
        return qtc.KKeyServer_ModXShift();
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#modXLock)
    ///
    ///
    pub fn ModXLock() u32 {
        return qtc.KKeyServer_ModXLock();
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#modXCtrl)
    ///
    ///
    pub fn ModXCtrl() u32 {
        return qtc.KKeyServer_ModXCtrl();
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#modXAlt)
    ///
    ///
    pub fn ModXAlt() u32 {
        return qtc.KKeyServer_ModXAlt();
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#modXMeta)
    ///
    ///
    pub fn ModXMeta() u32 {
        return qtc.KKeyServer_ModXMeta();
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#modXNumLock)
    ///
    ///
    pub fn ModXNumLock() u32 {
        return qtc.KKeyServer_ModXNumLock();
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#modXScrollLock)
    ///
    ///
    pub fn ModXScrollLock() u32 {
        return qtc.KKeyServer_ModXScrollLock();
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#modXModeSwitch)
    ///
    ///
    pub fn ModXModeSwitch() u32 {
        return qtc.KKeyServer_ModXModeSwitch();
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#accelModMaskX)
    ///
    ///
    pub fn AccelModMaskX() u32 {
        return qtc.KKeyServer_AccelModMaskX();
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#keyQtToSymX)
    ///
    /// ``` param1: i32, param2: *i32 ```
    pub fn KeyQtToSymX(param1: i32, param2: *i32) bool {
        return qtc.KKeyServer_KeyQtToSymX(@intCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#keyQtToSymXs)
    ///
    /// ``` param1: i32, allocator: std.mem.Allocator ```
    pub fn KeyQtToSymXs(param1: i32, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KKeyServer_KeyQtToSymXs(@intCast(param1));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kkeyserver.KeyQtToSymXs: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#keyQtToCodeX)
    ///
    /// ``` param1: i32, param2: *i32 ```
    pub fn KeyQtToCodeX(param1: i32, param2: *i32) bool {
        return qtc.KKeyServer_KeyQtToCodeX(@intCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#keyQtToCodeXs)
    ///
    /// ``` param1: i32, allocator: std.mem.Allocator ```
    pub fn KeyQtToCodeXs(param1: i32, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KKeyServer_KeyQtToCodeXs(@intCast(param1));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kkeyserver.KeyQtToCodeXs: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#keyQtToModX)
    ///
    /// ``` param1: i32, param2: *u32 ```
    pub fn KeyQtToModX(param1: i32, param2: *u32) bool {
        return qtc.KKeyServer_KeyQtToModX(@intCast(param1), @ptrCast(param2));
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#symXModXToKeyQt)
    ///
    /// ``` param1: u32, param2: u16, param3: *i32 ```
    pub fn SymXModXToKeyQt(param1: u32, param2: u16, param3: *i32) bool {
        return qtc.KKeyServer_SymXModXToKeyQt(@intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// [Qt documentation](https://api.kde.org/kkeyserver.html#modXToQt)
    ///
    /// ``` param1: u32, param2: *i32 ```
    pub fn ModXToQt(param1: u32, param2: *i32) bool {
        return qtc.KKeyServer_ModXToQt(@intCast(param1), @ptrCast(param2));
    }
};
