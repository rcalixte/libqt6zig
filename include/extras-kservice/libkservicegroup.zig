const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const ksycocatype_enums = @import("libksycocatype.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kservicegroup.html)
pub const kservicegroup = struct {
    /// New constructs a new KServiceGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New(name: []const u8) QtC.KServiceGroup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.KServiceGroup_new(name_str);
    }

    /// New2 constructs a new KServiceGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _fullpath: []const u8 `
    ///
    /// ` _relpath: []const u8 `
    ///
    pub fn New2(_fullpath: []const u8, _relpath: []const u8) QtC.KServiceGroup {
        const _fullpath_str = qtc.libqt_string{
            .len = _fullpath.len,
            .data = _fullpath.ptr,
        };
        const _relpath_str = qtc.libqt_string{
            .len = _relpath.len,
            .data = _relpath.ptr,
        };

        return qtc.KServiceGroup_new2(_fullpath_str, _relpath_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#relPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RelPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_RelPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.RelPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#caption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Caption(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_Caption(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.Caption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_Icon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#comment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Comment(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_Comment(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.Comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    pub fn ChildCount(self: ?*anyopaque) i32 {
        return qtc.KServiceGroup_ChildCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#noDisplay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    pub fn NoDisplay(self: ?*anyopaque) bool {
        return qtc.KServiceGroup_NoDisplay(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#showEmptyMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    pub fn ShowEmptyMenu(self: ?*anyopaque) bool {
        return qtc.KServiceGroup_ShowEmptyMenu(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setShowEmptyMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` b: bool `
    ///
    pub fn SetShowEmptyMenu(self: ?*anyopaque, b: bool) void {
        qtc.KServiceGroup_SetShowEmptyMenu(@ptrCast(self), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#showInlineHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    pub fn ShowInlineHeader(self: ?*anyopaque) bool {
        return qtc.KServiceGroup_ShowInlineHeader(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setShowInlineHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` _b: bool `
    ///
    pub fn SetShowInlineHeader(self: ?*anyopaque, _b: bool) void {
        qtc.KServiceGroup_SetShowInlineHeader(@ptrCast(self), _b);
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#inlineAlias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    pub fn InlineAlias(self: ?*anyopaque) bool {
        return qtc.KServiceGroup_InlineAlias(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setInlineAlias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` _b: bool `
    ///
    pub fn SetInlineAlias(self: ?*anyopaque, _b: bool) void {
        qtc.KServiceGroup_SetInlineAlias(@ptrCast(self), _b);
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#allowInline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    pub fn AllowInline(self: ?*anyopaque) bool {
        return qtc.KServiceGroup_AllowInline(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setAllowInline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` _b: bool `
    ///
    pub fn SetAllowInline(self: ?*anyopaque, _b: bool) void {
        qtc.KServiceGroup_SetAllowInline(@ptrCast(self), _b);
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#inlineValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    pub fn InlineValue(self: ?*anyopaque) i32 {
        return qtc.KServiceGroup_InlineValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setInlineValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` _val: i32 `
    ///
    pub fn SetInlineValue(self: ?*anyopaque, _val: i32) void {
        qtc.KServiceGroup_SetInlineValue(@ptrCast(self), @intCast(_val));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#suppressGenericNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuppressGenericNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KServiceGroup_SuppressGenericNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kservicegroup.SuppressGenericNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kservicegroup.SuppressGenericNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setLayoutInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` layout: [][]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetLayoutInfo(self: ?*anyopaque, layout: [][]const u8, allocator: std.mem.Allocator) void {
        var layout_arr = allocator.alloc(qtc.libqt_string, layout.len) catch @panic("kservicegroup.SetLayoutInfo: Memory allocation failed");
        defer allocator.free(layout_arr);
        for (layout, 0..layout.len) |item, i| {
            layout_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const layout_list = qtc.libqt_list{
            .len = layout.len,
            .data = layout_arr.ptr,
        };
        qtc.KServiceGroup_SetLayoutInfo(@ptrCast(self), layout_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#layoutInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LayoutInfo(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KServiceGroup_LayoutInfo(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kservicegroup.LayoutInfo: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kservicegroup.LayoutInfo: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#baseGroupName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BaseGroupName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_BaseGroupName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.BaseGroupName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#directoryEntryPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DirectoryEntryPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_DirectoryEntryPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.DirectoryEntryPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` t: ksycocatype_enums.KSycocaType `
    ///
    pub fn IsType(self: ?*anyopaque, t: i32) bool {
        return qtc.KSycocaEntry_IsType(@ptrCast(self), @intCast(t));
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#sycocaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ## Returns:
    ///
    /// ` ksycocatype_enums.KSycocaType `
    ///
    pub fn SycocaType(self: ?*anyopaque) i32 {
        return qtc.KSycocaEntry_SycocaType(@ptrCast(self));
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#entryPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_EntryPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.EntryPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#storageId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StorageId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_StorageId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.StorageId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KSycocaEntry_IsValid(@ptrCast(self));
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    pub fn IsDeleted(self: ?*anyopaque) bool {
        return qtc.KSycocaEntry_IsDeleted(@ptrCast(self));
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#setDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    /// ` deleted: bool `
    ///
    pub fn SetDeleted(self: ?*anyopaque, deleted: bool) void {
        qtc.KSycocaEntry_SetDeleted(@ptrCast(self), deleted);
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    pub fn IsSeparator(self: ?*anyopaque) bool {
        return qtc.KSycocaEntry_IsSeparator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#dtor.KServiceGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KServiceGroup `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KServiceGroup_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kservicegroup.html#public-types)
pub const enums = struct {
    pub const EntriesOption = enum {
        pub const NoOptions: i32 = 0;
        pub const SortEntries: i32 = 1;
        pub const ExcludeNoDisplay: i32 = 2;
        pub const AllowSeparators: i32 = 4;
        pub const SortByGenericName: i32 = 8;
    };
};
