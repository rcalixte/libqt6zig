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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KServiceGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new(_name: []const u8) KServiceGroup {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KServiceGroup_new(name_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KServiceGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _fullpath: []const u8 `
    ///
    /// ` _relpath: []const u8 `
    ///
    pub fn new2(_fullpath: []const u8, _relpath: []const u8) KServiceGroup {
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

    /// ### DEPRECATED: Use `relPath` instead
    ///
    pub const RelPath = relPath;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#relPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn relPath(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_RelPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KServiceGroup.relPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `caption` instead
    ///
    pub const Caption = caption;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#caption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn caption(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_Caption(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KServiceGroup.caption: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn icon(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KServiceGroup.icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `comment` instead
    ///
    pub const Comment = comment;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#comment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn comment(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_Comment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KServiceGroup.comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `childCount` instead
    ///
    pub const ChildCount = childCount;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn childCount(self: KServiceGroup) i32 {
        return qtc.KServiceGroup_ChildCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `noDisplay` instead
    ///
    pub const NoDisplay = noDisplay;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#noDisplay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn noDisplay(self: KServiceGroup) bool {
        return qtc.KServiceGroup_NoDisplay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showEmptyMenu` instead
    ///
    pub const ShowEmptyMenu = showEmptyMenu;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#showEmptyMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn showEmptyMenu(self: KServiceGroup) bool {
        return qtc.KServiceGroup_ShowEmptyMenu(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShowEmptyMenu` instead
    ///
    pub const SetShowEmptyMenu = setShowEmptyMenu;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setShowEmptyMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` b: bool `
    ///
    pub fn setShowEmptyMenu(self: KServiceGroup, b: bool) void {
        qtc.KServiceGroup_SetShowEmptyMenu(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `showInlineHeader` instead
    ///
    pub const ShowInlineHeader = showInlineHeader;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#showInlineHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn showInlineHeader(self: KServiceGroup) bool {
        return qtc.KServiceGroup_ShowInlineHeader(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShowInlineHeader` instead
    ///
    pub const SetShowInlineHeader = setShowInlineHeader;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setShowInlineHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` _b: bool `
    ///
    pub fn setShowInlineHeader(self: KServiceGroup, _b: bool) void {
        qtc.KServiceGroup_SetShowInlineHeader(@ptrCast(self.ptr), _b);
    }

    /// ### DEPRECATED: Use `inlineAlias` instead
    ///
    pub const InlineAlias = inlineAlias;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#inlineAlias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn inlineAlias(self: KServiceGroup) bool {
        return qtc.KServiceGroup_InlineAlias(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInlineAlias` instead
    ///
    pub const SetInlineAlias = setInlineAlias;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setInlineAlias)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` _b: bool `
    ///
    pub fn setInlineAlias(self: KServiceGroup, _b: bool) void {
        qtc.KServiceGroup_SetInlineAlias(@ptrCast(self.ptr), _b);
    }

    /// ### DEPRECATED: Use `allowInline` instead
    ///
    pub const AllowInline = allowInline;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#allowInline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn allowInline(self: KServiceGroup) bool {
        return qtc.KServiceGroup_AllowInline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAllowInline` instead
    ///
    pub const SetAllowInline = setAllowInline;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setAllowInline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` _b: bool `
    ///
    pub fn setAllowInline(self: KServiceGroup, _b: bool) void {
        qtc.KServiceGroup_SetAllowInline(@ptrCast(self.ptr), _b);
    }

    /// ### DEPRECATED: Use `inlineValue` instead
    ///
    pub const InlineValue = inlineValue;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#inlineValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn inlineValue(self: KServiceGroup) i32 {
        return qtc.KServiceGroup_InlineValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInlineValue` instead
    ///
    pub const SetInlineValue = setInlineValue;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#setInlineValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` _val: i32 `
    ///
    pub fn setInlineValue(self: KServiceGroup, _val: i32) void {
        qtc.KServiceGroup_SetInlineValue(@ptrCast(self.ptr), @bitCast(_val));
    }

    /// ### DEPRECATED: Use `suppressGenericNames` instead
    ///
    pub const SuppressGenericNames = suppressGenericNames;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#suppressGenericNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn suppressGenericNames(self: KServiceGroup, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KServiceGroup_SuppressGenericNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KServiceGroup.suppressGenericNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KServiceGroup.suppressGenericNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setLayoutInfo` instead
    ///
    pub const SetLayoutInfo = setLayoutInfo;

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
    pub fn setLayoutInfo(self: KServiceGroup, allocator: std.mem.Allocator, layout: []const []const u8) void {
        const layout_arr = allocator.alloc(qtc.libqt_string, layout.len) catch @panic("KServiceGroup.setLayoutInfo: Memory allocation failed");
        defer allocator.free(layout_arr);
        for (layout, 0..layout.len) |str_item, i|
            layout_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const layout_list = qtc.libqt_list{
            .len = layout.len,
            .data = layout_arr.ptr,
        };
        qtc.KServiceGroup_SetLayoutInfo(@ptrCast(self.ptr), layout_list);
    }

    /// ### DEPRECATED: Use `layoutInfo` instead
    ///
    pub const LayoutInfo = layoutInfo;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#layoutInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn layoutInfo(self: KServiceGroup, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KServiceGroup_LayoutInfo(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KServiceGroup.layoutInfo: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KServiceGroup.layoutInfo: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `baseGroupName` instead
    ///
    pub const BaseGroupName = baseGroupName;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#baseGroupName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn baseGroupName(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_BaseGroupName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KServiceGroup.baseGroupName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `directoryEntryPath` instead
    ///
    pub const DirectoryEntryPath = directoryEntryPath;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#directoryEntryPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn directoryEntryPath(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KServiceGroup_DirectoryEntryPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KServiceGroup.directoryEntryPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isType` instead
    ///
    pub const IsType = isType;

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
    pub fn isType(self: KServiceGroup, t: i32) bool {
        return qtc.KSycocaEntry_IsType(@ptrCast(self.ptr), @bitCast(t));
    }

    /// ### DEPRECATED: Use `sycocaType` instead
    ///
    pub const SycocaType = sycocaType;

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
    pub fn sycocaType(self: KServiceGroup) i32 {
        return qtc.KSycocaEntry_SycocaType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

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
    pub fn name(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KServiceGroup.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `entryPath` instead
    ///
    pub const EntryPath = entryPath;

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
    pub fn entryPath(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_EntryPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KServiceGroup.entryPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `storageId` instead
    ///
    pub const StorageId = storageId;

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
    pub fn storageId(self: KServiceGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_StorageId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KServiceGroup.storageId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn isValid(self: KServiceGroup) bool {
        return qtc.KSycocaEntry_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDeleted` instead
    ///
    pub const IsDeleted = isDeleted;

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn isDeleted(self: KServiceGroup) bool {
        return qtc.KSycocaEntry_IsDeleted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDeleted` instead
    ///
    pub const SetDeleted = setDeleted;

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
    pub fn setDeleted(self: KServiceGroup, deleted: bool) void {
        qtc.KSycocaEntry_SetDeleted(@ptrCast(self.ptr), deleted);
    }

    /// ### DEPRECATED: Use `isSeparator` instead
    ///
    pub const IsSeparator = isSeparator;

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn isSeparator(self: KServiceGroup) bool {
        return qtc.KSycocaEntry_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kservicegroup.html#dtor.KServiceGroup)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KServiceGroup `
    ///
    pub fn delete(self: KServiceGroup) void {
        qtc.KServiceGroup_Delete(@ptrCast(self.ptr));
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
