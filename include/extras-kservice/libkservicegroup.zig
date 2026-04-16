const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const ksycocatype_enums = @import("libksycocatype.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kservicegroup.html)
pub const KServiceGroup = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KServiceGroup,

    pub const _is_KServiceGroup = {};
    pub const _is_KSycocaEntry = {};
    pub const _is_QSharedData = {};

    /// New constructs a new KServiceGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New(name: []const u8) KServiceGroup {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KServiceGroup_new(name_str) };
    }

    /// New2 constructs a new KServiceGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` _fullpath: []const u8 `
    ///
    /// ` _relpath: []const u8 `
    ///
    pub fn New2(_fullpath: []const u8, _relpath: []const u8) KServiceGroup {
        const _fullpath_str = qtc.libqt_string{
            .len = _fullpath.len,
            .data = _fullpath.ptr,
        };
        const _relpath_str = qtc.libqt_string{
            .len = _relpath.len,
            .data = _relpath.ptr,
        };
        return .{ .ptr = qtc.KServiceGroup_new2(_fullpath_str, _relpath_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#relPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RelPath(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_RelPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.RelPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#caption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Caption(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_Caption(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.Caption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#comment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Comment(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_Comment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.Comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn ChildCount(self: KServiceGroup) i32 {
        return qtc.KServiceGroup_ChildCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#noDisplay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn NoDisplay(self: KServiceGroup) bool {
        return qtc.KServiceGroup_NoDisplay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#showEmptyMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn ShowEmptyMenu(self: KServiceGroup) bool {
        return qtc.KServiceGroup_ShowEmptyMenu(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setShowEmptyMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` b: bool `
    ///
    pub fn SetShowEmptyMenu(self: KServiceGroup, b: bool) void {
        qtc.KServiceGroup_SetShowEmptyMenu(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#showInlineHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn ShowInlineHeader(self: KServiceGroup) bool {
        return qtc.KServiceGroup_ShowInlineHeader(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setShowInlineHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` _b: bool `
    ///
    pub fn SetShowInlineHeader(self: KServiceGroup, _b: bool) void {
        qtc.KServiceGroup_SetShowInlineHeader(@ptrCast(self.ptr), _b);
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#inlineAlias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn InlineAlias(self: KServiceGroup) bool {
        return qtc.KServiceGroup_InlineAlias(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setInlineAlias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` _b: bool `
    ///
    pub fn SetInlineAlias(self: KServiceGroup, _b: bool) void {
        qtc.KServiceGroup_SetInlineAlias(@ptrCast(self.ptr), _b);
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#allowInline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn AllowInline(self: KServiceGroup) bool {
        return qtc.KServiceGroup_AllowInline(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setAllowInline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` _b: bool `
    ///
    pub fn SetAllowInline(self: KServiceGroup, _b: bool) void {
        qtc.KServiceGroup_SetAllowInline(@ptrCast(self.ptr), _b);
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#inlineValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn InlineValue(self: KServiceGroup) i32 {
        return qtc.KServiceGroup_InlineValue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setInlineValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` _val: i32 `
    ///
    pub fn SetInlineValue(self: KServiceGroup, _val: i32) void {
        qtc.KServiceGroup_SetInlineValue(@ptrCast(self.ptr), @bitCast(_val));
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#suppressGenericNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuppressGenericNames(self: KServiceGroup, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KServiceGroup_SuppressGenericNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` layout: []const []const u8 `
    ///
    pub fn SetLayoutInfo(self: KServiceGroup, allocator: std.mem.Allocator, layout: []const []const u8) void {
        const layout_arr = allocator.alloc(qtc.libqt_string, layout.len) catch @panic("kservicegroup.SetLayoutInfo: Memory allocation failed");
        defer allocator.free(layout_arr);
        for (layout, 0..layout.len) |item, i|
            layout_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const layout_list = qtc.libqt_list{
            .len = layout.len,
            .data = layout_arr.ptr,
        };
        qtc.KServiceGroup_SetLayoutInfo(@ptrCast(self.ptr), layout_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#layoutInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LayoutInfo(self: KServiceGroup, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KServiceGroup_LayoutInfo(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BaseGroupName(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_BaseGroupName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservicegroup.BaseGroupName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#directoryEntryPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DirectoryEntryPath(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_DirectoryEntryPath(@ptrCast(self.ptr));
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
    /// ` self: KServiceGroup `
    ///
    /// ` t: ksycocatype_enums.KSycocaType `
    ///
    pub fn IsType(self: KServiceGroup, t: i32) bool {
        return qtc.KSycocaEntry_IsType(@ptrCast(self.ptr), @bitCast(t));
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#sycocaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ## Returns:
    ///
    /// ` ksycocatype_enums.KSycocaType `
    ///
    pub fn SycocaType(self: KServiceGroup) i32 {
        return qtc.KSycocaEntry_SycocaType(@ptrCast(self.ptr));
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_Name(@ptrCast(self.ptr));
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
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryPath(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_EntryPath(@ptrCast(self.ptr));
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
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StorageId(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_StorageId(@ptrCast(self.ptr));
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
    /// ` self: KServiceGroup `
    ///
    pub fn IsValid(self: KServiceGroup) bool {
        return qtc.KSycocaEntry_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn IsDeleted(self: KServiceGroup) bool {
        return qtc.KSycocaEntry_IsDeleted(@ptrCast(self.ptr));
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#setDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` deleted: bool `
    ///
    pub fn SetDeleted(self: KServiceGroup, deleted: bool) void {
        qtc.KSycocaEntry_SetDeleted(@ptrCast(self.ptr), deleted);
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn IsSeparator(self: KServiceGroup) bool {
        return qtc.KSycocaEntry_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#dtor.KServiceGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn Delete(self: KServiceGroup) void {
        qtc.KServiceGroup_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kservicegroup.html#public-types)
pub const enums = struct {
    pub const EntriesOption = enum(i32) {
        pub const NoOptions: i32 = 0;
        pub const SortEntries: i32 = 1;
        pub const ExcludeNoDisplay: i32 = 2;
        pub const AllowSeparators: i32 = 4;
        pub const SortByGenericName: i32 = 8;
    };
};
