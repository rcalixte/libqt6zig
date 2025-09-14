const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const authinfo_enums = enums;
const std = @import("std");

/// https://api.kde.org/kio-authinfo.html
pub const kio__authinfo = struct {
    /// New constructs a new KIO::AuthInfo object.
    ///
    ///
    pub fn New() QtC.KIO__AuthInfo {
        return qtc.KIO__AuthInfo_new();
    }

    /// New2 constructs a new KIO::AuthInfo object.
    ///
    /// ``` info: QtC.KIO__AuthInfo ```
    pub fn New2(info: ?*anyopaque) QtC.KIO__AuthInfo {
        return qtc.KIO__AuthInfo_new2(@ptrCast(info));
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#operator-eq)
    ///
    /// ``` self: QtC.KIO__AuthInfo, info: QtC.KIO__AuthInfo ```
    pub fn OperatorAssign(self: ?*anyopaque, info: ?*anyopaque) void {
        qtc.KIO__AuthInfo_OperatorAssign(@ptrCast(self), @ptrCast(info));
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#isModified)
    ///
    /// ``` self: QtC.KIO__AuthInfo ```
    pub fn IsModified(self: ?*anyopaque) bool {
        return qtc.KIO__AuthInfo_IsModified(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#setModified)
    ///
    /// ``` self: QtC.KIO__AuthInfo, flag: bool ```
    pub fn SetModified(self: ?*anyopaque, flag: bool) void {
        qtc.KIO__AuthInfo_SetModified(@ptrCast(self), flag);
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#url-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.KIO__AuthInfo_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#url-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, url: QtC.QUrl ```
    pub fn SetUrl(self: ?*anyopaque, url: QtC.QUrl) void {
        qtc.KIO__AuthInfo_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#username-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, allocator: std.mem.Allocator ```
    pub fn Username(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const username_str = qtc.KIO__AuthInfo_Username(@ptrCast(self));
        defer qtc.libqt_string_free(&username_str);
        const username_ret = allocator.alloc(u8, username_str.len) catch @panic("kio::authinfo.Username: Memory allocation failed");
        @memcpy(username_ret, username_str.data[0..username_str.len]);
        return username_ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#username-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, username: []const u8 ```
    pub fn SetUsername(self: ?*anyopaque, username: []const u8) void {
        const username_str = qtc.libqt_string{
            .len = username.len,
            .data = username.ptr,
        };
        qtc.KIO__AuthInfo_SetUsername(@ptrCast(self), username_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#password-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, allocator: std.mem.Allocator ```
    pub fn Password(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const password_str = qtc.KIO__AuthInfo_Password(@ptrCast(self));
        defer qtc.libqt_string_free(&password_str);
        const password_ret = allocator.alloc(u8, password_str.len) catch @panic("kio::authinfo.Password: Memory allocation failed");
        @memcpy(password_ret, password_str.data[0..password_str.len]);
        return password_ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#password-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, password: []const u8 ```
    pub fn SetPassword(self: ?*anyopaque, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.KIO__AuthInfo_SetPassword(@ptrCast(self), password_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#prompt-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, allocator: std.mem.Allocator ```
    pub fn Prompt(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const prompt_str = qtc.KIO__AuthInfo_Prompt(@ptrCast(self));
        defer qtc.libqt_string_free(&prompt_str);
        const prompt_ret = allocator.alloc(u8, prompt_str.len) catch @panic("kio::authinfo.Prompt: Memory allocation failed");
        @memcpy(prompt_ret, prompt_str.data[0..prompt_str.len]);
        return prompt_ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#prompt-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, prompt: []const u8 ```
    pub fn SetPrompt(self: ?*anyopaque, prompt: []const u8) void {
        const prompt_str = qtc.libqt_string{
            .len = prompt.len,
            .data = prompt.ptr,
        };
        qtc.KIO__AuthInfo_SetPrompt(@ptrCast(self), prompt_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#caption-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, allocator: std.mem.Allocator ```
    pub fn Caption(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const caption_str = qtc.KIO__AuthInfo_Caption(@ptrCast(self));
        defer qtc.libqt_string_free(&caption_str);
        const caption_ret = allocator.alloc(u8, caption_str.len) catch @panic("kio::authinfo.Caption: Memory allocation failed");
        @memcpy(caption_ret, caption_str.data[0..caption_str.len]);
        return caption_ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#caption-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, caption: []const u8 ```
    pub fn SetCaption(self: ?*anyopaque, caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = caption.len,
            .data = caption.ptr,
        };
        qtc.KIO__AuthInfo_SetCaption(@ptrCast(self), caption_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#comment-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, allocator: std.mem.Allocator ```
    pub fn Comment(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const comment_str = qtc.KIO__AuthInfo_Comment(@ptrCast(self));
        defer qtc.libqt_string_free(&comment_str);
        const comment_ret = allocator.alloc(u8, comment_str.len) catch @panic("kio::authinfo.Comment: Memory allocation failed");
        @memcpy(comment_ret, comment_str.data[0..comment_str.len]);
        return comment_ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#comment-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, comment: []const u8 ```
    pub fn SetComment(self: ?*anyopaque, comment: []const u8) void {
        const comment_str = qtc.libqt_string{
            .len = comment.len,
            .data = comment.ptr,
        };
        qtc.KIO__AuthInfo_SetComment(@ptrCast(self), comment_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#commentLabel-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, allocator: std.mem.Allocator ```
    pub fn CommentLabel(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const commentLabel_str = qtc.KIO__AuthInfo_CommentLabel(@ptrCast(self));
        defer qtc.libqt_string_free(&commentLabel_str);
        const commentLabel_ret = allocator.alloc(u8, commentLabel_str.len) catch @panic("kio::authinfo.CommentLabel: Memory allocation failed");
        @memcpy(commentLabel_ret, commentLabel_str.data[0..commentLabel_str.len]);
        return commentLabel_ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#commentLabel-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, commentLabel: []const u8 ```
    pub fn SetCommentLabel(self: ?*anyopaque, commentLabel: []const u8) void {
        const commentLabel_str = qtc.libqt_string{
            .len = commentLabel.len,
            .data = commentLabel.ptr,
        };
        qtc.KIO__AuthInfo_SetCommentLabel(@ptrCast(self), commentLabel_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#realmValue-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, allocator: std.mem.Allocator ```
    pub fn RealmValue(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const realmValue_str = qtc.KIO__AuthInfo_RealmValue(@ptrCast(self));
        defer qtc.libqt_string_free(&realmValue_str);
        const realmValue_ret = allocator.alloc(u8, realmValue_str.len) catch @panic("kio::authinfo.RealmValue: Memory allocation failed");
        @memcpy(realmValue_ret, realmValue_str.data[0..realmValue_str.len]);
        return realmValue_ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#realmValue-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, realmValue: []const u8 ```
    pub fn SetRealmValue(self: ?*anyopaque, realmValue: []const u8) void {
        const realmValue_str = qtc.libqt_string{
            .len = realmValue.len,
            .data = realmValue.ptr,
        };
        qtc.KIO__AuthInfo_SetRealmValue(@ptrCast(self), realmValue_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#digestInfo-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, allocator: std.mem.Allocator ```
    pub fn DigestInfo(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const digestInfo_str = qtc.KIO__AuthInfo_DigestInfo(@ptrCast(self));
        defer qtc.libqt_string_free(&digestInfo_str);
        const digestInfo_ret = allocator.alloc(u8, digestInfo_str.len) catch @panic("kio::authinfo.DigestInfo: Memory allocation failed");
        @memcpy(digestInfo_ret, digestInfo_str.data[0..digestInfo_str.len]);
        return digestInfo_ret;
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#digestInfo-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, digestInfo: []const u8 ```
    pub fn SetDigestInfo(self: ?*anyopaque, digestInfo: []const u8) void {
        const digestInfo_str = qtc.libqt_string{
            .len = digestInfo.len,
            .data = digestInfo.ptr,
        };
        qtc.KIO__AuthInfo_SetDigestInfo(@ptrCast(self), digestInfo_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#verifyPath-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo ```
    pub fn VerifyPath(self: ?*anyopaque) bool {
        return qtc.KIO__AuthInfo_VerifyPath(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#verifyPath-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, verifyPath: bool ```
    pub fn SetVerifyPath(self: ?*anyopaque, verifyPath: bool) void {
        qtc.KIO__AuthInfo_SetVerifyPath(@ptrCast(self), verifyPath);
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#readOnly-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo ```
    pub fn ReadOnly(self: ?*anyopaque) bool {
        return qtc.KIO__AuthInfo_ReadOnly(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#readOnly-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, readOnly: bool ```
    pub fn SetReadOnly(self: ?*anyopaque, readOnly: bool) void {
        qtc.KIO__AuthInfo_SetReadOnly(@ptrCast(self), readOnly);
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#keepPassword-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo ```
    pub fn KeepPassword(self: ?*anyopaque) bool {
        return qtc.KIO__AuthInfo_KeepPassword(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#keepPassword-var)
    ///
    /// ``` self: QtC.KIO__AuthInfo, keepPassword: bool ```
    pub fn SetKeepPassword(self: ?*anyopaque, keepPassword: bool) void {
        qtc.KIO__AuthInfo_SetKeepPassword(@ptrCast(self), keepPassword);
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#setExtraField)
    ///
    /// ``` self: QtC.KIO__AuthInfo, fieldName: []const u8, value: QtC.QVariant ```
    pub fn SetExtraField(self: ?*anyopaque, fieldName: []const u8, value: ?*anyopaque) void {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        qtc.KIO__AuthInfo_SetExtraField(@ptrCast(self), fieldName_str, @ptrCast(value));
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#setExtraFieldFlags)
    ///
    /// ``` self: QtC.KIO__AuthInfo, fieldName: []const u8, flags: authinfo_enums.FieldFlags ```
    pub fn SetExtraFieldFlags(self: ?*anyopaque, fieldName: []const u8, flags: i32) void {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        qtc.KIO__AuthInfo_SetExtraFieldFlags(@ptrCast(self), fieldName_str, @intCast(flags));
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#getExtraField)
    ///
    /// ``` self: QtC.KIO__AuthInfo, fieldName: []const u8 ```
    pub fn GetExtraField(self: ?*anyopaque, fieldName: []const u8) QtC.QVariant {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        return qtc.KIO__AuthInfo_GetExtraField(@ptrCast(self), fieldName_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#getExtraFieldFlags)
    ///
    /// ``` self: QtC.KIO__AuthInfo, fieldName: []const u8 ```
    ///
    /// Returns: ``` authinfo_enums.FieldFlags ```
    pub fn GetExtraFieldFlags(self: ?*anyopaque, fieldName: []const u8) i32 {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        return qtc.KIO__AuthInfo_GetExtraFieldFlags(@ptrCast(self), fieldName_str);
    }

    /// [Qt documentation](https://api.kde.org/kio-authinfo.html#registerMetaTypes)
    ///
    ///
    pub fn RegisterMetaTypes() void {
        qtc.KIO__AuthInfo_RegisterMetaTypes();
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KIO__AuthInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIO__AuthInfo_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kio-authinfo.html#types
pub const enums = struct {
    pub const FieldFlags = enum {
        pub const ExtraFieldNoFlags: i32 = 0;
        pub const ExtraFieldReadOnly: i32 = 2;
        pub const ExtraFieldMandatory: i32 = 4;
    };
};
