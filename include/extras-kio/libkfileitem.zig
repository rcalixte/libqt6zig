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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFileItem object in C++ memory
    ///
    pub fn new() KFileItem {
        return .{ .ptr = qtc.KFileItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFileItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _entry: KIO__UDSEntry `
    ///
    /// ` itemOrDirUrl: QUrl `
    ///
    pub fn new2(_entry: anytype, itemOrDirUrl: anytype) KFileItem {
        comptime _ = @TypeOf(_entry)._is_KIO__UDSEntry;
        comptime _ = @TypeOf(itemOrDirUrl)._is_QUrl;
        return .{ .ptr = qtc.KFileItem_new2(@ptrCast(_entry.ptr), @ptrCast(itemOrDirUrl.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KFileItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: QUrl `
    ///
    pub fn new3(_url: anytype) KFileItem {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.KFileItem_new3(@ptrCast(_url.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KFileItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: QUrl `
    ///
    /// ` mimeTypeDetermination: kfileitem_enums.MimeTypeDetermination `
    ///
    pub fn new4(_url: anytype, mimeTypeDetermination: i32) KFileItem {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.KFileItem_new4(@ptrCast(_url.ptr), @bitCast(mimeTypeDetermination)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KFileItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KFileItem `
    ///
    pub fn new5(param1: anytype) KFileItem {
        comptime _ = @TypeOf(param1)._is_KFileItem;
        return .{ .ptr = qtc.KFileItem_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new KFileItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _entry: KIO__UDSEntry `
    ///
    /// ` itemOrDirUrl: QUrl `
    ///
    /// ` delayedMimeTypes: bool `
    ///
    pub fn new6(_entry: anytype, itemOrDirUrl: anytype, delayedMimeTypes: bool) KFileItem {
        comptime _ = @TypeOf(_entry)._is_KIO__UDSEntry;
        comptime _ = @TypeOf(itemOrDirUrl)._is_QUrl;
        return .{ .ptr = qtc.KFileItem_new6(@ptrCast(_entry.ptr), @ptrCast(itemOrDirUrl.ptr), delayedMimeTypes) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new KFileItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _entry: KIO__UDSEntry `
    ///
    /// ` itemOrDirUrl: QUrl `
    ///
    /// ` delayedMimeTypes: bool `
    ///
    /// ` urlIsDirectory: bool `
    ///
    pub fn new7(_entry: anytype, itemOrDirUrl: anytype, delayedMimeTypes: bool, urlIsDirectory: bool) KFileItem {
        comptime _ = @TypeOf(_entry)._is_KIO__UDSEntry;
        comptime _ = @TypeOf(itemOrDirUrl)._is_QUrl;
        return .{ .ptr = qtc.KFileItem_new7(@ptrCast(_entry.ptr), @ptrCast(itemOrDirUrl.ptr), delayedMimeTypes, urlIsDirectory) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new KFileItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: QUrl `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn new8(_url: anytype, mimeType: []const u8) KFileItem {
        comptime _ = @TypeOf(_url)._is_QUrl;
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return .{ .ptr = qtc.KFileItem_new8(@ptrCast(_url.ptr), mimeType_str) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new KFileItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: QUrl `
    ///
    /// ` mimeType: []const u8 `
    ///
    /// ` _mode: u32 `
    ///
    pub fn new9(_url: anytype, mimeType: []const u8, _mode: u32) KFileItem {
        comptime _ = @TypeOf(_url)._is_QUrl;
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return .{ .ptr = qtc.KFileItem_new9(@ptrCast(_url.ptr), mimeType_str, _mode) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` param1: KFileItem `
    ///
    pub fn operatorAssign(self: KFileItem, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KFileItem;
        qtc.KFileItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `refresh` instead
    ///
    pub const Refresh = refresh;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#refresh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn refresh(self: KFileItem) void {
        qtc.KFileItem_Refresh(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `refreshMimeType` instead
    ///
    pub const RefreshMimeType = refreshMimeType;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#refreshMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn refreshMimeType(self: KFileItem) void {
        qtc.KFileItem_RefreshMimeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDelayedMimeTypes` instead
    ///
    pub const SetDelayedMimeTypes = setDelayedMimeTypes;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#setDelayedMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` b: bool `
    ///
    pub fn setDelayedMimeTypes(self: KFileItem, b: bool) void {
        qtc.KFileItem_SetDelayedMimeTypes(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn url(self: KFileItem) QUrl {
        return .{ .ptr = qtc.KFileItem_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: KFileItem, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KFileItem_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `setLocalPath` instead
    ///
    pub const SetLocalPath = setLocalPath;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#setLocalPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setLocalPath(self: KFileItem, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KFileItem_SetLocalPath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KFileItem, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KFileItem_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `permissions` instead
    ///
    pub const Permissions = permissions;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#permissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn permissions(self: KFileItem) u32 {
        return @bitCast(qtc.KFileItem_Permissions(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `permissionsString` instead
    ///
    pub const PermissionsString = permissionsString;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#permissionsString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn permissionsString(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_PermissionsString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.permissionsString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasExtendedACL` instead
    ///
    pub const HasExtendedACL = hasExtendedACL;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#hasExtendedACL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn hasExtendedACL(self: KFileItem) bool {
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

    /// ### DEPRECATED: Use `defaultACL` instead
    ///
    pub const DefaultACL = defaultACL;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#defaultACL)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn defaultACL(self: KFileItem) KACL {
        return .{ .ptr = qtc.KFileItem_DefaultACL(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mode` instead
    ///
    pub const Mode = mode;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn mode(self: KFileItem) u32 {
        return @bitCast(qtc.KFileItem_Mode(@ptrCast(self.ptr)));
    }

    /// ### DEPRECATED: Use `userId` instead
    ///
    pub const UserId = userId;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#userId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn userId(self: KFileItem) i32 {
        return qtc.KFileItem_UserId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `groupId` instead
    ///
    pub const GroupId = groupId;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#groupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn groupId(self: KFileItem) i32 {
        return qtc.KFileItem_GroupId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `user` instead
    ///
    pub const User = user;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn user(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.user: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn group(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isLink` instead
    ///
    pub const IsLink = isLink;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isLink(self: KFileItem) bool {
        return qtc.KFileItem_IsLink(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDir` instead
    ///
    pub const IsDir = isDir;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isDir(self: KFileItem) bool {
        return qtc.KFileItem_IsDir(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFile` instead
    ///
    pub const IsFile = isFile;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isFile(self: KFileItem) bool {
        return qtc.KFileItem_IsFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadable` instead
    ///
    pub const IsReadable = isReadable;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isReadable(self: KFileItem) bool {
        return qtc.KFileItem_IsReadable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWritable` instead
    ///
    pub const IsWritable = isWritable;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isWritable(self: KFileItem) bool {
        return qtc.KFileItem_IsWritable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isHidden` instead
    ///
    pub const IsHidden = isHidden;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isHidden(self: KFileItem) bool {
        return qtc.KFileItem_IsHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSlow` instead
    ///
    pub const IsSlow = isSlow;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isSlow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isSlow(self: KFileItem) bool {
        return qtc.KFileItem_IsSlow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDesktopFile` instead
    ///
    pub const IsDesktopFile = isDesktopFile;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isDesktopFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isDesktopFile(self: KFileItem) bool {
        return qtc.KFileItem_IsDesktopFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `linkDest` instead
    ///
    pub const LinkDest = linkDest;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#linkDest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn linkDest(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_LinkDest(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.linkDest: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `targetUrl` instead
    ///
    pub const TargetUrl = targetUrl;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#targetUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn targetUrl(self: KFileItem) QUrl {
        return .{ .ptr = qtc.KFileItem_TargetUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `localPath` instead
    ///
    pub const LocalPath = localPath;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#localPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn localPath(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_LocalPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.localPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn size(self: KFileItem) usize {
        return qtc.KFileItem_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `recursiveSize` instead
    ///
    pub const RecursiveSize = recursiveSize;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#recursiveSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn recursiveSize(self: KFileItem) usize {
        return qtc.KFileItem_RecursiveSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `time` instead
    ///
    pub const Time = time;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#time)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` which: kfileitem_enums.FileTimes `
    ///
    pub fn time(self: KFileItem, which: i32) QDateTime {
        return .{ .ptr = qtc.KFileItem_Time(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// ### DEPRECATED: Use `timeString` instead
    ///
    pub const TimeString = timeString;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#timeString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn timeString(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_TimeString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.timeString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isLocalFile` instead
    ///
    pub const IsLocalFile = isLocalFile;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isLocalFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isLocalFile(self: KFileItem) bool {
        return qtc.KFileItem_IsLocalFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `mimetype` instead
    ///
    pub const Mimetype = mimetype;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#mimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimetype(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_Mimetype(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.mimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `determineMimeType` instead
    ///
    pub const DetermineMimeType = determineMimeType;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#determineMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn determineMimeType(self: KFileItem) QMimeType {
        return .{ .ptr = qtc.KFileItem_DetermineMimeType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentMimeType` instead
    ///
    pub const CurrentMimeType = currentMimeType;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#currentMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn currentMimeType(self: KFileItem) QMimeType {
        return .{ .ptr = qtc.KFileItem_CurrentMimeType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isFinalIconKnown` instead
    ///
    pub const IsFinalIconKnown = isFinalIconKnown;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isFinalIconKnown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isFinalIconKnown(self: KFileItem) bool {
        return qtc.KFileItem_IsFinalIconKnown(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMimeTypeKnown` instead
    ///
    pub const IsMimeTypeKnown = isMimeTypeKnown;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isMimeTypeKnown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isMimeTypeKnown(self: KFileItem) bool {
        return qtc.KFileItem_IsMimeTypeKnown(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mimeComment` instead
    ///
    pub const MimeComment = mimeComment;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#mimeComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeComment(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_MimeComment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.mimeComment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#iconName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `overlays` instead
    ///
    pub const Overlays = overlays;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#overlays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn overlays(self: KFileItem, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFileItem_Overlays(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KFileItem.overlays: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KFileItem.overlays: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `comment` instead
    ///
    pub const Comment = comment;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#comment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn comment(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_Comment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `getStatusBarInfo` instead
    ///
    pub const GetStatusBarInfo = getStatusBarInfo;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#getStatusBarInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn getStatusBarInfo(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_GetStatusBarInfo(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.getStatusBarInfo: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `entry` instead
    ///
    pub const Entry = entry;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#entry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn entry(self: KFileItem) KIO__UDSEntry {
        return .{ .ptr = qtc.KFileItem_Entry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isRegularFile` instead
    ///
    pub const IsRegularFile = isRegularFile;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isRegularFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isRegularFile(self: KFileItem) bool {
        return qtc.KFileItem_IsRegularFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `suffix` instead
    ///
    pub const Suffix = suffix;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#suffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn suffix(self: KFileItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFileItem_Suffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.suffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `cmp` instead
    ///
    pub const Cmp = cmp;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#cmp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` item: KFileItem `
    ///
    pub fn cmp(self: KFileItem, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_KFileItem;
        return qtc.KFileItem_Cmp(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` other: KFileItem `
    ///
    pub fn operatorEqual(self: KFileItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KFileItem;
        return qtc.KFileItem_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` other: KFileItem `
    ///
    pub fn operatorNotEqual(self: KFileItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KFileItem;
        return qtc.KFileItem_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesser` instead
    ///
    pub const OperatorLesser = operatorLesser;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` other: KFileItem `
    ///
    pub fn operatorLesser(self: KFileItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KFileItem;
        return qtc.KFileItem_OperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesser2` instead
    ///
    pub const OperatorLesser2 = operatorLesser2;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` other: QUrl `
    ///
    pub fn operatorLesser2(self: KFileItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QUrl;
        return qtc.KFileItem_OperatorLesser2(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn toQVariant(self: KFileItem) QVariant {
        return .{ .ptr = qtc.KFileItem_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mostLocalUrl` instead
    ///
    pub const MostLocalUrl = mostLocalUrl;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#mostLocalUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn mostLocalUrl(self: KFileItem) QUrl {
        return .{ .ptr = qtc.KFileItem_MostLocalUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isMostLocalUrl` instead
    ///
    pub const IsMostLocalUrl = isMostLocalUrl;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isMostLocalUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isMostLocalUrl(self: KFileItem) KFileItem__MostLocalUrlResult {
        return .{ .ptr = qtc.KFileItem_IsMostLocalUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isNull(self: KFileItem) bool {
        return qtc.KFileItem_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exists` instead
    ///
    pub const Exists = exists;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn exists(self: KFileItem) bool {
        return qtc.KFileItem_Exists(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isExecutable` instead
    ///
    pub const IsExecutable = isExecutable;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#isExecutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    pub fn isExecutable(self: KFileItem) bool {
        return qtc.KFileItem_IsExecutable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `timeString1` instead
    ///
    pub const TimeString1 = timeString1;

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
    pub fn timeString1(self: KFileItem, allocator: std.mem.Allocator, which: i32) []const u8 {
        var _str = qtc.KFileItem_TimeString1(@ptrCast(self.ptr), @bitCast(which));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.timeString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name1` instead
    ///
    pub const Name1 = name1;

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
    pub fn name1(self: KFileItem, allocator: std.mem.Allocator, lowerCase: bool) []const u8 {
        var _str = qtc.KFileItem_Name1(@ptrCast(self.ptr), lowerCase);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFileItem.name1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `mostLocalUrl1` instead
    ///
    pub const MostLocalUrl1 = mostLocalUrl1;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#mostLocalUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem `
    ///
    /// ` local: *bool `
    ///
    pub fn mostLocalUrl1(self: KFileItem, local: *bool) QUrl {
        return .{ .ptr = qtc.KFileItem_MostLocalUrl1(@ptrCast(self.ptr), @ptrCast(local)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kfileitem.html#dtor.KFileItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileItem `
    ///
    pub fn delete(self: KFileItem) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFileItemList object in C++ memory
    ///
    pub fn new() KFileItemList {
        return .{ .ptr = qtc.KFileItemList_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFileItemList object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` items: []KFileItem `
    ///
    pub fn new2(items: []KFileItem) KFileItemList {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return .{ .ptr = qtc.KFileItemList_new2(items_list) };
    }

    /// ### DEPRECATED: Use `findByName` instead
    ///
    pub const FindByName = findByName;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlist.html#findByName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemList `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn findByName(self: KFileItemList, fileName: []const u8) KFileItem {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.KFileItemList_FindByName(@ptrCast(self.ptr), fileName_str) };
    }

    /// ### DEPRECATED: Use `findByUrl` instead
    ///
    pub const FindByUrl = findByUrl;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlist.html#findByUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemList `
    ///
    /// ` _url: QUrl `
    ///
    pub fn findByUrl(self: KFileItemList, _url: anytype) KFileItem {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.KFileItemList_FindByUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr)) };
    }

    /// ### DEPRECATED: Use `urlList` instead
    ///
    pub const UrlList = urlList;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlist.html#urlList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemList `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn urlList(self: KFileItemList, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KFileItemList_UrlList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("KFileItemList.urlList: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `targetUrlList` instead
    ///
    pub const TargetUrlList = targetUrlList;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlist.html#targetUrlList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItemList `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn targetUrlList(self: KFileItemList, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KFileItemList_TargetUrlList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("KFileItemList.targetUrlList: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kfileitemlist.html#dtor.KFileItemList)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileItemList `
    ///
    pub fn delete(self: KFileItemList) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFileItem::MostLocalUrlResult object in C++ memory
    ///
    pub fn new() KFileItem__MostLocalUrlResult {
        return .{ .ptr = qtc.KFileItem__MostLocalUrlResult_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFileItem::MostLocalUrlResult object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KFileItem__MostLocalUrlResult `
    ///
    pub fn new2(param1: anytype) KFileItem__MostLocalUrlResult {
        comptime _ = @TypeOf(param1)._is_KFileItem__MostLocalUrlResult;
        return .{ .ptr = qtc.KFileItem__MostLocalUrlResult_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#url-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem__MostLocalUrlResult `
    ///
    pub fn url(self: KFileItem__MostLocalUrlResult) QUrl {
        return .{ .ptr = qtc.KFileItem__MostLocalUrlResult_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#url-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem__MostLocalUrlResult `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: KFileItem__MostLocalUrlResult, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KFileItem__MostLocalUrlResult_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `local` instead
    ///
    pub const Local = local;

    /// ### [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#local-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem__MostLocalUrlResult `
    ///
    pub fn local(self: KFileItem__MostLocalUrlResult) bool {
        return qtc.KFileItem__MostLocalUrlResult_Local(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocal` instead
    ///
    pub const SetLocal = setLocal;

    /// ### [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#local-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem__MostLocalUrlResult `
    ///
    /// ` _local: bool `
    ///
    pub fn setLocal(self: KFileItem__MostLocalUrlResult, _local: bool) void {
        qtc.KFileItem__MostLocalUrlResult_SetLocal(@ptrCast(self.ptr), _local);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kfileitem-mostlocalurlresult.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFileItem__MostLocalUrlResult `
    ///
    /// ` param1: KFileItem__MostLocalUrlResult `
    ///
    pub fn operatorAssign(self: KFileItem__MostLocalUrlResult, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KFileItem__MostLocalUrlResult;
        qtc.KFileItem__MostLocalUrlResult_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFileItem__MostLocalUrlResult `
    ///
    pub fn delete(self: KFileItem__MostLocalUrlResult) void {
        qtc.KFileItem__MostLocalUrlResult_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfileitem.html#public-types)
pub const enums = struct {
    pub const KFileItem = enum {
        pub const Unknown: i32 = -1;
    };

    pub const FileTimes = enum {
        pub const ModificationTime: i32 = 0;
        pub const AccessTime: i32 = 1;
        pub const CreationTime: i32 = 2;
    };

    pub const MimeTypeDetermination = enum {
        pub const NormalMimeTypeDetermination: i32 = 0;
        pub const SkipMimeTypeFromContent: i32 = 1;
    };
};
