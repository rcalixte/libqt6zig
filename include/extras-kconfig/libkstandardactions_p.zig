const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kstandardactions_enums = @import("libkstandardactions.zig").enums;
const kstandardshortcut_enums = @import("libkstandardshortcut.zig").enums;
const std = @import("std");

/// https://api.kde.org/kstandardactions-rawstringdata.html
pub const kstandardactions__rawstringdata = struct {
    /// New constructs a new KStandardActions::RawStringData object.
    ///
    /// ``` other: QtC.KStandardActions__RawStringData ```
    pub fn New(other: ?*anyopaque) QtC.KStandardActions__RawStringData {
        return qtc.KStandardActions__RawStringData_new(@ptrCast(other));
    }

    /// New2 constructs a new KStandardActions::RawStringData object and invalidates the source KStandardActions::RawStringData object.
    ///
    /// ``` other: QtC.KStandardActions__RawStringData ```
    pub fn New2(other: ?*anyopaque) QtC.KStandardActions__RawStringData {
        return qtc.KStandardActions__RawStringData_new2(@ptrCast(other));
    }

    /// New3 constructs a new KStandardActions::RawStringData object.
    ///
    ///
    pub fn New3() QtC.KStandardActions__RawStringData {
        return qtc.KStandardActions__RawStringData_new3();
    }

    /// New4 constructs a new KStandardActions::RawStringData object.
    ///
    /// ``` param1: QtC.KStandardActions__RawStringData ```
    pub fn New4(param1: ?*anyopaque) QtC.KStandardActions__RawStringData {
        return qtc.KStandardActions__RawStringData_new4(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kstandardactions-rawstringdata.html#toString)
    ///
    /// ``` self: QtC.KStandardActions__RawStringData, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KStandardActions__RawStringData_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstandardactions::rawstringdata.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KStandardActions__RawStringData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KStandardActions__RawStringData_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kstandardactions-kstandardactionsinfo.html
pub const kstandardactions__kstandardactionsinfo = struct {
    /// New constructs a new KStandardActions::KStandardActionsInfo object.
    ///
    /// ``` param1: QtC.KStandardActions__KStandardActionsInfo ```
    pub fn New(param1: ?*anyopaque) QtC.KStandardActions__KStandardActionsInfo {
        return qtc.KStandardActions__KStandardActionsInfo_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#id-var)
    ///
    /// ``` self: QtC.KStandardActions__KStandardActionsInfo ```
    ///
    /// Returns: ``` kstandardactions_enums.StandardAction ```
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.KStandardActions__KStandardActionsInfo_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#id-var)
    ///
    /// ``` self: QtC.KStandardActions__KStandardActionsInfo, id: kstandardactions_enums.StandardAction ```
    pub fn SetId(self: ?*anyopaque, id: i32) void {
        qtc.KStandardActions__KStandardActionsInfo_SetId(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#idAccel-var)
    ///
    /// ``` self: QtC.KStandardActions__KStandardActionsInfo ```
    ///
    /// Returns: ``` kstandardshortcut_enums.StandardShortcut ```
    pub fn IdAccel(self: ?*anyopaque) i32 {
        return qtc.KStandardActions__KStandardActionsInfo_IdAccel(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#idAccel-var)
    ///
    /// ``` self: QtC.KStandardActions__KStandardActionsInfo, idAccel: kstandardshortcut_enums.StandardShortcut ```
    pub fn SetIdAccel(self: ?*anyopaque, idAccel: i32) void {
        qtc.KStandardActions__KStandardActionsInfo_SetIdAccel(@ptrCast(self), @intCast(idAccel));
    }

    /// [Qt documentation](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psLabel-var)
    ///
    /// ``` self: QtC.KStandardActions__KStandardActionsInfo ```
    pub fn PsLabel(self: ?*anyopaque) []const u8 {
        const psLabel_ret = qtc.KStandardActions__KStandardActionsInfo_PsLabel(@ptrCast(self));
        return std.mem.span(psLabel_ret);
    }

    /// [Qt documentation](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psLabel-var)
    ///
    /// ``` self: QtC.KStandardActions__KStandardActionsInfo, psLabel: []const u8 ```
    pub fn SetPsLabel(self: ?*anyopaque, psLabel: []const u8) void {
        const psLabel_Cstring = psLabel.ptr;
        qtc.KStandardActions__KStandardActionsInfo_SetPsLabel(@ptrCast(self), psLabel_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psToolTip-var)
    ///
    /// ``` self: QtC.KStandardActions__KStandardActionsInfo ```
    pub fn PsToolTip(self: ?*anyopaque) []const u8 {
        const psToolTip_ret = qtc.KStandardActions__KStandardActionsInfo_PsToolTip(@ptrCast(self));
        return std.mem.span(psToolTip_ret);
    }

    /// [Qt documentation](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psToolTip-var)
    ///
    /// ``` self: QtC.KStandardActions__KStandardActionsInfo, psToolTip: []const u8 ```
    pub fn SetPsToolTip(self: ?*anyopaque, psToolTip: []const u8) void {
        const psToolTip_Cstring = psToolTip.ptr;
        qtc.KStandardActions__KStandardActionsInfo_SetPsToolTip(@ptrCast(self), psToolTip_Cstring);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KStandardActions__KStandardActionsInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KStandardActions__KStandardActionsInfo_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kstandardactions.html
pub const kstandardactions = struct {
    /// [Qt documentation](https://api.kde.org/kstandardactions.html#infoPtr)
    ///
    /// ``` param1: kstandardactions_enums.StandardAction ```
    pub fn InfoPtr(param1: i32) QtC.KStandardActions__KStandardActionsInfo {
        return qtc.KStandardActions_InfoPtr(@intCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kstandardactions.html#internal_stdNames)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn InternalStdNames(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KStandardActions_InternalStdNames();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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
