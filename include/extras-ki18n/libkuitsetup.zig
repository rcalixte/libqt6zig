const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KLocalizedString = @import("libqt6").KLocalizedString;
const kuitsetup_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kuit.html)
pub const Kuit = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kuit.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Kuit,

    pub const _is_Kuit = {};

    /// ### [Upstream resources](https://api.kde.org/kuit.html#setupForDomain)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    pub fn SetupForDomain(param1: []u8) KuitSetup {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return .{ .ptr = qtc.Kuit_SetupForDomain(param1_str) };
    }
};

/// ### [Upstream resources](https://api.kde.org/kuitsetup.html)
pub const KuitSetup = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kuitsetup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KuitSetup,

    pub const _is_KuitSetup = {};

    /// ### [Upstream resources](https://api.kde.org/kuitsetup.html#setTagPattern)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KuitSetup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` attribNames: []const []const u8 `
    ///
    /// ` format: kuitsetup_enums.VisualFormat `
    ///
    /// ` pattern: KLocalizedString `
    ///
    pub fn SetTagPattern(self: KuitSetup, allocator: std.mem.Allocator, tagName: []const u8, attribNames: []const []const u8, format: i32, pattern: anytype) void {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        const attribNames_arr = allocator.alloc(qtc.libqt_string, attribNames.len) catch @panic("kuitsetup.SetTagPattern: Memory allocation failed");
        defer allocator.free(attribNames_arr);
        for (attribNames, 0..attribNames.len) |item, i|
            attribNames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const attribNames_list = qtc.libqt_list{
            .len = attribNames.len,
            .data = attribNames_arr.ptr,
        };
        comptime _ = @TypeOf(pattern)._is_KLocalizedString;
        qtc.KuitSetup_SetTagPattern(@ptrCast(self.ptr), tagName_str, attribNames_list, @bitCast(format), @ptrCast(pattern.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kuitsetup.html#setTagClass)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KuitSetup `
    ///
    /// ` tagName: []const u8 `
    ///
    /// ` aClass: kuitsetup_enums.TagClass `
    ///
    pub fn SetTagClass(self: KuitSetup, tagName: []const u8, aClass: i32) void {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        qtc.KuitSetup_SetTagClass(@ptrCast(self.ptr), tagName_str, @bitCast(aClass));
    }

    /// ### [Upstream resources](https://api.kde.org/kuitsetup.html#setFormatForMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KuitSetup `
    ///
    /// ` marker: []const u8 `
    ///
    /// ` format: kuitsetup_enums.VisualFormat `
    ///
    pub fn SetFormatForMarker(self: KuitSetup, marker: []const u8, format: i32) void {
        const marker_str = qtc.libqt_string{
            .len = marker.len,
            .data = marker.ptr,
        };
        qtc.KuitSetup_SetFormatForMarker(@ptrCast(self.ptr), marker_str, @bitCast(format));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kuitsetup.html#dtor.KuitSetup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KuitSetup `
    ///
    pub fn Delete(self: KuitSetup) void {
        qtc.KuitSetup_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kuitsetup.html#public-types)
pub const enums = struct {
    pub const VisualFormat = enum(i32) {
        pub const UndefinedFormat: i32 = 0;
        pub const PlainText: i32 = 10;
        pub const RichText: i32 = 20;
        pub const TermText: i32 = 30;
    };

    pub const TagClass = enum(i32) {
        pub const PhraseTag: i32 = 0;
        pub const StructTag: i32 = 1;
    };
};
