const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kfileitem_enums = enums;
const std = @import("std");

/// https://api.kde.org/kfileitem.html
pub const kfileitem = struct {
    /// New constructs a new KFileItem object.
    ///
    ///
    pub fn New() QtC.KFileItem {
        return qtc.KFileItem_new();
    }

    /// New2 constructs a new KFileItem object.
    ///
    /// ``` entry: QtC.KIO__UDSEntry, itemOrDirUrl: QtC.QUrl ```
    pub fn New2(entry: ?*anyopaque, itemOrDirUrl: ?*anyopaque) QtC.KFileItem {
        return qtc.KFileItem_new2(@ptrCast(entry), @ptrCast(itemOrDirUrl));
    }

    /// New3 constructs a new KFileItem object.
    ///
    /// ``` url: QtC.QUrl ```
    pub fn New3(url: ?*anyopaque) QtC.KFileItem {
        return qtc.KFileItem_new3(@ptrCast(url));
    }

    /// New4 constructs a new KFileItem object.
    ///
    /// ``` url: QtC.QUrl, mimeTypeDetermination: kfileitem_enums.MimeTypeDetermination ```
    pub fn New4(url: ?*anyopaque, mimeTypeDetermination: i32) QtC.KFileItem {
        return qtc.KFileItem_new4(@ptrCast(url), @intCast(mimeTypeDetermination));
    }

    /// New5 constructs a new KFileItem object.
    ///
    /// ``` param1: QtC.KFileItem ```
    pub fn New5(param1: ?*anyopaque) QtC.KFileItem {
        return qtc.KFileItem_new5(@ptrCast(param1));
    }

    /// New6 constructs a new KFileItem object.
    ///
    /// ``` entry: QtC.KIO__UDSEntry, itemOrDirUrl: QtC.QUrl, delayedMimeTypes: bool ```
    pub fn New6(entry: ?*anyopaque, itemOrDirUrl: ?*anyopaque, delayedMimeTypes: bool) QtC.KFileItem {
        return qtc.KFileItem_new6(@ptrCast(entry), @ptrCast(itemOrDirUrl), delayedMimeTypes);
    }

    /// New7 constructs a new KFileItem object.
    ///
    /// ``` entry: QtC.KIO__UDSEntry, itemOrDirUrl: QtC.QUrl, delayedMimeTypes: bool, urlIsDirectory: bool ```
    pub fn New7(entry: ?*anyopaque, itemOrDirUrl: ?*anyopaque, delayedMimeTypes: bool, urlIsDirectory: bool) QtC.KFileItem {
        return qtc.KFileItem_new7(@ptrCast(entry), @ptrCast(itemOrDirUrl), delayedMimeTypes, urlIsDirectory);
    }

    /// New8 constructs a new KFileItem object.
    ///
    /// ``` url: QtC.QUrl, mimeType: []const u8 ```
    pub fn New8(url: ?*anyopaque, mimeType: []const u8) QtC.KFileItem {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };

        return qtc.KFileItem_new8(@ptrCast(url), mimeType_str);
    }

    /// New9 constructs a new KFileItem object.
    ///
    /// ``` url: QtC.QUrl, mimeType: []const u8, mode: u32 ```
    pub fn New9(url: ?*anyopaque, mimeType: []const u8, mode: u32) QtC.KFileItem {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };

        return qtc.KFileItem_new9(@ptrCast(url), mimeType_str, mode);
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#operator-eq)
    ///
    /// ``` self: QtC.KFileItem, param1: QtC.KFileItem ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KFileItem_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#refresh)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn Refresh(self: ?*anyopaque) void {
        qtc.KFileItem_Refresh(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#refreshMimeType)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn RefreshMimeType(self: ?*anyopaque) void {
        qtc.KFileItem_RefreshMimeType(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#setDelayedMimeTypes)
    ///
    /// ``` self: QtC.KFileItem, b: bool ```
    pub fn SetDelayedMimeTypes(self: ?*anyopaque, b: bool) void {
        qtc.KFileItem_SetDelayedMimeTypes(@ptrCast(self), b);
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#url)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.KFileItem_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#setUrl)
    ///
    /// ``` self: QtC.KFileItem, url: QtC.QUrl ```
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.KFileItem_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#setLocalPath)
    ///
    /// ``` self: QtC.KFileItem, path: []const u8 ```
    pub fn SetLocalPath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KFileItem_SetLocalPath(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#setName)
    ///
    /// ``` self: QtC.KFileItem, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KFileItem_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#permissions)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn Permissions(self: ?*anyopaque) u32 {
        return @intCast(qtc.KFileItem_Permissions(@ptrCast(self)));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#permissionsString)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn PermissionsString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_PermissionsString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.PermissionsString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#hasExtendedACL)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn HasExtendedACL(self: ?*anyopaque) bool {
        return qtc.KFileItem_HasExtendedACL(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#ACL)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn ACL(self: ?*anyopaque) QtC.KACL {
        return qtc.KFileItem_ACL(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#defaultACL)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn DefaultACL(self: ?*anyopaque) QtC.KACL {
        return qtc.KFileItem_DefaultACL(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#mode)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn Mode(self: ?*anyopaque) u32 {
        return @intCast(qtc.KFileItem_Mode(@ptrCast(self)));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#userId)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn UserId(self: ?*anyopaque) i32 {
        return qtc.KFileItem_UserId(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#groupId)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn GroupId(self: ?*anyopaque) i32 {
        return qtc.KFileItem_GroupId(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#user)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn User(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_User(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#group)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn Group(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_Group(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isLink)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsLink(self: ?*anyopaque) bool {
        return qtc.KFileItem_IsLink(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isDir)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsDir(self: ?*anyopaque) bool {
        return qtc.KFileItem_IsDir(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isFile)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsFile(self: ?*anyopaque) bool {
        return qtc.KFileItem_IsFile(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isReadable)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.KFileItem_IsReadable(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isWritable)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.KFileItem_IsWritable(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isHidden)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.KFileItem_IsHidden(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isSlow)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsSlow(self: ?*anyopaque) bool {
        return qtc.KFileItem_IsSlow(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isDesktopFile)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsDesktopFile(self: ?*anyopaque) bool {
        return qtc.KFileItem_IsDesktopFile(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#linkDest)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn LinkDest(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_LinkDest(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.LinkDest: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#targetUrl)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn TargetUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.KFileItem_TargetUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#localPath)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn LocalPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_LocalPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.LocalPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#size)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn Size(self: ?*anyopaque) u64 {
        return qtc.KFileItem_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#recursiveSize)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn RecursiveSize(self: ?*anyopaque) u64 {
        return qtc.KFileItem_RecursiveSize(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#time)
    ///
    /// ``` self: QtC.KFileItem, which: kfileitem_enums.FileTimes ```
    pub fn Time(self: ?*anyopaque, which: i32) QtC.QDateTime {
        return qtc.KFileItem_Time(@ptrCast(self), @intCast(which));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#timeString)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn TimeString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_TimeString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.TimeString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isLocalFile)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsLocalFile(self: ?*anyopaque) bool {
        return qtc.KFileItem_IsLocalFile(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#text)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#name)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#mimetype)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn Mimetype(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_Mimetype(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.Mimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#determineMimeType)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn DetermineMimeType(self: ?*anyopaque) QtC.QMimeType {
        return qtc.KFileItem_DetermineMimeType(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#currentMimeType)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn CurrentMimeType(self: ?*anyopaque) QtC.QMimeType {
        return qtc.KFileItem_CurrentMimeType(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isFinalIconKnown)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsFinalIconKnown(self: ?*anyopaque) bool {
        return qtc.KFileItem_IsFinalIconKnown(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isMimeTypeKnown)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsMimeTypeKnown(self: ?*anyopaque) bool {
        return qtc.KFileItem_IsMimeTypeKnown(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#mimeComment)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn MimeComment(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_MimeComment(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.MimeComment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#iconName)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#overlays)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn Overlays(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KFileItem_Overlays(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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

    /// [Qt documentation](https://api.kde.org/kfileitem.html#comment)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn Comment(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_Comment(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.Comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#getStatusBarInfo)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn GetStatusBarInfo(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_GetStatusBarInfo(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.GetStatusBarInfo: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#entry)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn Entry(self: ?*anyopaque) QtC.KIO__UDSEntry {
        return qtc.KFileItem_Entry(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isRegularFile)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsRegularFile(self: ?*anyopaque) bool {
        return qtc.KFileItem_IsRegularFile(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#suffix)
    ///
    /// ``` self: QtC.KFileItem, allocator: std.mem.Allocator ```
    pub fn Suffix(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_Suffix(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.Suffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#cmp)
    ///
    /// ``` self: QtC.KFileItem, item: QtC.KFileItem ```
    pub fn Cmp(self: ?*anyopaque, item: ?*anyopaque) bool {
        return qtc.KFileItem_Cmp(@ptrCast(self), @ptrCast(item));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KFileItem, other: QtC.KFileItem ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KFileItem_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#operator-not-eq)
    ///
    /// ``` self: QtC.KFileItem, other: QtC.KFileItem ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KFileItem_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#operator-lt)
    ///
    /// ``` self: QtC.KFileItem, other: QtC.KFileItem ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KFileItem_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#operator-lt)
    ///
    /// ``` self: QtC.KFileItem, other: QtC.QUrl ```
    pub fn OperatorLesser2(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KFileItem_OperatorLesser2(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#operator)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn ToQVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.KFileItem_ToQVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#mostLocalUrl)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn MostLocalUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.KFileItem_MostLocalUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isMostLocalUrl)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsMostLocalUrl(self: ?*anyopaque) QtC.KFileItem__MostLocalUrlResult {
        return qtc.KFileItem_IsMostLocalUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isNull)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.KFileItem_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#exists)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn Exists(self: ?*anyopaque) bool {
        return qtc.KFileItem_Exists(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#isExecutable)
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn IsExecutable(self: ?*anyopaque) bool {
        return qtc.KFileItem_IsExecutable(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#timeString)
    ///
    /// ``` self: QtC.KFileItem, which: kfileitem_enums.FileTimes, allocator: std.mem.Allocator ```
    pub fn TimeString1(self: ?*anyopaque, which: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_TimeString1(@ptrCast(self), @intCast(which));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.TimeString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#name)
    ///
    /// ``` self: QtC.KFileItem, lowerCase: bool, allocator: std.mem.Allocator ```
    pub fn Name1(self: ?*anyopaque, lowerCase: bool, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KFileItem_Name1(@ptrCast(self), lowerCase);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileitem.Name1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#mostLocalUrl)
    ///
    /// ``` self: QtC.KFileItem, local: *bool ```
    pub fn MostLocalUrl1(self: ?*anyopaque, local: *bool) QtC.QUrl {
        return qtc.KFileItem_MostLocalUrl1(@ptrCast(self), @ptrCast(local));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem.html#dtor.KFileItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KFileItem ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFileItem_Delete(@ptrCast(self));
    }
};

// Also inherits unprojectable QList<KFileItem>

/// https://api.kde.org/kfileitemlist.html
pub const kfileitemlist = struct {
    /// New constructs a new KFileItemList object.
    ///
    ///
    pub fn New() QtC.KFileItemList {
        return qtc.KFileItemList_new();
    }

    /// New2 constructs a new KFileItemList object.
    ///
    /// ``` items: []QtC.KFileItem ```
    pub fn New2(items: []QtC.KFileItem) QtC.KFileItemList {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };

        return qtc.KFileItemList_new2(items_list);
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlist.html#findByName)
    ///
    /// ``` self: QtC.KFileItemList, fileName: []const u8 ```
    pub fn FindByName(self: ?*anyopaque, fileName: []const u8) QtC.KFileItem {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.KFileItemList_FindByName(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlist.html#findByUrl)
    ///
    /// ``` self: QtC.KFileItemList, url: QtC.QUrl ```
    pub fn FindByUrl(self: ?*anyopaque, url: ?*anyopaque) QtC.KFileItem {
        return qtc.KFileItemList_FindByUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlist.html#urlList)
    ///
    /// ``` self: QtC.KFileItemList, allocator: std.mem.Allocator ```
    pub fn UrlList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.KFileItemList_UrlList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("kfileitemlist.UrlList: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlist.html#targetUrlList)
    ///
    /// ``` self: QtC.KFileItemList, allocator: std.mem.Allocator ```
    pub fn TargetUrlList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.KFileItemList_TargetUrlList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("kfileitemlist.TargetUrlList: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kfileitemlist.html#dtor.KFileItemList)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KFileItemList ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFileItemList_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kfileitem-mostlocalurlresult.html
pub const kfileitem__mostlocalurlresult = struct {
    /// New constructs a new KFileItem::MostLocalUrlResult object.
    ///
    /// ``` param1: QtC.KFileItem__MostLocalUrlResult ```
    pub fn New(param1: ?*anyopaque) QtC.KFileItem__MostLocalUrlResult {
        return qtc.KFileItem__MostLocalUrlResult_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem-mostlocalurlresult.html#url-var)
    ///
    /// ``` self: QtC.KFileItem__MostLocalUrlResult ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.KFileItem__MostLocalUrlResult_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem-mostlocalurlresult.html#url-var)
    ///
    /// ``` self: QtC.KFileItem__MostLocalUrlResult, url: QtC.QUrl ```
    pub fn SetUrl(self: ?*anyopaque, url: QtC.QUrl) void {
        qtc.KFileItem__MostLocalUrlResult_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem-mostlocalurlresult.html#local-var)
    ///
    /// ``` self: QtC.KFileItem__MostLocalUrlResult ```
    pub fn Local(self: ?*anyopaque) bool {
        return qtc.KFileItem__MostLocalUrlResult_Local(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kfileitem-mostlocalurlresult.html#local-var)
    ///
    /// ``` self: QtC.KFileItem__MostLocalUrlResult, local: bool ```
    pub fn SetLocal(self: ?*anyopaque, local: bool) void {
        qtc.KFileItem__MostLocalUrlResult_SetLocal(@ptrCast(self), local);
    }

    /// [Qt documentation](https://api.kde.org/kfileitem-mostlocalurlresult.html#operator-eq)
    ///
    /// ``` self: QtC.KFileItem__MostLocalUrlResult, param1: QtC.KFileItem__MostLocalUrlResult ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KFileItem__MostLocalUrlResult_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KFileItem__MostLocalUrlResult ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KFileItem__MostLocalUrlResult_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kfileitem.html#types
pub const enums = struct {
    pub const KFileItem = enum {
        pub const Unknown: i64 = 4294967295;
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
