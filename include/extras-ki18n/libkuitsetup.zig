const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kuitsetup_enums = enums;
const std = @import("std");

/// https://api-staging.kde.org/kuit.html
pub const kuit = struct {
    /// [Qt documentation](https://api-staging.kde.org/kuit.html#setupForDomain)
    ///
    /// ``` param1: []u8 ```
    pub fn SetupForDomain(param1: []u8) QtC.KuitSetup {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.Kuit_SetupForDomain(param1_str);
    }
};

/// https://api-staging.kde.org/kuitsetup.html
pub const kuitsetup = struct {
    /// [Qt documentation](https://api-staging.kde.org/kuitsetup.html#setTagPattern)
    ///
    /// ``` self: QtC.KuitSetup, tagName: []const u8, attribNames: [][]const u8, format: kuitsetup_enums.VisualFormat, pattern: QtC.KLocalizedString, allocator: std.mem.Allocator ```
    pub fn SetTagPattern(self: ?*anyopaque, tagName: []const u8, attribNames: [][]const u8, format: i32, pattern: ?*anyopaque, allocator: std.mem.Allocator) void {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        var attribNames_arr = allocator.alloc(qtc.libqt_string, attribNames.len) catch @panic("kuitsetup.SetTagPattern: Memory allocation failed");
        defer allocator.free(attribNames_arr);
        for (attribNames, 0..attribNames.len) |item, i| {
            attribNames_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const attribNames_list = qtc.libqt_list{
            .len = attribNames.len,
            .data = attribNames_arr.ptr,
        };
        qtc.KuitSetup_SetTagPattern(@ptrCast(self), tagName_str, attribNames_list, @intCast(format), @ptrCast(pattern));
    }

    /// [Qt documentation](https://api-staging.kde.org/kuitsetup.html#setTagClass)
    ///
    /// ``` self: QtC.KuitSetup, tagName: []const u8, aClass: kuitsetup_enums.TagClass ```
    pub fn SetTagClass(self: ?*anyopaque, tagName: []const u8, aClass: i32) void {
        const tagName_str = qtc.libqt_string{
            .len = tagName.len,
            .data = tagName.ptr,
        };
        qtc.KuitSetup_SetTagClass(@ptrCast(self), tagName_str, @intCast(aClass));
    }

    /// [Qt documentation](https://api-staging.kde.org/kuitsetup.html#setFormatForMarker)
    ///
    /// ``` self: QtC.KuitSetup, marker: []const u8, format: kuitsetup_enums.VisualFormat ```
    pub fn SetFormatForMarker(self: ?*anyopaque, marker: []const u8, format: i32) void {
        const marker_str = qtc.libqt_string{
            .len = marker.len,
            .data = marker.ptr,
        };
        qtc.KuitSetup_SetFormatForMarker(@ptrCast(self), marker_str, @intCast(format));
    }

    /// [Qt documentation](https://api-staging.kde.org/kuitsetup.html#dtor.KuitSetup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KuitSetup ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KuitSetup_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kuitsetup.html#types
pub const enums = struct {
    pub const VisualFormat = enum {
        pub const UndefinedFormat: i32 = 0;
        pub const PlainText: i32 = 10;
        pub const RichText: i32 = 20;
        pub const TermText: i32 = 30;
    };

    pub const TagClass = enum {
        pub const PhraseTag: i32 = 0;
        pub const StructTag: i32 = 1;
    };
};
