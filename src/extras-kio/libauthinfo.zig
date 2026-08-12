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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KIO::AuthInfo object in C++ memory
    ///
    pub fn new() KIO__AuthInfo {
        return .{ .ptr = qtc.KIO__AuthInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KIO::AuthInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` info: KIO__AuthInfo `
    ///
    pub fn new2(info: anytype) KIO__AuthInfo {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return .{ .ptr = qtc.KIO__AuthInfo_new2(@ptrCast(info.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    pub fn operatorAssign(self: KIO__AuthInfo, info: anytype) void {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        qtc.KIO__AuthInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### DEPRECATED: Use `isModified` instead
    ///
    pub const IsModified = isModified;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#isModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    pub fn isModified(self: KIO__AuthInfo) bool {
        return qtc.KIO__AuthInfo_IsModified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModified` instead
    ///
    pub const SetModified = setModified;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` flag: bool `
    ///
    pub fn setModified(self: KIO__AuthInfo, flag: bool) void {
        qtc.KIO__AuthInfo_SetModified(@ptrCast(self.ptr), flag);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#url-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    pub fn url(self: KIO__AuthInfo) QUrl {
        return .{ .ptr = qtc.KIO__AuthInfo_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#url-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: KIO__AuthInfo, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KIO__AuthInfo_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `username` instead
    ///
    pub const Username = username;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#username-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn username(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var username_str = qtc.KIO__AuthInfo_Username(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&username_str);
        const username_ret = allocator.alloc(u8, username_str.len) catch @panic("KIO__AuthInfo.username: Memory allocation failed");
        @memcpy(username_ret, username_str.data[0..username_str.len]);
        return username_ret;
    }

    /// ### DEPRECATED: Use `setUsername` instead
    ///
    pub const SetUsername = setUsername;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#username-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` _username: []const u8 `
    ///
    pub fn setUsername(self: KIO__AuthInfo, _username: []const u8) void {
        const username_str = qtc.libqt_string{
            .len = _username.len,
            .data = _username.ptr,
        };
        qtc.KIO__AuthInfo_SetUsername(@ptrCast(self.ptr), username_str);
    }

    /// ### DEPRECATED: Use `password` instead
    ///
    pub const Password = password;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#password-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn password(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var password_str = qtc.KIO__AuthInfo_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&password_str);
        const password_ret = allocator.alloc(u8, password_str.len) catch @panic("KIO__AuthInfo.password: Memory allocation failed");
        @memcpy(password_ret, password_str.data[0..password_str.len]);
        return password_ret;
    }

    /// ### DEPRECATED: Use `setPassword` instead
    ///
    pub const SetPassword = setPassword;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#password-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` _password: []const u8 `
    ///
    pub fn setPassword(self: KIO__AuthInfo, _password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = _password.len,
            .data = _password.ptr,
        };
        qtc.KIO__AuthInfo_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### DEPRECATED: Use `prompt` instead
    ///
    pub const Prompt = prompt;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#prompt-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn prompt(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var prompt_str = qtc.KIO__AuthInfo_Prompt(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&prompt_str);
        const prompt_ret = allocator.alloc(u8, prompt_str.len) catch @panic("KIO__AuthInfo.prompt: Memory allocation failed");
        @memcpy(prompt_ret, prompt_str.data[0..prompt_str.len]);
        return prompt_ret;
    }

    /// ### DEPRECATED: Use `setPrompt` instead
    ///
    pub const SetPrompt = setPrompt;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#prompt-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` _prompt: []const u8 `
    ///
    pub fn setPrompt(self: KIO__AuthInfo, _prompt: []const u8) void {
        const prompt_str = qtc.libqt_string{
            .len = _prompt.len,
            .data = _prompt.ptr,
        };
        qtc.KIO__AuthInfo_SetPrompt(@ptrCast(self.ptr), prompt_str);
    }

    /// ### DEPRECATED: Use `caption` instead
    ///
    pub const Caption = caption;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#caption-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn caption(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var caption_str = qtc.KIO__AuthInfo_Caption(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&caption_str);
        const caption_ret = allocator.alloc(u8, caption_str.len) catch @panic("KIO__AuthInfo.caption: Memory allocation failed");
        @memcpy(caption_ret, caption_str.data[0..caption_str.len]);
        return caption_ret;
    }

    /// ### DEPRECATED: Use `setCaption` instead
    ///
    pub const SetCaption = setCaption;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#caption-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` _caption: []const u8 `
    ///
    pub fn setCaption(self: KIO__AuthInfo, _caption: []const u8) void {
        const caption_str = qtc.libqt_string{
            .len = _caption.len,
            .data = _caption.ptr,
        };
        qtc.KIO__AuthInfo_SetCaption(@ptrCast(self.ptr), caption_str);
    }

    /// ### DEPRECATED: Use `comment` instead
    ///
    pub const Comment = comment;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#comment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn comment(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var comment_str = qtc.KIO__AuthInfo_Comment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&comment_str);
        const comment_ret = allocator.alloc(u8, comment_str.len) catch @panic("KIO__AuthInfo.comment: Memory allocation failed");
        @memcpy(comment_ret, comment_str.data[0..comment_str.len]);
        return comment_ret;
    }

    /// ### DEPRECATED: Use `setComment` instead
    ///
    pub const SetComment = setComment;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#comment-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` _comment: []const u8 `
    ///
    pub fn setComment(self: KIO__AuthInfo, _comment: []const u8) void {
        const comment_str = qtc.libqt_string{
            .len = _comment.len,
            .data = _comment.ptr,
        };
        qtc.KIO__AuthInfo_SetComment(@ptrCast(self.ptr), comment_str);
    }

    /// ### DEPRECATED: Use `commentLabel` instead
    ///
    pub const CommentLabel = commentLabel;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#commentLabel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn commentLabel(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var commentLabel_str = qtc.KIO__AuthInfo_CommentLabel(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&commentLabel_str);
        const commentLabel_ret = allocator.alloc(u8, commentLabel_str.len) catch @panic("KIO__AuthInfo.commentLabel: Memory allocation failed");
        @memcpy(commentLabel_ret, commentLabel_str.data[0..commentLabel_str.len]);
        return commentLabel_ret;
    }

    /// ### DEPRECATED: Use `setCommentLabel` instead
    ///
    pub const SetCommentLabel = setCommentLabel;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#commentLabel-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` _commentLabel: []const u8 `
    ///
    pub fn setCommentLabel(self: KIO__AuthInfo, _commentLabel: []const u8) void {
        const commentLabel_str = qtc.libqt_string{
            .len = _commentLabel.len,
            .data = _commentLabel.ptr,
        };
        qtc.KIO__AuthInfo_SetCommentLabel(@ptrCast(self.ptr), commentLabel_str);
    }

    /// ### DEPRECATED: Use `realmValue` instead
    ///
    pub const RealmValue = realmValue;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#realmValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn realmValue(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var realmValue_str = qtc.KIO__AuthInfo_RealmValue(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&realmValue_str);
        const realmValue_ret = allocator.alloc(u8, realmValue_str.len) catch @panic("KIO__AuthInfo.realmValue: Memory allocation failed");
        @memcpy(realmValue_ret, realmValue_str.data[0..realmValue_str.len]);
        return realmValue_ret;
    }

    /// ### DEPRECATED: Use `setRealmValue` instead
    ///
    pub const SetRealmValue = setRealmValue;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#realmValue-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` _realmValue: []const u8 `
    ///
    pub fn setRealmValue(self: KIO__AuthInfo, _realmValue: []const u8) void {
        const realmValue_str = qtc.libqt_string{
            .len = _realmValue.len,
            .data = _realmValue.ptr,
        };
        qtc.KIO__AuthInfo_SetRealmValue(@ptrCast(self.ptr), realmValue_str);
    }

    /// ### DEPRECATED: Use `digestInfo` instead
    ///
    pub const DigestInfo = digestInfo;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#digestInfo-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn digestInfo(self: KIO__AuthInfo, allocator: std.mem.Allocator) []const u8 {
        var digestInfo_str = qtc.KIO__AuthInfo_DigestInfo(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&digestInfo_str);
        const digestInfo_ret = allocator.alloc(u8, digestInfo_str.len) catch @panic("KIO__AuthInfo.digestInfo: Memory allocation failed");
        @memcpy(digestInfo_ret, digestInfo_str.data[0..digestInfo_str.len]);
        return digestInfo_ret;
    }

    /// ### DEPRECATED: Use `setDigestInfo` instead
    ///
    pub const SetDigestInfo = setDigestInfo;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#digestInfo-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` _digestInfo: []const u8 `
    ///
    pub fn setDigestInfo(self: KIO__AuthInfo, _digestInfo: []const u8) void {
        const digestInfo_str = qtc.libqt_string{
            .len = _digestInfo.len,
            .data = _digestInfo.ptr,
        };
        qtc.KIO__AuthInfo_SetDigestInfo(@ptrCast(self.ptr), digestInfo_str);
    }

    /// ### DEPRECATED: Use `verifyPath` instead
    ///
    pub const VerifyPath = verifyPath;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#verifyPath-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    pub fn verifyPath(self: KIO__AuthInfo) bool {
        return qtc.KIO__AuthInfo_VerifyPath(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerifyPath` instead
    ///
    pub const SetVerifyPath = setVerifyPath;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#verifyPath-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` _verifyPath: bool `
    ///
    pub fn setVerifyPath(self: KIO__AuthInfo, _verifyPath: bool) void {
        qtc.KIO__AuthInfo_SetVerifyPath(@ptrCast(self.ptr), _verifyPath);
    }

    /// ### DEPRECATED: Use `readOnly` instead
    ///
    pub const ReadOnly = readOnly;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#readOnly-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    pub fn readOnly(self: KIO__AuthInfo) bool {
        return qtc.KIO__AuthInfo_ReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadOnly` instead
    ///
    pub const SetReadOnly = setReadOnly;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#readOnly-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` _readOnly: bool `
    ///
    pub fn setReadOnly(self: KIO__AuthInfo, _readOnly: bool) void {
        qtc.KIO__AuthInfo_SetReadOnly(@ptrCast(self.ptr), _readOnly);
    }

    /// ### DEPRECATED: Use `keepPassword` instead
    ///
    pub const KeepPassword = keepPassword;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#keepPassword-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    pub fn keepPassword(self: KIO__AuthInfo) bool {
        return qtc.KIO__AuthInfo_KeepPassword(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKeepPassword` instead
    ///
    pub const SetKeepPassword = setKeepPassword;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#keepPassword-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` _keepPassword: bool `
    ///
    pub fn setKeepPassword(self: KIO__AuthInfo, _keepPassword: bool) void {
        qtc.KIO__AuthInfo_SetKeepPassword(@ptrCast(self.ptr), _keepPassword);
    }

    /// ### DEPRECATED: Use `setExtraField` instead
    ///
    pub const SetExtraField = setExtraField;

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
    pub fn setExtraField(self: KIO__AuthInfo, fieldName: []const u8, value: anytype) void {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.KIO__AuthInfo_SetExtraField(@ptrCast(self.ptr), fieldName_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `setExtraFieldFlags` instead
    ///
    pub const SetExtraFieldFlags = setExtraFieldFlags;

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
    pub fn setExtraFieldFlags(self: KIO__AuthInfo, fieldName: []const u8, flags: i32) void {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        qtc.KIO__AuthInfo_SetExtraFieldFlags(@ptrCast(self.ptr), fieldName_str, @bitCast(flags));
    }

    /// ### DEPRECATED: Use `getExtraField` instead
    ///
    pub const GetExtraField = getExtraField;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#getExtraField)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__AuthInfo `
    ///
    /// ` fieldName: []const u8 `
    ///
    pub fn getExtraField(self: KIO__AuthInfo, fieldName: []const u8) QVariant {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        return .{ .ptr = qtc.KIO__AuthInfo_GetExtraField(@ptrCast(self.ptr), fieldName_str) };
    }

    /// ### DEPRECATED: Use `getExtraFieldFlags` instead
    ///
    pub const GetExtraFieldFlags = getExtraFieldFlags;

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
    pub fn getExtraFieldFlags(self: KIO__AuthInfo, fieldName: []const u8) i32 {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        return qtc.KIO__AuthInfo_GetExtraFieldFlags(@ptrCast(self.ptr), fieldName_str);
    }

    /// ### DEPRECATED: Use `registerMetaTypes` instead
    ///
    pub const RegisterMetaTypes = registerMetaTypes;

    /// ### [Upstream resources](https://api.kde.org/kio-authinfo.html#registerMetaTypes)
    ///
    pub fn registerMetaTypes() void {
        qtc.KIO__AuthInfo_RegisterMetaTypes();
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__AuthInfo `
    ///
    pub fn delete(self: KIO__AuthInfo) void {
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
