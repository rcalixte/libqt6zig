const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-provider.html)
pub const attica__provider = struct {
    /// New constructs a new Attica::Provider object.
    ///
    pub fn New() QtC.Attica__Provider {
        return qtc.Attica__Provider_new();
    }

    /// New2 constructs a new Attica::Provider object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Attica__Provider `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Attica__Provider {
        return qtc.Attica__Provider_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` other: QtC.Attica__Provider `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Provider_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_IsEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.Attica__Provider_SetEnabled(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setAdditionalAgentInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` additionalInformation: []const u8 `
    ///
    pub fn SetAdditionalAgentInformation(self: ?*anyopaque, additionalInformation: []const u8) void {
        const additionalInformation_str = qtc.libqt_string{
            .len = additionalInformation.len,
            .data = additionalInformation.ptr,
        };
        qtc.Attica__Provider_SetAdditionalAgentInformation(@ptrCast(self), additionalInformation_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#additionalAgentInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AdditionalAgentInformation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_AdditionalAgentInformation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.AdditionalAgentInformation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#baseUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn BaseUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__Provider_BaseUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn Icon(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__Provider_Icon(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasPersonService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn HasPersonService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasPersonService(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#personServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PersonServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_PersonServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.PersonServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasFriendService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn HasFriendService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasFriendService(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#friendServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FriendServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_FriendServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.FriendServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasMessageService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn HasMessageService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasMessageService(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#messageServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MessageServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_MessageServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.MessageServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasAchievementService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn HasAchievementService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasAchievementService(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#achievementServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AchievementServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_AchievementServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.AchievementServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasActivityService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn HasActivityService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasActivityService(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#activityServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActivityServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_ActivityServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.ActivityServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasContentService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn HasContentService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasContentService(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#contentServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContentServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_ContentServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.ContentServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasFanService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn HasFanService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasFanService(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#fanServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FanServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_FanServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.FanServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasForumService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn HasForumService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasForumService(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#forumServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ForumServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_ForumServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.ForumServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasKnowledgebaseService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn HasKnowledgebaseService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasKnowledgebaseService(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#knowledgebaseServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn KnowledgebaseServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_KnowledgebaseServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.KnowledgebaseServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasCommentService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn HasCommentService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasCommentService(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#commentServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CommentServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_CommentServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.CommentServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn HasCredentials(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasCredentials(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn HasCredentials2(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasCredentials2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#loadCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn LoadCredentials(self: ?*anyopaque, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__Provider_LoadCredentials(@ptrCast(self), user_str, password_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#saveCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn SaveCredentials(self: ?*anyopaque, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__Provider_SaveCredentials(@ptrCast(self), user_str, password_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#checkLogin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn CheckLogin(self: ?*anyopaque, user: []const u8, password: []const u8) QtC.Attica__PostJob {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__Provider_CheckLogin(@ptrCast(self), user_str, password_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#registerAccount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` id: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    /// ` mail: []const u8 `
    ///
    /// ` firstName: []const u8 `
    ///
    /// ` lastName: []const u8 `
    ///
    pub fn RegisterAccount(self: ?*anyopaque, id: []const u8, password: []const u8, mail: []const u8, firstName: []const u8, lastName: []const u8) QtC.Attica__PostJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        const mail_str = qtc.libqt_string{
            .len = mail.len,
            .data = mail.ptr,
        };
        const firstName_str = qtc.libqt_string{
            .len = firstName.len,
            .data = firstName.ptr,
        };
        const lastName_str = qtc.libqt_string{
            .len = lastName.len,
            .data = lastName.ptr,
        };
        return qtc.Attica__Provider_RegisterAccount(@ptrCast(self), id_str, password_str, mail_str, firstName_str, lastName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#postLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` latitude: f64 `
    ///
    /// ` longitude: f64 `
    ///
    pub fn PostLocation(self: ?*anyopaque, latitude: f64, longitude: f64) QtC.Attica__PostJob {
        return qtc.Attica__Provider_PostLocation(@ptrCast(self), @floatCast(latitude), @floatCast(longitude));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setPrivateData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` app: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetPrivateData(self: ?*anyopaque, app: []const u8, key: []const u8, value: []const u8) QtC.Attica__PostJob {
        const app_str = qtc.libqt_string{
            .len = app.len,
            .data = app.ptr,
        };
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return qtc.Attica__Provider_SetPrivateData(@ptrCast(self), app_str, key_str, value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#inviteFriend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` to: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn InviteFriend(self: ?*anyopaque, to: []const u8, message: []const u8) QtC.Attica__PostJob {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return qtc.Attica__Provider_InviteFriend(@ptrCast(self), to_str, message_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#approveFriendship)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` to: []const u8 `
    ///
    pub fn ApproveFriendship(self: ?*anyopaque, to: []const u8) QtC.Attica__PostJob {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        return qtc.Attica__Provider_ApproveFriendship(@ptrCast(self), to_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#declineFriendship)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` to: []const u8 `
    ///
    pub fn DeclineFriendship(self: ?*anyopaque, to: []const u8) QtC.Attica__PostJob {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        return qtc.Attica__Provider_DeclineFriendship(@ptrCast(self), to_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#cancelFriendship)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` to: []const u8 `
    ///
    pub fn CancelFriendship(self: ?*anyopaque, to: []const u8) QtC.Attica__PostJob {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        return qtc.Attica__Provider_CancelFriendship(@ptrCast(self), to_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#postMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` message: QtC.Attica__Message `
    ///
    pub fn PostMessage(self: ?*anyopaque, message: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_PostMessage(@ptrCast(self), @ptrCast(message));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#editAchievement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    /// ` achievementId: []const u8 `
    ///
    /// ` achievement: QtC.Attica__Achievement `
    ///
    pub fn EditAchievement(self: ?*anyopaque, contentId: []const u8, achievementId: []const u8, achievement: ?*anyopaque) QtC.Attica__PutJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        const achievementId_str = qtc.libqt_string{
            .len = achievementId.len,
            .data = achievementId.ptr,
        };
        return qtc.Attica__Provider_EditAchievement(@ptrCast(self), contentId_str, achievementId_str, @ptrCast(achievement));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deleteAchievement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    /// ` achievementId: []const u8 `
    ///
    pub fn DeleteAchievement(self: ?*anyopaque, contentId: []const u8, achievementId: []const u8) QtC.Attica__DeleteJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        const achievementId_str = qtc.libqt_string{
            .len = achievementId.len,
            .data = achievementId.ptr,
        };
        return qtc.Attica__Provider_DeleteAchievement(@ptrCast(self), contentId_str, achievementId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setAchievementProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` id: []const u8 `
    ///
    /// ` progress: QtC.QVariant `
    ///
    /// ` timestamp: QtC.QDateTime `
    ///
    pub fn SetAchievementProgress(self: ?*anyopaque, id: []const u8, progress: ?*anyopaque, timestamp: ?*anyopaque) QtC.Attica__PostJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return qtc.Attica__Provider_SetAchievementProgress(@ptrCast(self), id_str, @ptrCast(progress), @ptrCast(timestamp));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#resetAchievementProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` id: []const u8 `
    ///
    pub fn ResetAchievementProgress(self: ?*anyopaque, id: []const u8) QtC.Attica__DeleteJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return qtc.Attica__Provider_ResetAchievementProgress(@ptrCast(self), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#postActivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` message: []const u8 `
    ///
    pub fn PostActivity(self: ?*anyopaque, message: []const u8) QtC.Attica__PostJob {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return qtc.Attica__Provider_PostActivity(@ptrCast(self), message_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#createProject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` project: QtC.Attica__Project `
    ///
    pub fn CreateProject(self: ?*anyopaque, project: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_CreateProject(@ptrCast(self), @ptrCast(project));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deleteProject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` project: QtC.Attica__Project `
    ///
    pub fn DeleteProject(self: ?*anyopaque, project: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_DeleteProject(@ptrCast(self), @ptrCast(project));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#editProject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` project: QtC.Attica__Project `
    ///
    pub fn EditProject(self: ?*anyopaque, project: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_EditProject(@ptrCast(self), @ptrCast(project));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#savePublisherField)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` project: QtC.Attica__Project `
    ///
    /// ` field: QtC.Attica__PublisherField `
    ///
    pub fn SavePublisherField(self: ?*anyopaque, project: ?*anyopaque, field: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_SavePublisherField(@ptrCast(self), @ptrCast(project), @ptrCast(field));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#publishBuildJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` buildjob: QtC.Attica__BuildServiceJob `
    ///
    /// ` publisher: QtC.Attica__Publisher `
    ///
    pub fn PublishBuildJob(self: ?*anyopaque, buildjob: ?*anyopaque, publisher: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_PublishBuildJob(@ptrCast(self), @ptrCast(buildjob), @ptrCast(publisher));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#createBuildServiceJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` job: QtC.Attica__BuildServiceJob `
    ///
    pub fn CreateBuildServiceJob(self: ?*anyopaque, job: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_CreateBuildServiceJob(@ptrCast(self), @ptrCast(job));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#cancelBuildServiceJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` job: QtC.Attica__BuildServiceJob `
    ///
    pub fn CancelBuildServiceJob(self: ?*anyopaque, job: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_CancelBuildServiceJob(@ptrCast(self), @ptrCast(job));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deleteRemoteAccount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` id: []const u8 `
    ///
    pub fn DeleteRemoteAccount(self: ?*anyopaque, id: []const u8) QtC.Attica__PostJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return qtc.Attica__Provider_DeleteRemoteAccount(@ptrCast(self), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#createRemoteAccount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` account: QtC.Attica__RemoteAccount `
    ///
    pub fn CreateRemoteAccount(self: ?*anyopaque, account: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_CreateRemoteAccount(@ptrCast(self), @ptrCast(account));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#editRemoteAccount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` account: QtC.Attica__RemoteAccount `
    ///
    pub fn EditRemoteAccount(self: ?*anyopaque, account: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_EditRemoteAccount(@ptrCast(self), @ptrCast(account));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#uploadTarballToBuildService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` projectId: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` payload: []u8 `
    ///
    pub fn UploadTarballToBuildService(self: ?*anyopaque, projectId: []const u8, fileName: []const u8, payload: []u8) QtC.Attica__PostJob {
        const projectId_str = qtc.libqt_string{
            .len = projectId.len,
            .data = projectId.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const payload_str = qtc.libqt_string{
            .len = payload.len,
            .data = payload.ptr,
        };
        return qtc.Attica__Provider_UploadTarballToBuildService(@ptrCast(self), projectId_str, fileName_str, payload_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#voteForContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    /// ` rating: u32 `
    ///
    pub fn VoteForContent(self: ?*anyopaque, contentId: []const u8, rating: u32) QtC.Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return qtc.Attica__Provider_VoteForContent(@ptrCast(self), contentId_str, @intCast(rating));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deleteContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    pub fn DeleteContent(self: ?*anyopaque, contentId: []const u8) QtC.Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return qtc.Attica__Provider_DeleteContent(@ptrCast(self), contentId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setDownloadFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` payload: QtC.QIODevice `
    ///
    pub fn SetDownloadFile(self: ?*anyopaque, contentId: []const u8, fileName: []const u8, payload: ?*anyopaque) QtC.Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.Attica__Provider_SetDownloadFile(@ptrCast(self), contentId_str, fileName_str, @ptrCast(payload));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setDownloadFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` payload: []u8 `
    ///
    pub fn SetDownloadFile2(self: ?*anyopaque, contentId: []const u8, fileName: []const u8, payload: []u8) QtC.Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const payload_str = qtc.libqt_string{
            .len = payload.len,
            .data = payload.ptr,
        };
        return qtc.Attica__Provider_SetDownloadFile2(@ptrCast(self), contentId_str, fileName_str, payload_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deleteDownloadFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    pub fn DeleteDownloadFile(self: ?*anyopaque, contentId: []const u8) QtC.Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return qtc.Attica__Provider_DeleteDownloadFile(@ptrCast(self), contentId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setPreviewImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    /// ` previewId: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` image: []u8 `
    ///
    pub fn SetPreviewImage(self: ?*anyopaque, contentId: []const u8, previewId: []const u8, fileName: []const u8, image: []u8) QtC.Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        const previewId_str = qtc.libqt_string{
            .len = previewId.len,
            .data = previewId.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const image_str = qtc.libqt_string{
            .len = image.len,
            .data = image.ptr,
        };
        return qtc.Attica__Provider_SetPreviewImage(@ptrCast(self), contentId_str, previewId_str, fileName_str, image_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deletePreviewImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    /// ` previewId: []const u8 `
    ///
    pub fn DeletePreviewImage(self: ?*anyopaque, contentId: []const u8, previewId: []const u8) QtC.Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        const previewId_str = qtc.libqt_string{
            .len = previewId.len,
            .data = previewId.ptr,
        };
        return qtc.Attica__Provider_DeletePreviewImage(@ptrCast(self), contentId_str, previewId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#voteForComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` id: []const u8 `
    ///
    /// ` rating: u32 `
    ///
    pub fn VoteForComment(self: ?*anyopaque, id: []const u8, rating: u32) QtC.Attica__PostJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return qtc.Attica__Provider_VoteForComment(@ptrCast(self), id_str, @intCast(rating));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#becomeFan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    pub fn BecomeFan(self: ?*anyopaque, contentId: []const u8) QtC.Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return qtc.Attica__Provider_BecomeFan(@ptrCast(self), contentId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#postTopic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` forumId: []const u8 `
    ///
    /// ` subject: []const u8 `
    ///
    /// ` content: []const u8 `
    ///
    pub fn PostTopic(self: ?*anyopaque, forumId: []const u8, subject: []const u8, content: []const u8) QtC.Attica__PostJob {
        const forumId_str = qtc.libqt_string{
            .len = forumId.len,
            .data = forumId.ptr,
        };
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        const content_str = qtc.libqt_string{
            .len = content.len,
            .data = content.ptr,
        };
        return qtc.Attica__Provider_PostTopic(@ptrCast(self), forumId_str, subject_str, content_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#getRegisterAccountUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetRegisterAccountUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_GetRegisterAccountUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.GetRegisterAccountUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#postLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` latitude: f64 `
    ///
    /// ` longitude: f64 `
    ///
    /// ` city: []const u8 `
    ///
    pub fn PostLocation3(self: ?*anyopaque, latitude: f64, longitude: f64, city: []const u8) QtC.Attica__PostJob {
        const city_str = qtc.libqt_string{
            .len = city.len,
            .data = city.ptr,
        };
        return qtc.Attica__Provider_PostLocation3(@ptrCast(self), @floatCast(latitude), @floatCast(longitude), city_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#postLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    /// ` latitude: f64 `
    ///
    /// ` longitude: f64 `
    ///
    /// ` city: []const u8 `
    ///
    /// ` country: []const u8 `
    ///
    pub fn PostLocation4(self: ?*anyopaque, latitude: f64, longitude: f64, city: []const u8, country: []const u8) QtC.Attica__PostJob {
        const city_str = qtc.libqt_string{
            .len = city.len,
            .data = city.ptr,
        };
        const country_str = qtc.libqt_string{
            .len = country.len,
            .data = country.ptr,
        };
        return qtc.Attica__Provider_PostLocation4(@ptrCast(self), @floatCast(latitude), @floatCast(longitude), city_str, country_str);
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Attica__Provider `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Provider_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/attica-provider.html#public-types)
pub const enums = struct {
    pub const SortMode = enum {
        pub const Newest: i32 = 0;
        pub const Alphabetical: i32 = 1;
        pub const Rating: i32 = 2;
        pub const Downloads: i32 = 3;
    };
};
