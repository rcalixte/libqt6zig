const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const authinfo_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kio-authinfo.html)
pub const KIO__AuthInfo = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__AuthInfo,

    pub const _is_KIO__AuthInfo = {};

    /// New constructs a new KIO::AuthInfo object.
    ///
    pub fn New() KIO__AuthInfo {
        return .{ .ptr = qtc.KIO__AuthInfo_new() };
    }

    /// New2 constructs a new KIO::AuthInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` info: KIO__AuthInfo `
    ///
    pub fn New2(info: anytype) KIO__AuthInfo {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return .{ .ptr = qtc.KIO__AuthInfo_new2(@ptrCast(info.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    pub fn OperatorAssign(self: KIO__AuthInfo, info: anytype) void {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        qtc.KIO__AuthInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#isModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    pub fn IsModified(self: KIO__AuthInfo) bool {
        return qtc.KIO__AuthInfo_IsModified(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` flag: bool `
    ///
    pub fn SetModified(self: KIO__AuthInfo, flag: bool) void {
        qtc.KIO__AuthInfo_SetModified(@ptrCast(self.ptr), flag);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#url-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    pub fn Url(self: KIO__AuthInfo) QUrl {
        return .{ .ptr = qtc.KIO__AuthInfo_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#url-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: KIO__AuthInfo, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KIO__AuthInfo_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#username-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Username(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var username_str = qtc.KIO__AuthInfo_Username(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&username_str);
        const username_ret = allocator.alloc(u8, username_str.len) catch @panic("kio__authinfo.Username: Memory allocation failed");
        @memcpy(username_ret, username_str.data[0..username_str.len]);
        return username_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#username-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` username: []const u8 `
    ///
    pub fn SetUsername(self: KIO__AuthInfo, username: []const u8) void {
        const username_str = qtc.libqt_string{
            .len = username.len,
            .data = username.ptr,
        };
        qtc.KIO__AuthInfo_SetUsername(@ptrCast(self.ptr), username_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#password-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Password(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var password_str = qtc.KIO__AuthInfo_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&password_str);
        const password_ret = allocator.alloc(u8, password_str.len) catch @panic("kio__authinfo.Password: Memory allocation failed");
        @memcpy(password_ret, password_str.data[0..password_str.len]);
        return password_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#password-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` password: []const u8 `
    ///
    pub fn SetPassword(self: KIO__AuthInfo, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.KIO__AuthInfo_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#prompt-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prompt(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var prompt_str = qtc.KIO__AuthInfo_Prompt(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&prompt_str);
        const prompt_ret = allocator.alloc(u8, prompt_str.len) catch @panic("kio__authinfo.Prompt: Memory allocation failed");
        @memcpy(prompt_ret, prompt_str.data[0..prompt_str.len]);
        return prompt_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#prompt-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` prompt: []const u8 `
    ///
    pub fn SetPrompt(self: KIO__AuthInfo, prompt: []const u8) void {
        const prompt_str = qtc.libqt_string{
            .len = prompt.len,
            .data = prompt.ptr,
        };
        qtc.KIO__AuthInfo_SetPrompt(@ptrCast(self.ptr), prompt_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#caption-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Caption(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var caption_str = qtc.KIO__AuthInfo_Caption(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&caption_str);
        const caption_ret = allocator.alloc(u8, caption_str.len) catch @panic("kio__authinfo.Caption: Memory allocation failed");
        @memcpy(caption_ret, caption_str.data[0..caption_str.len]);
        return caption_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#caption-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` caption: []const u8 `
    ///
    pub fn SetCaption(self: KIO__AuthInfo, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KIO__AuthInfo_SetCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#comment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Comment(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var comment_str = qtc.KIO__AuthInfo_Comment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&comment_str);
        const comment_ret = allocator.alloc(u8, comment_str.len) catch @panic("kio__authinfo.Comment: Memory allocation failed");
        @memcpy(comment_ret, comment_str.data[0..comment_str.len]);
        return comment_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#comment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` comment: []const u8 `
    ///
    pub fn SetComment(self: KIO__AuthInfo, comment: []const u8) void {
        const comment_str = qtc.libqt_string{
            .len = comment.len,
            .data = comment.ptr,
        };
        qtc.KIO__AuthInfo_SetComment(@ptrCast(self.ptr), comment_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#commentLabel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CommentLabel(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var commentLabel_str = qtc.KIO__AuthInfo_CommentLabel(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&commentLabel_str);
        const commentLabel_ret = allocator.alloc(u8, commentLabel_str.len) catch @panic("kio__authinfo.CommentLabel: Memory allocation failed");
        @memcpy(commentLabel_ret, commentLabel_str.data[0..commentLabel_str.len]);
        return commentLabel_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#commentLabel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` commentLabel: []const u8 `
    ///
    pub fn SetCommentLabel(self: KIO__AuthInfo, commentLabel: []const u8) void {
        const commentLabel_str = qtc.libqt_string{
            .len = commentLabel.len,
            .data = commentLabel.ptr,
        };
        qtc.KIO__AuthInfo_SetCommentLabel(@ptrCast(self.ptr), commentLabel_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#realmValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RealmValue(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var realmValue_str = qtc.KIO__AuthInfo_RealmValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&realmValue_str);
        const realmValue_ret = allocator.alloc(u8, realmValue_str.len) catch @panic("kio__authinfo.RealmValue: Memory allocation failed");
        @memcpy(realmValue_ret, realmValue_str.data[0..realmValue_str.len]);
        return realmValue_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#realmValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` realmValue: []const u8 `
    ///
    pub fn SetRealmValue(self: KIO__AuthInfo, realmValue: []const u8) void {
        const realmValue_str = qtc.libqt_string{
            .len = realmValue.len,
            .data = realmValue.ptr,
        };
        qtc.KIO__AuthInfo_SetRealmValue(@ptrCast(self.ptr), realmValue_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#digestInfo-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DigestInfo(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var digestInfo_str = qtc.KIO__AuthInfo_DigestInfo(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&digestInfo_str);
        const digestInfo_ret = allocator.alloc(u8, digestInfo_str.len) catch @panic("kio__authinfo.DigestInfo: Memory allocation failed");
        @memcpy(digestInfo_ret, digestInfo_str.data[0..digestInfo_str.len]);
        return digestInfo_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#digestInfo-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` digestInfo: []const u8 `
    ///
    pub fn SetDigestInfo(self: KIO__AuthInfo, digestInfo: []const u8) void {
        const digestInfo_str = qtc.libqt_string{
            .len = digestInfo.len,
            .data = digestInfo.ptr,
        };
        qtc.KIO__AuthInfo_SetDigestInfo(@ptrCast(self.ptr), digestInfo_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#verifyPath-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    pub fn VerifyPath(self: KIO__AuthInfo) bool {
        return qtc.KIO__AuthInfo_VerifyPath(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#verifyPath-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` verifyPath: bool `
    ///
    pub fn SetVerifyPath(self: KIO__AuthInfo, verifyPath: bool) void {
        qtc.KIO__AuthInfo_SetVerifyPath(@ptrCast(self.ptr), verifyPath);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#readOnly-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    pub fn ReadOnly(self: KIO__AuthInfo) bool {
        return qtc.KIO__AuthInfo_ReadOnly(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#readOnly-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` readOnly: bool `
    ///
    pub fn SetReadOnly(self: KIO__AuthInfo, readOnly: bool) void {
        qtc.KIO__AuthInfo_SetReadOnly(@ptrCast(self.ptr), readOnly);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#keepPassword-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    pub fn KeepPassword(self: KIO__AuthInfo) bool {
        return qtc.KIO__AuthInfo_KeepPassword(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#keepPassword-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` keepPassword: bool `
    ///
    pub fn SetKeepPassword(self: KIO__AuthInfo, keepPassword: bool) void {
        qtc.KIO__AuthInfo_SetKeepPassword(@ptrCast(self.ptr), keepPassword);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#setExtraField)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` fieldName: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetExtraField(self: KIO__AuthInfo, fieldName: []const u8, value: anytype) void {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KIO__AuthInfo_SetExtraField(@ptrCast(self.ptr), fieldName_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#setExtraFieldFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` fieldName: []const u8 `
    ///
    /// ` flags: authinfo_enums.FieldFlags `
    ///
    pub fn SetExtraFieldFlags(self: KIO__AuthInfo, fieldName: []const u8, flags: i32) void {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        qtc.KIO__AuthInfo_SetExtraFieldFlags(@ptrCast(self.ptr), fieldName_str, @bitCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#getExtraField)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` fieldName: []const u8 `
    ///
    pub fn GetExtraField(self: KIO__AuthInfo, fieldName: []const u8) QVariant {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        return .{ .ptr = qtc.KIO__AuthInfo_GetExtraField(@ptrCast(self.ptr), fieldName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#getExtraFieldFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` fieldName: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` authinfo_enums.FieldFlags `
    ///
    pub fn GetExtraFieldFlags(self: KIO__AuthInfo, fieldName: []const u8) i32 {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        return qtc.KIO__AuthInfo_GetExtraFieldFlags(@ptrCast(self.ptr), fieldName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#registerMetaTypes)
    ///
    pub fn RegisterMetaTypes() void {
        qtc.KIO__AuthInfo_RegisterMetaTypes();
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__AuthInfo `
    ///
    pub fn Delete(self: KIO__AuthInfo) void {
        qtc.KIO__AuthInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#public-types)
pub const enums = struct {
    pub const FieldFlags = enum(i32) {
        pub const ExtraFieldNoFlags: i32 = 0;
        pub const ExtraFieldReadOnly: i32 = 2;
        pub const ExtraFieldMandatory: i32 = 4;
    };
};
