const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const ksycocatype_enums = @import("libksycocatype.zig").enums;
const std = @import("std");

/// https://api.kde.org/kservicegroup.html
pub const kservicegroup = struct {
    /// New constructs a new KServiceGroup object.
    ///
    /// ``` name: []const u8 ```
    pub fn New(name: []const u8) QtC.KServiceGroup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.KServiceGroup_new(name_str);
    }

    /// New2 constructs a new KServiceGroup object.
    ///
    /// ``` _fullpath: []const u8, _relpath: []const u8 ```
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

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#relPath)
    ///
    /// ``` self: QtC.KServiceGroup, allocator: std.mem.Allocator ```
    pub fn RelPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KServiceGroup_RelPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.RelPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#caption)
    ///
    /// ``` self: QtC.KServiceGroup, allocator: std.mem.Allocator ```
    pub fn Caption(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KServiceGroup_Caption(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.Caption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#icon)
    ///
    /// ``` self: QtC.KServiceGroup, allocator: std.mem.Allocator ```
    pub fn Icon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KServiceGroup_Icon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#comment)
    ///
    /// ``` self: QtC.KServiceGroup, allocator: std.mem.Allocator ```
    pub fn Comment(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KServiceGroup_Comment(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.Comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#childCount)
    ///
    /// ``` self: QtC.KServiceGroup ```
    pub fn ChildCount(self: ?*anyopaque) i32 {
        return qtc.KServiceGroup_ChildCount(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#noDisplay)
    ///
    /// ``` self: QtC.KServiceGroup ```
    pub fn NoDisplay(self: ?*anyopaque) bool {
        return qtc.KServiceGroup_NoDisplay(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#showEmptyMenu)
    ///
    /// ``` self: QtC.KServiceGroup ```
    pub fn ShowEmptyMenu(self: ?*anyopaque) bool {
        return qtc.KServiceGroup_ShowEmptyMenu(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#setShowEmptyMenu)
    ///
    /// ``` self: QtC.KServiceGroup, b: bool ```
    pub fn SetShowEmptyMenu(self: ?*anyopaque, b: bool) void {
        qtc.KServiceGroup_SetShowEmptyMenu(@ptrCast(self), b);
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#showInlineHeader)
    ///
    /// ``` self: QtC.KServiceGroup ```
    pub fn ShowInlineHeader(self: ?*anyopaque) bool {
        return qtc.KServiceGroup_ShowInlineHeader(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#setShowInlineHeader)
    ///
    /// ``` self: QtC.KServiceGroup, _b: bool ```
    pub fn SetShowInlineHeader(self: ?*anyopaque, _b: bool) void {
        qtc.KServiceGroup_SetShowInlineHeader(@ptrCast(self), _b);
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#inlineAlias)
    ///
    /// ``` self: QtC.KServiceGroup ```
    pub fn InlineAlias(self: ?*anyopaque) bool {
        return qtc.KServiceGroup_InlineAlias(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#setInlineAlias)
    ///
    /// ``` self: QtC.KServiceGroup, _b: bool ```
    pub fn SetInlineAlias(self: ?*anyopaque, _b: bool) void {
        qtc.KServiceGroup_SetInlineAlias(@ptrCast(self), _b);
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#allowInline)
    ///
    /// ``` self: QtC.KServiceGroup ```
    pub fn AllowInline(self: ?*anyopaque) bool {
        return qtc.KServiceGroup_AllowInline(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#setAllowInline)
    ///
    /// ``` self: QtC.KServiceGroup, _b: bool ```
    pub fn SetAllowInline(self: ?*anyopaque, _b: bool) void {
        qtc.KServiceGroup_SetAllowInline(@ptrCast(self), _b);
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#inlineValue)
    ///
    /// ``` self: QtC.KServiceGroup ```
    pub fn InlineValue(self: ?*anyopaque) i32 {
        return qtc.KServiceGroup_InlineValue(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#setInlineValue)
    ///
    /// ``` self: QtC.KServiceGroup, _val: i32 ```
    pub fn SetInlineValue(self: ?*anyopaque, _val: i32) void {
        qtc.KServiceGroup_SetInlineValue(@ptrCast(self), @intCast(_val));
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#suppressGenericNames)
    ///
    /// ``` self: QtC.KServiceGroup, allocator: std.mem.Allocator ```
    pub fn SuppressGenericNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KServiceGroup_SuppressGenericNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#setLayoutInfo)
    ///
    /// ``` self: QtC.KServiceGroup, layout: [][]const u8, allocator: std.mem.Allocator ```
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

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#layoutInfo)
    ///
    /// ``` self: QtC.KServiceGroup, allocator: std.mem.Allocator ```
    pub fn LayoutInfo(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KServiceGroup_LayoutInfo(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#baseGroupName)
    ///
    /// ``` self: QtC.KServiceGroup, allocator: std.mem.Allocator ```
    pub fn BaseGroupName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KServiceGroup_BaseGroupName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.BaseGroupName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#directoryEntryPath)
    ///
    /// ``` self: QtC.KServiceGroup, allocator: std.mem.Allocator ```
    pub fn DirectoryEntryPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KServiceGroup_DirectoryEntryPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.DirectoryEntryPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#isType)
    ///
    /// ``` self: QtC.KServiceGroup, t: ksycocatype_enums.KSycocaType ```
    pub fn IsType(self: ?*anyopaque, t: i32) bool {
        return qtc.KSycocaEntry_IsType(@ptrCast(self), @intCast(t));
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#sycocaType)
    ///
    /// ``` self: QtC.KServiceGroup ```
    ///
    /// Returns: ``` ksycocatype_enums.KSycocaType ```
    pub fn SycocaType(self: ?*anyopaque) i32 {
        return qtc.KSycocaEntry_SycocaType(@ptrCast(self));
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#name)
    ///
    /// ``` self: QtC.KServiceGroup, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSycocaEntry_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#entryPath)
    ///
    /// ``` self: QtC.KServiceGroup, allocator: std.mem.Allocator ```
    pub fn EntryPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSycocaEntry_EntryPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.EntryPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#storageId)
    ///
    /// ``` self: QtC.KServiceGroup, allocator: std.mem.Allocator ```
    pub fn StorageId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSycocaEntry_StorageId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.StorageId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#isValid)
    ///
    /// ``` self: QtC.KServiceGroup ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KSycocaEntry_IsValid(@ptrCast(self));
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#isDeleted)
    ///
    /// ``` self: QtC.KServiceGroup ```
    pub fn IsDeleted(self: ?*anyopaque) bool {
        return qtc.KSycocaEntry_IsDeleted(@ptrCast(self));
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#setDeleted)
    ///
    /// ``` self: QtC.KServiceGroup, deleted: bool ```
    pub fn SetDeleted(self: ?*anyopaque, deleted: bool) void {
        qtc.KSycocaEntry_SetDeleted(@ptrCast(self), deleted);
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#isSeparator)
    ///
    /// ``` self: QtC.KServiceGroup ```
    pub fn IsSeparator(self: ?*anyopaque) bool {
        return qtc.KSycocaEntry_IsSeparator(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservicegroup.html#dtor.KServiceGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KServiceGroup ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KServiceGroup_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kservicegroup.html#types
pub const enums = struct {
    pub const EntriesOption = enum {
        pub const NoOptions: i32 = 0;
        pub const SortEntries: i32 = 1;
        pub const ExcludeNoDisplay: i32 = 2;
        pub const AllowSeparators: i32 = 4;
        pub const SortByGenericName: i32 = 8;
    };
};
