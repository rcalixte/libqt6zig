const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kkeyserver.html)
pub const KKeyServer = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KKeyServer,

    pub const _is_KKeyServer = {};

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modToStringUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mod: u32 `
    ///
    pub fn ModToStringUser(allocator: std.mem.Allocator, mod: u32) []const u8 {
        var _str = qtc.KKeyServer_ModToStringUser(@bitCast(mod));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kkeyserver.ModToStringUser: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#stringUserToMod)
    ///
    /// ## Parameter(s):
    ///
    /// ` mod: []const u8 `
    ///
    pub fn StringUserToMod(mod: []const u8) u32 {
        const mod_str = qtc.libqt_string{
            .len = mod.len,
            .data = mod.ptr,
        };
        return qtc.KKeyServer_StringUserToMod(mod_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#isShiftAsModifierAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` keyQt: i32 `
    ///
    pub fn IsShiftAsModifierAllowed(keyQt: i32) bool {
        return qtc.KKeyServer_IsShiftAsModifierAllowed(@bitCast(keyQt));
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#initializeMods)
    ///
    pub fn InitializeMods() bool {
        return qtc.KKeyServer_InitializeMods();
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#keyboardHasMetaKey)
    ///
    pub fn KeyboardHasMetaKey() bool {
        return qtc.KKeyServer_KeyboardHasMetaKey();
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXShift)
    ///
    pub fn ModXShift() u32 {
        return qtc.KKeyServer_ModXShift();
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXLock)
    ///
    pub fn ModXLock() u32 {
        return qtc.KKeyServer_ModXLock();
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXCtrl)
    ///
    pub fn ModXCtrl() u32 {
        return qtc.KKeyServer_ModXCtrl();
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXAlt)
    ///
    pub fn ModXAlt() u32 {
        return qtc.KKeyServer_ModXAlt();
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXMeta)
    ///
    pub fn ModXMeta() u32 {
        return qtc.KKeyServer_ModXMeta();
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXNumLock)
    ///
    pub fn ModXNumLock() u32 {
        return qtc.KKeyServer_ModXNumLock();
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXScrollLock)
    ///
    pub fn ModXScrollLock() u32 {
        return qtc.KKeyServer_ModXScrollLock();
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXModeSwitch)
    ///
    pub fn ModXModeSwitch() u32 {
        return qtc.KKeyServer_ModXModeSwitch();
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#accelModMaskX)
    ///
    pub fn AccelModMaskX() u32 {
        return qtc.KKeyServer_AccelModMaskX();
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#keyQtToSymX)
    ///
    /// ## Parameter(s):
    ///
    /// ` keyQt: i32 `
    ///
    /// ` sym: *i32 `
    ///
    pub fn KeyQtToSymX(keyQt: i32, sym: *i32) bool {
        return qtc.KKeyServer_KeyQtToSymX(@bitCast(keyQt), @ptrCast(sym));
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#keyQtToSymXs)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` keyQt: i32 `
    ///
    pub fn KeyQtToSymXs(allocator: std.mem.Allocator, keyQt: i32) []i32 {
        const _arr: qtc.libqt_list = qtc.KKeyServer_KeyQtToSymXs(@bitCast(keyQt));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kkeyserver.KeyQtToSymXs: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#keyQtToCodeX)
    ///
    /// ## Parameter(s):
    ///
    /// ` keyQt: i32 `
    ///
    /// ` keyCode: *i32 `
    ///
    pub fn KeyQtToCodeX(keyQt: i32, keyCode: *i32) bool {
        return qtc.KKeyServer_KeyQtToCodeX(@bitCast(keyQt), @ptrCast(keyCode));
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#keyQtToCodeXs)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` keyQt: i32 `
    ///
    pub fn KeyQtToCodeXs(allocator: std.mem.Allocator, keyQt: i32) []i32 {
        const _arr: qtc.libqt_list = qtc.KKeyServer_KeyQtToCodeXs(@bitCast(keyQt));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("kkeyserver.KeyQtToCodeXs: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#keyQtToModX)
    ///
    /// ## Parameter(s):
    ///
    /// ` keyQt: i32 `
    ///
    /// ` mod: *u32 `
    ///
    pub fn KeyQtToModX(keyQt: i32, mod: *u32) bool {
        return qtc.KKeyServer_KeyQtToModX(@bitCast(keyQt), @ptrCast(mod));
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#symXModXToKeyQt)
    ///
    /// ## Parameter(s):
    ///
    /// ` keySym: u32 `
    ///
    /// ` modX: u16 `
    ///
    /// ` keyQt: *i32 `
    ///
    pub fn SymXModXToKeyQt(keySym: u32, modX: u16, keyQt: *i32) bool {
        return qtc.KKeyServer_SymXModXToKeyQt(@bitCast(keySym), @bitCast(modX), @ptrCast(keyQt));
    }

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXToQt)
    ///
    /// ## Parameter(s):
    ///
    /// ` modX: u32 `
    ///
    /// ` modQt: *i32 `
    ///
    pub fn ModXToQt(modX: u32, modQt: *i32) bool {
        return qtc.KKeyServer_ModXToQt(@bitCast(modX), @ptrCast(modQt));
    }
};
