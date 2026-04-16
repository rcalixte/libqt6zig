const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KACL = @import("libqt6").KACL;
const KIO__UDSEntry = @import("libqt6").KIO__UDSEntry;
const QDateTime = @import("libqt6").QDateTime;
const QMimeType = @import("libqt6").QMimeType;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const kfileitem_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfileitem.html)
pub const KFileItem = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfileitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileItem,

    pub const _is_KFileItem = {};

    /// New constructs a new KFileItem object.
    ///
    pub fn New() KFileItem {
        return .{ .ptr = qtc.KFileItem_new() };
    }

    /// New2 constructs a new KFileItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` entry: KIO__UDSEntry `
    ///
    /// ` itemOrDirUrl: QUrl `
    ///
    pub fn New2(entry: anytype, itemOrDirUrl: anytype) KFileItem {
        comptime _ = @TypeOf(entry)._is_KIO__UDSEntry;
        comptime _ = @TypeOf(itemOrDirUrl)._is_QUrl;
        return .{ .ptr = qtc.KFileItem_new2(@ptrCast(entry.ptr), @ptrCast(itemOrDirUrl.ptr)) };
    }

    /// New3 constructs a new KFileItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn New3(url: anytype) KFileItem {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KFileItem_new3(@ptrCast(url.ptr)) };
    }

    /// New4 constructs a new KFileItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    /// ` mimeTypeDetermination: kfileitem_enums.MimeTypeDetermination `
    ///
    pub fn New4(url: anytype, mimeTypeDetermination: i32) KFileItem {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KFileItem_new4(@ptrCast(url.ptr), @bitCast(mimeTypeDetermination)) };
    }

    /// New5 constructs a new KFileItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KFileItem `
    ///
    pub fn New5(param1: anytype) KFileItem {
        comptime _ = @TypeOf(param1)._is_KFileItem;
        return .{ .ptr = qtc.KFileItem_new5(@ptrCast(param1.ptr)) };
    }

    /// New6 constructs a new KFileItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` entry: KIO__UDSEntry `
    ///
    /// ` itemOrDirUrl: QUrl `
    ///
    /// ` delayedMimeTypes: bool `
    ///
    pub fn New6(entry: anytype, itemOrDirUrl: anytype, delayedMimeTypes: bool) KFileItem {
        comptime _ = @TypeOf(entry)._is_KIO__UDSEntry;
        comptime _ = @TypeOf(itemOrDirUrl)._is_QUrl;
        return .{ .ptr = qtc.KFileItem_new6(@ptrCast(entry.ptr), @ptrCast(itemOrDirUrl.ptr), delayedMimeTypes) };
    }

    /// New7 constructs a new KFileItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` entry: KIO__UDSEntry `
    ///
    /// ` itemOrDirUrl: QUrl `
    ///
    /// ` delayedMimeTypes: bool `
    ///
    /// ` urlIsDirectory: bool `
    ///
    pub fn New7(entry: anytype, itemOrDirUrl: anytype, delayedMimeTypes: bool, urlIsDirectory: bool) KFileItem {
        comptime _ = @TypeOf(entry)._is_KIO__UDSEntry;
        comptime _ = @TypeOf(itemOrDirUrl)._is_QUrl;
        return .{ .ptr = qtc.KFileItem_new7(@ptrCast(entry.ptr), @ptrCast(itemOrDirUrl.ptr), delayedMimeTypes, urlIsDirectory) };
    }

    /// New8 constructs a new KFileItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn New8(url: anytype, mimeType: []const u8) KFileItem {
        comptime _ = @TypeOf(url)._is_QUrl;
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return .{ .ptr = qtc.KFileItem_new8(@ptrCast(url.ptr), mimeType_str) };
    }

    /// New9 constructs a new KFileItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    /// ` mimeType: []const u8 `
    ///
    /// ` mode: u32 `
    ///
    pub fn New9(url: anytype, mimeType: []const u8, mode: u32) KFileItem {
        comptime _ = @TypeOf(url)._is_QUrl;
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return .{ .ptr = qtc.KFileItem_new9(@ptrCast(url.ptr), mimeType_str, mode) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` param1: KFileItem `
    ///
    pub fn OperatorAssign(self: KFileItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KFileItem;
        qtc.KFileItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#refresh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn Refresh(self: KFileItem) void {
        qtc.KFileItem_Refresh(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#refreshMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn RefreshMimeType(self: KFileItem) void {
        qtc.KFileItem_RefreshMimeType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#setDelayedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` b: bool `
    ///
    pub fn SetDelayedMimeTypes(self: KFileItem, b: bool) void {
        qtc.KFileItem_SetDelayedMimeTypes(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn Url(self: KFileItem) QUrl {
        return .{ .ptr = qtc.KFileItem_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: KFileItem, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KFileItem_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#setLocalPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetLocalPath(self: KFileItem, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KFileItem_SetLocalPath(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: KFileItem, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KFileItem_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#permissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn Permissions(self: KFileItem) u32 {
        return @bitCast(qtc.KFileItem_Permissions(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#permissionsString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PermissionsString(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_PermissionsString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.PermissionsString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#hasExtendedACL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn HasExtendedACL(self: KFileItem) bool {
        return qtc.KFileItem_HasExtendedACL(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#ACL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn ACL(self: KFileItem) KACL {
        return .{ .ptr = qtc.KFileItem_ACL(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#defaultACL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn DefaultACL(self: KFileItem) KACL {
        return .{ .ptr = qtc.KFileItem_DefaultACL(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn Mode(self: KFileItem) u32 {
        return @bitCast(qtc.KFileItem_Mode(@ptrCast(self.ptr)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#userId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn UserId(self: KFileItem) i32 {
        return qtc.KFileItem_UserId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#groupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn GroupId(self: KFileItem) i32 {
        return qtc.KFileItem_GroupId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsLink(self: KFileItem) bool {
        return qtc.KFileItem_IsLink(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsDir(self: KFileItem) bool {
        return qtc.KFileItem_IsDir(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsFile(self: KFileItem) bool {
        return qtc.KFileItem_IsFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsReadable(self: KFileItem) bool {
        return qtc.KFileItem_IsReadable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsWritable(self: KFileItem) bool {
        return qtc.KFileItem_IsWritable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsHidden(self: KFileItem) bool {
        return qtc.KFileItem_IsHidden(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isSlow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsSlow(self: KFileItem) bool {
        return qtc.KFileItem_IsSlow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isDesktopFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsDesktopFile(self: KFileItem) bool {
        return qtc.KFileItem_IsDesktopFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#linkDest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LinkDest(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_LinkDest(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.LinkDest: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#targetUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn TargetUrl(self: KFileItem) QUrl {
        return .{ .ptr = qtc.KFileItem_TargetUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#localPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalPath(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_LocalPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.LocalPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn Size(self: KFileItem) usize {
        return qtc.KFileItem_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#recursiveSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn RecursiveSize(self: KFileItem) usize {
        return qtc.KFileItem_RecursiveSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#time)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` which: kfileitem_enums.FileTimes `
    ///
    pub fn Time(self: KFileItem, which: i32) QDateTime {
        return .{ .ptr = qtc.KFileItem_Time(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#timeString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TimeString(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_TimeString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.TimeString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isLocalFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsLocalFile(self: KFileItem) bool {
        return qtc.KFileItem_IsLocalFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#mimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Mimetype(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_Mimetype(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.Mimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#determineMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn DetermineMimeType(self: KFileItem) QMimeType {
        return .{ .ptr = qtc.KFileItem_DetermineMimeType(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#currentMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn CurrentMimeType(self: KFileItem) QMimeType {
        return .{ .ptr = qtc.KFileItem_CurrentMimeType(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isFinalIconKnown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsFinalIconKnown(self: KFileItem) bool {
        return qtc.KFileItem_IsFinalIconKnown(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isMimeTypeKnown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsMimeTypeKnown(self: KFileItem) bool {
        return qtc.KFileItem_IsMimeTypeKnown(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#mimeComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeComment(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_MimeComment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.MimeComment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#overlays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Overlays(self: KFileItem, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileItem_Overlays(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kfileitem.Overlays: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfileitem.Overlays: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#comment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Comment(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_Comment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.Comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#getStatusBarInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetStatusBarInfo(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_GetStatusBarInfo(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.GetStatusBarInfo: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#entry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn Entry(self: KFileItem) KIO__UDSEntry {
        return .{ .ptr = qtc.KFileItem_Entry(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isRegularFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsRegularFile(self: KFileItem) bool {
        return qtc.KFileItem_IsRegularFile(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#suffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Suffix(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_Suffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.Suffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#cmp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` item: KFileItem `
    ///
    pub fn Cmp(self: KFileItem, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_KFileItem;
        return qtc.KFileItem_Cmp(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` other: KFileItem `
    ///
    pub fn OperatorEqual(self: KFileItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KFileItem;
        return qtc.KFileItem_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` other: KFileItem `
    ///
    pub fn OperatorNotEqual(self: KFileItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KFileItem;
        return qtc.KFileItem_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` other: KFileItem `
    ///
    pub fn OperatorLesser(self: KFileItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KFileItem;
        return qtc.KFileItem_OperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` other: QUrl `
    ///
    pub fn OperatorLesser2(self: KFileItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QUrl;
        return qtc.KFileItem_OperatorLesser2(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn ToQVariant(self: KFileItem) QVariant {
        return .{ .ptr = qtc.KFileItem_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#mostLocalUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn MostLocalUrl(self: KFileItem) QUrl {
        return .{ .ptr = qtc.KFileItem_MostLocalUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isMostLocalUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsMostLocalUrl(self: KFileItem) KFileItem__MostLocalUrlResult {
        return .{ .ptr = qtc.KFileItem_IsMostLocalUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsNull(self: KFileItem) bool {
        return qtc.KFileItem_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn Exists(self: KFileItem) bool {
        return qtc.KFileItem_Exists(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isExecutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn IsExecutable(self: KFileItem) bool {
        return qtc.KFileItem_IsExecutable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#timeString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` which: kfileitem_enums.FileTimes `
    ///
    pub fn TimeString1(self: KFileItem, allocator: std.mem.Allocator, which: i32) []const u8 {
        var _str = qtc.KFileItem_TimeString1(@ptrCast(self.ptr), @bitCast(which));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.TimeString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lowerCase: bool `
    ///
    pub fn Name1(self: KFileItem, allocator: std.mem.Allocator, lowerCase: bool) []const u8 {
        var _str = qtc.KFileItem_Name1(@ptrCast(self.ptr), lowerCase);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.Name1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#mostLocalUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` local: *bool `
    ///
    pub fn MostLocalUrl1(self: KFileItem, local: *bool) QUrl {
        return .{ .ptr = qtc.KFileItem_MostLocalUrl1(@ptrCast(self.ptr), @ptrCast(local)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#dtor.KFileItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileItem `
    ///
    pub fn Delete(self: KFileItem) void {
        qtc.KFileItem_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable QList<KFileItem>

/// ### [Upstream resources](https://api.kde.org/kfileitemlist.html)
pub const KFileItemList = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfileitemlist.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileItemList,

    pub const _is_KFileItemList = {};

    /// New constructs a new KFileItemList object.
    ///
    pub fn New() KFileItemList {
        return .{ .ptr = qtc.KFileItemList_new() };
    }

    /// New2 constructs a new KFileItemList object.
    ///
    /// ## Parameter(s):
    ///
    /// ` items: []KFileItem `
    ///
    pub fn New2(items: []KFileItem) KFileItemList {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return .{ .ptr = qtc.KFileItemList_new2(items_list) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlist.html#findByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemList `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn FindByName(self: KFileItemList, fileName: []const u8) KFileItem {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.KFileItemList_FindByName(@ptrCast(self.ptr), fileName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlist.html#findByUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemList `
    ///
    /// ` url: QUrl `
    ///
    pub fn FindByUrl(self: KFileItemList, url: anytype) KFileItem {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KFileItemList_FindByUrl(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlist.html#urlList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemList `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UrlList(self: KFileItemList, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KFileItemList_UrlList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("kfileitemlist.UrlList: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitemlist.html#targetUrlList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemList `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TargetUrlList(self: KFileItemList, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KFileItemList_TargetUrlList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("kfileitemlist.TargetUrlList: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlist.html#dtor.KFileItemList)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileItemList `
    ///
    pub fn Delete(self: KFileItemList) void {
        qtc.KFileItemList_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html)
pub const KFileItem__MostLocalUrlResult = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFileItem__MostLocalUrlResult,

    pub const _is_KFileItem__MostLocalUrlResult = {};

    /// New constructs a new KFileItem::MostLocalUrlResult object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KFileItem__MostLocalUrlResult `
    ///
    pub fn New(param1: anytype) KFileItem__MostLocalUrlResult {
        comptime _ = @TypeOf(param1)._is_KFileItem__MostLocalUrlResult;
        return .{ .ptr = qtc.KFileItem__MostLocalUrlResult_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#url-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem__MostLocalUrlResult `
    ///
    pub fn Url(self: KFileItem__MostLocalUrlResult) QUrl {
        return .{ .ptr = qtc.KFileItem__MostLocalUrlResult_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#url-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem__MostLocalUrlResult `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: KFileItem__MostLocalUrlResult, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KFileItem__MostLocalUrlResult_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#local-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem__MostLocalUrlResult `
    ///
    pub fn Local(self: KFileItem__MostLocalUrlResult) bool {
        return qtc.KFileItem__MostLocalUrlResult_Local(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#local-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem__MostLocalUrlResult `
    ///
    /// ` local: bool `
    ///
    pub fn SetLocal(self: KFileItem__MostLocalUrlResult, local: bool) void {
        qtc.KFileItem__MostLocalUrlResult_SetLocal(@ptrCast(self.ptr), local);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem__MostLocalUrlResult `
    ///
    /// ` param1: KFileItem__MostLocalUrlResult `
    ///
    pub fn OperatorAssign(self: KFileItem__MostLocalUrlResult, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KFileItem__MostLocalUrlResult;
        qtc.KFileItem__MostLocalUrlResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileItem__MostLocalUrlResult `
    ///
    pub fn Delete(self: KFileItem__MostLocalUrlResult) void {
        qtc.KFileItem__MostLocalUrlResult_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfileitem.html#public-types)
pub const enums = struct {
    pub const KFileItem = enum(i32) {
        pub const Unknown: i32 = -1;
    };

    pub const FileTimes = enum(i32) {
        pub const ModificationTime: i32 = 0;
        pub const AccessTime: i32 = 1;
        pub const CreationTime: i32 = 2;
    };

    pub const MimeTypeDetermination = enum(i32) {
        pub const NormalMimeTypeDetermination: i32 = 0;
        pub const SkipMimeTypeFromContent: i32 = 1;
    };
};
