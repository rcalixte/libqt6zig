const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kstandardactions_enums = @import("libkstandardactions.zig").enums;
const kstandardshortcut_enums = @import("libkstandardshortcut.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kstandardactions-rawstringdata.html)
pub const kstandardactions__rawstringdata = struct {
    /// New constructs a new KStandardActions::RawStringData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KStandardActions__RawStringData `
    ///
    pub fn New(other: ?*anyopaque) QtC.KStandardActions__RawStringData {
        return qtc.KStandardActions__RawStringData_new(@ptrCast(other));
    }

    /// New2 constructs a new KStandardActions::RawStringData object and invalidates the source KStandardActions::RawStringData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.KStandardActions__RawStringData `
    ///
    pub fn New2(other: ?*anyopaque) QtC.KStandardActions__RawStringData {
        return qtc.KStandardActions__RawStringData_new2(@ptrCast(other));
    }

    /// New3 constructs a new KStandardActions::RawStringData object.
    ///
    pub fn New3() QtC.KStandardActions__RawStringData {
        return qtc.KStandardActions__RawStringData_new3();
    }

    /// New4 constructs a new KStandardActions::RawStringData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KStandardActions__RawStringData `
    ///
    pub fn New4(param1: ?*anyopaque) QtC.KStandardActions__RawStringData {
        return qtc.KStandardActions__RawStringData_new4(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-rawstringdata.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KStandardActions__RawStringData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStandardActions__RawStringData_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstandardactions__rawstringdata.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KStandardActions__RawStringData `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KStandardActions__RawStringData_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html)
pub const kstandardactions__kstandardactionsinfo = struct {
    /// New constructs a new KStandardActions::KStandardActionsInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.KStandardActions__KStandardActionsInfo `
    ///
    pub fn New(param1: ?*anyopaque) QtC.KStandardActions__KStandardActionsInfo {
        return qtc.KStandardActions__KStandardActionsInfo_new(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KStandardActions__KStandardActionsInfo `
    ///
    /// ## Returns:
    ///
    /// ` kstandardactions_enums.StandardAction `
    ///
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.KStandardActions__KStandardActionsInfo_Id(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KStandardActions__KStandardActionsInfo `
    ///
    /// ` id: kstandardactions_enums.StandardAction `
    ///
    pub fn SetId(self: ?*anyopaque, id: i32) void {
        qtc.KStandardActions__KStandardActionsInfo_SetId(@ptrCast(self), @intCast(id));
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#idAccel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KStandardActions__KStandardActionsInfo `
    ///
    /// ## Returns:
    ///
    /// ` kstandardshortcut_enums.StandardShortcut `
    ///
    pub fn IdAccel(self: ?*anyopaque) i32 {
        return qtc.KStandardActions__KStandardActionsInfo_IdAccel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#idAccel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KStandardActions__KStandardActionsInfo `
    ///
    /// ` idAccel: kstandardshortcut_enums.StandardShortcut `
    ///
    pub fn SetIdAccel(self: ?*anyopaque, idAccel: i32) void {
        qtc.KStandardActions__KStandardActionsInfo_SetIdAccel(@ptrCast(self), @intCast(idAccel));
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psLabel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KStandardActions__KStandardActionsInfo `
    ///
    pub fn PsLabel(self: ?*anyopaque) [:0]const u8 {
        const psLabel_ret = qtc.KStandardActions__KStandardActionsInfo_PsLabel(@ptrCast(self));
        return std.mem.span(psLabel_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psLabel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KStandardActions__KStandardActionsInfo `
    ///
    /// ` psLabel: [:0]const u8 `
    ///
    pub fn SetPsLabel(self: ?*anyopaque, psLabel: [:0]const u8) void {
        const psLabel_Cstring = psLabel.ptr;
        qtc.KStandardActions__KStandardActionsInfo_SetPsLabel(@ptrCast(self), psLabel_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psToolTip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KStandardActions__KStandardActionsInfo `
    ///
    pub fn PsToolTip(self: ?*anyopaque) [:0]const u8 {
        const psToolTip_ret = qtc.KStandardActions__KStandardActionsInfo_PsToolTip(@ptrCast(self));
        return std.mem.span(psToolTip_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psToolTip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KStandardActions__KStandardActionsInfo `
    ///
    /// ` psToolTip: [:0]const u8 `
    ///
    pub fn SetPsToolTip(self: ?*anyopaque, psToolTip: [:0]const u8) void {
        const psToolTip_Cstring = psToolTip.ptr;
        qtc.KStandardActions__KStandardActionsInfo_SetPsToolTip(@ptrCast(self), psToolTip_Cstring);
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KStandardActions__KStandardActionsInfo `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KStandardActions__KStandardActionsInfo_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kstandardactions.html)
pub const kstandardactions = struct {
    /// ### [Upstream resources](https://api.kde.org/kstandardactions.html#infoPtr)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kstandardactions_enums.StandardAction `
    ///
    pub fn InfoPtr(param1: i32) QtC.KStandardActions__KStandardActionsInfo {
        return qtc.KStandardActions_InfoPtr(@intCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions.html#internal_stdNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InternalStdNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KStandardActions_InternalStdNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kstandardactions.InternalStdNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kstandardactions.InternalStdNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
};
