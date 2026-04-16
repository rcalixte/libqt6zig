const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kstandardactions_enums = @import("libkstandardactions.zig").enums;
const kstandardshortcut_enums = @import("libkstandardshortcut.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kstandardactions-rawstringdata.html)
pub const KStandardActions__RawStringData = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstandardactions-rawstringdata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStandardActions__RawStringData,

    pub const _is_KStandardActions__RawStringData = {};

    /// New constructs a new KStandardActions::RawStringData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KStandardActions__RawStringData `
    ///
    pub fn New(other: anytype) KStandardActions__RawStringData {
        comptime _ = @TypeOf(other)._is_KStandardActions__RawStringData;
        return .{ .ptr = qtc.KStandardActions__RawStringData_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KStandardActions::RawStringData object and invalidates the source KStandardActions::RawStringData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KStandardActions__RawStringData `
    ///
    pub fn New2(other: anytype) KStandardActions__RawStringData {
        comptime _ = @TypeOf(other)._is_KStandardActions__RawStringData;
        return .{ .ptr = qtc.KStandardActions__RawStringData_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new KStandardActions::RawStringData object.
    ///
    pub fn New3() KStandardActions__RawStringData {
        return .{ .ptr = qtc.KStandardActions__RawStringData_new3() };
    }

    /// New4 constructs a new KStandardActions::RawStringData object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KStandardActions__RawStringData `
    ///
    pub fn New4(param1: anytype) KStandardActions__RawStringData {
        comptime _ = @TypeOf(param1)._is_KStandardActions__RawStringData;
        return .{ .ptr = qtc.KStandardActions__RawStringData_new4(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-rawstringdata.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__RawStringData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: KStandardActions__RawStringData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStandardActions__RawStringData_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstandardactions__rawstringdata.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KStandardActions__RawStringData `
    ///
    pub fn Delete(self: KStandardActions__RawStringData) void {
        qtc.KStandardActions__RawStringData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html)
pub const KStandardActions__KStandardActionsInfo = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStandardActions__KStandardActionsInfo,

    pub const _is_KStandardActions__KStandardActionsInfo = {};

    /// New constructs a new KStandardActions::KStandardActionsInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KStandardActions__KStandardActionsInfo `
    ///
    pub fn New(param1: anytype) KStandardActions__KStandardActionsInfo {
        comptime _ = @TypeOf(param1)._is_KStandardActions__KStandardActionsInfo;
        return .{ .ptr = qtc.KStandardActions__KStandardActionsInfo_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    /// ## Returns:
    ///
    /// ` kstandardactions_enums.StandardAction `
    ///
    pub fn Id(self: KStandardActions__KStandardActionsInfo) i32 {
        return qtc.KStandardActions__KStandardActionsInfo_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    /// ` id: kstandardactions_enums.StandardAction `
    ///
    pub fn SetId(self: KStandardActions__KStandardActionsInfo, id: i32) void {
        qtc.KStandardActions__KStandardActionsInfo_SetId(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#idAccel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    /// ## Returns:
    ///
    /// ` kstandardshortcut_enums.StandardShortcut `
    ///
    pub fn IdAccel(self: KStandardActions__KStandardActionsInfo) i32 {
        return qtc.KStandardActions__KStandardActionsInfo_IdAccel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#idAccel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    /// ` idAccel: kstandardshortcut_enums.StandardShortcut `
    ///
    pub fn SetIdAccel(self: KStandardActions__KStandardActionsInfo, idAccel: i32) void {
        qtc.KStandardActions__KStandardActionsInfo_SetIdAccel(@ptrCast(self.ptr), @bitCast(idAccel));
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psLabel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    pub fn PsLabel(self: KStandardActions__KStandardActionsInfo) [:0]const u8 {
        const psLabel_ret = qtc.KStandardActions__KStandardActionsInfo_PsLabel(@ptrCast(self.ptr));
        return std.mem.span(psLabel_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psLabel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    /// ` psLabel: [:0]const u8 `
    ///
    pub fn SetPsLabel(self: KStandardActions__KStandardActionsInfo, psLabel: [:0]const u8) void {
        const psLabel_Cstring = psLabel.ptr;
        qtc.KStandardActions__KStandardActionsInfo_SetPsLabel(@ptrCast(self.ptr), psLabel_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psToolTip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    pub fn PsToolTip(self: KStandardActions__KStandardActionsInfo) [:0]const u8 {
        const psToolTip_ret = qtc.KStandardActions__KStandardActionsInfo_PsToolTip(@ptrCast(self.ptr));
        return std.mem.span(psToolTip_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psToolTip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    /// ` psToolTip: [:0]const u8 `
    ///
    pub fn SetPsToolTip(self: KStandardActions__KStandardActionsInfo, psToolTip: [:0]const u8) void {
        const psToolTip_Cstring = psToolTip.ptr;
        qtc.KStandardActions__KStandardActionsInfo_SetPsToolTip(@ptrCast(self.ptr), psToolTip_Cstring);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    pub fn Delete(self: KStandardActions__KStandardActionsInfo) void {
        qtc.KStandardActions__KStandardActionsInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kstandardactions.html)
pub const KStandardActions = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstandardactions.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStandardActions,

    pub const _is_KStandardActions = {};

    /// ### [Upstream resources](https://api.kde.org/kstandardactions.html#infoPtr)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: kstandardactions_enums.StandardAction `
    ///
    pub fn InfoPtr(param1: i32) KStandardActions__KStandardActionsInfo {
        return .{ .ptr = qtc.KStandardActions_InfoPtr(@bitCast(param1)) };
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
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
