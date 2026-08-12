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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KStandardActions::RawStringData object in C++ memory
    ///
    pub fn new() KStandardActions__RawStringData {
        return .{ .ptr = qtc.KStandardActions__RawStringData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KStandardActions::RawStringData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KStandardActions__RawStringData `
    ///
    pub fn new2(other: anytype) KStandardActions__RawStringData {
        comptime _ = @TypeOf(other)._is_KStandardActions__RawStringData;
        return .{ .ptr = qtc.KStandardActions__RawStringData_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KStandardActions::RawStringData object and invalidate the source KStandardActions::RawStringData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KStandardActions__RawStringData `
    ///
    pub fn new3(other: anytype) KStandardActions__RawStringData {
        comptime _ = @TypeOf(other)._is_KStandardActions__RawStringData;
        return .{ .ptr = qtc.KStandardActions__RawStringData_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KStandardActions::RawStringData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KStandardActions__RawStringData `
    ///
    pub fn new4(param1: anytype) KStandardActions__RawStringData {
        comptime _ = @TypeOf(param1)._is_KStandardActions__RawStringData;
        return .{ .ptr = qtc.KStandardActions__RawStringData_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-rawstringdata.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__RawStringData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: KStandardActions__RawStringData, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KStandardActions__RawStringData_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStandardActions__RawStringData.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KStandardActions__RawStringData `
    ///
    pub fn delete(self: KStandardActions__RawStringData) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KStandardActions::KStandardActionsInfo object in C++ memory
    ///
    pub fn new() KStandardActions__KStandardActionsInfo {
        return .{ .ptr = qtc.KStandardActions__KStandardActionsInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KStandardActions::KStandardActionsInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KStandardActions__KStandardActionsInfo `
    ///
    pub fn new2(param1: anytype) KStandardActions__KStandardActionsInfo {
        comptime _ = @TypeOf(param1)._is_KStandardActions__KStandardActionsInfo;
        return .{ .ptr = qtc.KStandardActions__KStandardActionsInfo_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

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
    pub fn id(self: KStandardActions__KStandardActionsInfo) i32 {
        return qtc.KStandardActions__KStandardActionsInfo_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    /// ` _id: kstandardactions_enums.StandardAction `
    ///
    pub fn setId(self: KStandardActions__KStandardActionsInfo, _id: i32) void {
        qtc.KStandardActions__KStandardActionsInfo_SetId(@ptrCast(self.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `idAccel` instead
    ///
    pub const IdAccel = idAccel;

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
    pub fn idAccel(self: KStandardActions__KStandardActionsInfo) i32 {
        return qtc.KStandardActions__KStandardActionsInfo_IdAccel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIdAccel` instead
    ///
    pub const SetIdAccel = setIdAccel;

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#idAccel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    /// ` _idAccel: kstandardshortcut_enums.StandardShortcut `
    ///
    pub fn setIdAccel(self: KStandardActions__KStandardActionsInfo, _idAccel: i32) void {
        qtc.KStandardActions__KStandardActionsInfo_SetIdAccel(@ptrCast(self.ptr), @bitCast(_idAccel));
    }

    /// ### DEPRECATED: Use `psLabel` instead
    ///
    pub const PsLabel = psLabel;

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psLabel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    pub fn psLabel(self: KStandardActions__KStandardActionsInfo) [:0]const u8 {
        const psLabel_ret = qtc.KStandardActions__KStandardActionsInfo_PsLabel(@ptrCast(self.ptr));
        return std.mem.span(psLabel_ret);
    }

    /// ### DEPRECATED: Use `setPsLabel` instead
    ///
    pub const SetPsLabel = setPsLabel;

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psLabel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    /// ` _psLabel: [:0]const u8 `
    ///
    pub fn setPsLabel(self: KStandardActions__KStandardActionsInfo, _psLabel: [:0]const u8) void {
        const psLabel_Cstring = _psLabel.ptr;
        qtc.KStandardActions__KStandardActionsInfo_SetPsLabel(@ptrCast(self.ptr), psLabel_Cstring);
    }

    /// ### DEPRECATED: Use `psToolTip` instead
    ///
    pub const PsToolTip = psToolTip;

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psToolTip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    pub fn psToolTip(self: KStandardActions__KStandardActionsInfo) [:0]const u8 {
        const psToolTip_ret = qtc.KStandardActions__KStandardActionsInfo_PsToolTip(@ptrCast(self.ptr));
        return std.mem.span(psToolTip_ret);
    }

    /// ### DEPRECATED: Use `setPsToolTip` instead
    ///
    pub const SetPsToolTip = setPsToolTip;

    /// ### [Upstream resources](https://api.kde.org/kstandardactions-kstandardactionsinfo.html#psToolTip-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    /// ` _psToolTip: [:0]const u8 `
    ///
    pub fn setPsToolTip(self: KStandardActions__KStandardActionsInfo, _psToolTip: [:0]const u8) void {
        const psToolTip_Cstring = _psToolTip.ptr;
        qtc.KStandardActions__KStandardActionsInfo_SetPsToolTip(@ptrCast(self.ptr), psToolTip_Cstring);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KStandardActions__KStandardActionsInfo `
    ///
    pub fn delete(self: KStandardActions__KStandardActionsInfo) void {
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

    /// ### DEPRECATED: Use `infoPtr` instead
    ///
    pub const InfoPtr = infoPtr;

    /// ### [Upstream resources](https://api.kde.org/kstandardactions.html#infoPtr)
    ///
    /// ## Parameter(s):
    ///
    /// ` _id: kstandardactions_enums.StandardAction `
    ///
    pub fn infoPtr(_id: i32) KStandardActions__KStandardActionsInfo {
        return .{ .ptr = qtc.KStandardActions_InfoPtr(@bitCast(_id)) };
    }

    /// ### DEPRECATED: Use `internalStdNames` instead
    ///
    pub const InternalStdNames = internalStdNames;

    /// ### [Upstream resources](https://api.kde.org/kstandardactions.html#internal_stdNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn internalStdNames(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KStandardActions_InternalStdNames();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KStandardActions.internalStdNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KStandardActions.internalStdNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }
};
