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

    /// ### DEPRECATED: Use `modToStringUser` instead
    ///
    pub const ModToStringUser = modToStringUser;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modToStringUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mod: u32 `
    ///
    pub fn modToStringUser(allocator: std.mem.Allocator, mod: u32) []const u8 {
        var _str = qtc.KKeyServer_ModToStringUser(@bitCast(mod));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KKeyServer.modToStringUser: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `stringUserToMod` instead
    ///
    pub const StringUserToMod = stringUserToMod;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#stringUserToMod)
    ///
    /// ## Parameter(s):
    ///
    /// ` mod: []const u8 `
    ///
    pub fn stringUserToMod(mod: []const u8) u32 {
        const mod_str = qtc.libqt_string{
            .len = mod.len,
            .data = mod.ptr,
        };
        return qtc.KKeyServer_StringUserToMod(mod_str);
    }

    /// ### DEPRECATED: Use `isShiftAsModifierAllowed` instead
    ///
    pub const IsShiftAsModifierAllowed = isShiftAsModifierAllowed;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#isShiftAsModifierAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` keyQt: i32 `
    ///
    pub fn isShiftAsModifierAllowed(keyQt: i32) bool {
        return qtc.KKeyServer_IsShiftAsModifierAllowed(@bitCast(keyQt));
    }

    /// ### DEPRECATED: Use `initializeMods` instead
    ///
    pub const InitializeMods = initializeMods;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#initializeMods)
    ///
    pub fn initializeMods() bool {
        return qtc.KKeyServer_InitializeMods();
    }

    /// ### DEPRECATED: Use `keyboardHasMetaKey` instead
    ///
    pub const KeyboardHasMetaKey = keyboardHasMetaKey;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#keyboardHasMetaKey)
    ///
    pub fn keyboardHasMetaKey() bool {
        return qtc.KKeyServer_KeyboardHasMetaKey();
    }

    /// ### DEPRECATED: Use `modXShift` instead
    ///
    pub const ModXShift = modXShift;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXShift)
    ///
    pub fn modXShift() u32 {
        return qtc.KKeyServer_ModXShift();
    }

    /// ### DEPRECATED: Use `modXLock` instead
    ///
    pub const ModXLock = modXLock;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXLock)
    ///
    pub fn modXLock() u32 {
        return qtc.KKeyServer_ModXLock();
    }

    /// ### DEPRECATED: Use `modXCtrl` instead
    ///
    pub const ModXCtrl = modXCtrl;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXCtrl)
    ///
    pub fn modXCtrl() u32 {
        return qtc.KKeyServer_ModXCtrl();
    }

    /// ### DEPRECATED: Use `modXAlt` instead
    ///
    pub const ModXAlt = modXAlt;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXAlt)
    ///
    pub fn modXAlt() u32 {
        return qtc.KKeyServer_ModXAlt();
    }

    /// ### DEPRECATED: Use `modXMeta` instead
    ///
    pub const ModXMeta = modXMeta;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXMeta)
    ///
    pub fn modXMeta() u32 {
        return qtc.KKeyServer_ModXMeta();
    }

    /// ### DEPRECATED: Use `modXNumLock` instead
    ///
    pub const ModXNumLock = modXNumLock;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXNumLock)
    ///
    pub fn modXNumLock() u32 {
        return qtc.KKeyServer_ModXNumLock();
    }

    /// ### DEPRECATED: Use `modXScrollLock` instead
    ///
    pub const ModXScrollLock = modXScrollLock;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXScrollLock)
    ///
    pub fn modXScrollLock() u32 {
        return qtc.KKeyServer_ModXScrollLock();
    }

    /// ### DEPRECATED: Use `modXModeSwitch` instead
    ///
    pub const ModXModeSwitch = modXModeSwitch;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXModeSwitch)
    ///
    pub fn modXModeSwitch() u32 {
        return qtc.KKeyServer_ModXModeSwitch();
    }

    /// ### DEPRECATED: Use `accelModMaskX` instead
    ///
    pub const AccelModMaskX = accelModMaskX;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#accelModMaskX)
    ///
    pub fn accelModMaskX() u32 {
        return qtc.KKeyServer_AccelModMaskX();
    }

    /// ### DEPRECATED: Use `keyQtToSymX` instead
    ///
    pub const KeyQtToSymX = keyQtToSymX;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#keyQtToSymX)
    ///
    /// ## Parameter(s):
    ///
    /// ` keyQt: i32 `
    ///
    /// ` sym: *i32 `
    ///
    pub fn keyQtToSymX(keyQt: i32, sym: *i32) bool {
        return qtc.KKeyServer_KeyQtToSymX(@bitCast(keyQt), @ptrCast(sym));
    }

    /// ### DEPRECATED: Use `keyQtToSymXs` instead
    ///
    pub const KeyQtToSymXs = keyQtToSymXs;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#keyQtToSymXs)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` keyQt: i32 `
    ///
    pub fn keyQtToSymXs(allocator: std.mem.Allocator, keyQt: i32) []i32 {
        const _arr: qtc.libqt_list = qtc.KKeyServer_KeyQtToSymXs(@bitCast(keyQt));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("KKeyServer.keyQtToSymXs: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `keyQtToCodeX` instead
    ///
    pub const KeyQtToCodeX = keyQtToCodeX;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#keyQtToCodeX)
    ///
    /// ## Parameter(s):
    ///
    /// ` keyQt: i32 `
    ///
    /// ` keyCode: *i32 `
    ///
    pub fn keyQtToCodeX(keyQt: i32, keyCode: *i32) bool {
        return qtc.KKeyServer_KeyQtToCodeX(@bitCast(keyQt), @ptrCast(keyCode));
    }

    /// ### DEPRECATED: Use `keyQtToCodeXs` instead
    ///
    pub const KeyQtToCodeXs = keyQtToCodeXs;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#keyQtToCodeXs)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` keyQt: i32 `
    ///
    pub fn keyQtToCodeXs(allocator: std.mem.Allocator, keyQt: i32) []i32 {
        const _arr: qtc.libqt_list = qtc.KKeyServer_KeyQtToCodeXs(@bitCast(keyQt));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("KKeyServer.keyQtToCodeXs: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `keyQtToModX` instead
    ///
    pub const KeyQtToModX = keyQtToModX;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#keyQtToModX)
    ///
    /// ## Parameter(s):
    ///
    /// ` keyQt: i32 `
    ///
    /// ` mod: *u32 `
    ///
    pub fn keyQtToModX(keyQt: i32, mod: *u32) bool {
        return qtc.KKeyServer_KeyQtToModX(@bitCast(keyQt), @ptrCast(mod));
    }

    /// ### DEPRECATED: Use `symXModXToKeyQt` instead
    ///
    pub const SymXModXToKeyQt = symXModXToKeyQt;

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
    pub fn symXModXToKeyQt(keySym: u32, modX: u16, keyQt: *i32) bool {
        return qtc.KKeyServer_SymXModXToKeyQt(@bitCast(keySym), @bitCast(modX), @ptrCast(keyQt));
    }

    /// ### DEPRECATED: Use `modXToQt` instead
    ///
    pub const ModXToQt = modXToQt;

    /// ### [Upstream resources](https://api.kde.org/kkeyserver.html#modXToQt)
    ///
    /// ## Parameter(s):
    ///
    /// ` modX: u32 `
    ///
    /// ` modQt: *i32 `
    ///
    pub fn modXToQt(modX: u32, modQt: *i32) bool {
        return qtc.KKeyServer_ModXToQt(@bitCast(modX), @ptrCast(modQt));
    }
};
