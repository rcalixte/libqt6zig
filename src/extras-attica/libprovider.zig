const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-provider.html
pub const attica__provider = struct {
    /// New constructs a new Attica::Provider object.
    ///
    ///
    pub fn New() QtC.Attica__Provider {
        return qtc.Attica__Provider_new();
    }

    /// New2 constructs a new Attica::Provider object.
    ///
    /// ``` other: QtC.Attica__Provider ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__Provider {
        return qtc.Attica__Provider_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Provider, other: QtC.Attica__Provider ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Provider_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#isValid)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#isEnabled)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_IsEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#setEnabled)
    ///
    /// ``` self: QtC.Attica__Provider, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.Attica__Provider_SetEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#setAdditionalAgentInformation)
    ///
    /// ``` self: QtC.Attica__Provider, additionalInformation: []const u8 ```
    pub fn SetAdditionalAgentInformation(self: ?*anyopaque, additionalInformation: []const u8) void {
        const additionalInformation_str = qtc.libqt_string{
            .len = additionalInformation.len,
            .data = additionalInformation.ptr,
        };
        qtc.Attica__Provider_SetAdditionalAgentInformation(@ptrCast(self), additionalInformation_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#additionalAgentInformation)
    ///
    /// ``` self: QtC.Attica__Provider, allocator: std.mem.Allocator ```
    pub fn AdditionalAgentInformation(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Provider_AdditionalAgentInformation(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.AdditionalAgentInformation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#baseUrl)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn BaseUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__Provider_BaseUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#name)
    ///
    /// ``` self: QtC.Attica__Provider, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Provider_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#icon)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn Icon(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__Provider_Icon(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#hasPersonService)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn HasPersonService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasPersonService(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#personServiceVersion)
    ///
    /// ``` self: QtC.Attica__Provider, allocator: std.mem.Allocator ```
    pub fn PersonServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Provider_PersonServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.PersonServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#hasFriendService)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn HasFriendService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasFriendService(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#friendServiceVersion)
    ///
    /// ``` self: QtC.Attica__Provider, allocator: std.mem.Allocator ```
    pub fn FriendServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Provider_FriendServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.FriendServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#hasMessageService)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn HasMessageService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasMessageService(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#messageServiceVersion)
    ///
    /// ``` self: QtC.Attica__Provider, allocator: std.mem.Allocator ```
    pub fn MessageServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Provider_MessageServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.MessageServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#hasAchievementService)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn HasAchievementService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasAchievementService(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#achievementServiceVersion)
    ///
    /// ``` self: QtC.Attica__Provider, allocator: std.mem.Allocator ```
    pub fn AchievementServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Provider_AchievementServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.AchievementServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#hasActivityService)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn HasActivityService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasActivityService(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#activityServiceVersion)
    ///
    /// ``` self: QtC.Attica__Provider, allocator: std.mem.Allocator ```
    pub fn ActivityServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Provider_ActivityServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.ActivityServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#hasContentService)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn HasContentService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasContentService(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#contentServiceVersion)
    ///
    /// ``` self: QtC.Attica__Provider, allocator: std.mem.Allocator ```
    pub fn ContentServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Provider_ContentServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.ContentServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#hasFanService)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn HasFanService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasFanService(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#fanServiceVersion)
    ///
    /// ``` self: QtC.Attica__Provider, allocator: std.mem.Allocator ```
    pub fn FanServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Provider_FanServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.FanServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#hasForumService)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn HasForumService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasForumService(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#forumServiceVersion)
    ///
    /// ``` self: QtC.Attica__Provider, allocator: std.mem.Allocator ```
    pub fn ForumServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Provider_ForumServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.ForumServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#hasKnowledgebaseService)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn HasKnowledgebaseService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasKnowledgebaseService(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#knowledgebaseServiceVersion)
    ///
    /// ``` self: QtC.Attica__Provider, allocator: std.mem.Allocator ```
    pub fn KnowledgebaseServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Provider_KnowledgebaseServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.KnowledgebaseServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#hasCommentService)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn HasCommentService(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasCommentService(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#commentServiceVersion)
    ///
    /// ``` self: QtC.Attica__Provider, allocator: std.mem.Allocator ```
    pub fn CommentServiceVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Provider_CommentServiceVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.CommentServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#hasCredentials)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn HasCredentials(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasCredentials(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#hasCredentials)
    ///
    /// ``` self: QtC.Attica__Provider ```
    pub fn HasCredentials2(self: ?*anyopaque) bool {
        return qtc.Attica__Provider_HasCredentials2(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#loadCredentials)
    ///
    /// ``` self: QtC.Attica__Provider, user: []const u8, password: []const u8 ```
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

    /// [Qt documentation](https://api.kde.org/attica-provider.html#saveCredentials)
    ///
    /// ``` self: QtC.Attica__Provider, user: []const u8, password: []const u8 ```
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

    /// [Qt documentation](https://api.kde.org/attica-provider.html#checkLogin)
    ///
    /// ``` self: QtC.Attica__Provider, user: []const u8, password: []const u8 ```
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

    /// [Qt documentation](https://api.kde.org/attica-provider.html#registerAccount)
    ///
    /// ``` self: QtC.Attica__Provider, id: []const u8, password: []const u8, mail: []const u8, firstName: []const u8, lastName: []const u8 ```
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

    /// [Qt documentation](https://api.kde.org/attica-provider.html#postLocation)
    ///
    /// ``` self: QtC.Attica__Provider, latitude: f64, longitude: f64 ```
    pub fn PostLocation(self: ?*anyopaque, latitude: f64, longitude: f64) QtC.Attica__PostJob {
        return qtc.Attica__Provider_PostLocation(@ptrCast(self), @floatCast(latitude), @floatCast(longitude));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#setPrivateData)
    ///
    /// ``` self: QtC.Attica__Provider, app: []const u8, key: []const u8, value: []const u8 ```
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

    /// [Qt documentation](https://api.kde.org/attica-provider.html#inviteFriend)
    ///
    /// ``` self: QtC.Attica__Provider, to: []const u8, message: []const u8 ```
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

    /// [Qt documentation](https://api.kde.org/attica-provider.html#approveFriendship)
    ///
    /// ``` self: QtC.Attica__Provider, to: []const u8 ```
    pub fn ApproveFriendship(self: ?*anyopaque, to: []const u8) QtC.Attica__PostJob {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        return qtc.Attica__Provider_ApproveFriendship(@ptrCast(self), to_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#declineFriendship)
    ///
    /// ``` self: QtC.Attica__Provider, to: []const u8 ```
    pub fn DeclineFriendship(self: ?*anyopaque, to: []const u8) QtC.Attica__PostJob {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        return qtc.Attica__Provider_DeclineFriendship(@ptrCast(self), to_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#cancelFriendship)
    ///
    /// ``` self: QtC.Attica__Provider, to: []const u8 ```
    pub fn CancelFriendship(self: ?*anyopaque, to: []const u8) QtC.Attica__PostJob {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        return qtc.Attica__Provider_CancelFriendship(@ptrCast(self), to_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#postMessage)
    ///
    /// ``` self: QtC.Attica__Provider, message: QtC.Attica__Message ```
    pub fn PostMessage(self: ?*anyopaque, message: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_PostMessage(@ptrCast(self), @ptrCast(message));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#editAchievement)
    ///
    /// ``` self: QtC.Attica__Provider, contentId: []const u8, achievementId: []const u8, achievement: QtC.Attica__Achievement ```
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

    /// [Qt documentation](https://api.kde.org/attica-provider.html#deleteAchievement)
    ///
    /// ``` self: QtC.Attica__Provider, contentId: []const u8, achievementId: []const u8 ```
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

    /// [Qt documentation](https://api.kde.org/attica-provider.html#setAchievementProgress)
    ///
    /// ``` self: QtC.Attica__Provider, id: []const u8, progress: QtC.QVariant, timestamp: QtC.QDateTime ```
    pub fn SetAchievementProgress(self: ?*anyopaque, id: []const u8, progress: ?*anyopaque, timestamp: ?*anyopaque) QtC.Attica__PostJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return qtc.Attica__Provider_SetAchievementProgress(@ptrCast(self), id_str, @ptrCast(progress), @ptrCast(timestamp));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#resetAchievementProgress)
    ///
    /// ``` self: QtC.Attica__Provider, id: []const u8 ```
    pub fn ResetAchievementProgress(self: ?*anyopaque, id: []const u8) QtC.Attica__DeleteJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return qtc.Attica__Provider_ResetAchievementProgress(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#postActivity)
    ///
    /// ``` self: QtC.Attica__Provider, message: []const u8 ```
    pub fn PostActivity(self: ?*anyopaque, message: []const u8) QtC.Attica__PostJob {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return qtc.Attica__Provider_PostActivity(@ptrCast(self), message_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#createProject)
    ///
    /// ``` self: QtC.Attica__Provider, project: QtC.Attica__Project ```
    pub fn CreateProject(self: ?*anyopaque, project: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_CreateProject(@ptrCast(self), @ptrCast(project));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#deleteProject)
    ///
    /// ``` self: QtC.Attica__Provider, project: QtC.Attica__Project ```
    pub fn DeleteProject(self: ?*anyopaque, project: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_DeleteProject(@ptrCast(self), @ptrCast(project));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#editProject)
    ///
    /// ``` self: QtC.Attica__Provider, project: QtC.Attica__Project ```
    pub fn EditProject(self: ?*anyopaque, project: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_EditProject(@ptrCast(self), @ptrCast(project));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#savePublisherField)
    ///
    /// ``` self: QtC.Attica__Provider, project: QtC.Attica__Project, field: QtC.Attica__PublisherField ```
    pub fn SavePublisherField(self: ?*anyopaque, project: ?*anyopaque, field: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_SavePublisherField(@ptrCast(self), @ptrCast(project), @ptrCast(field));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#publishBuildJob)
    ///
    /// ``` self: QtC.Attica__Provider, buildjob: QtC.Attica__BuildServiceJob, publisher: QtC.Attica__Publisher ```
    pub fn PublishBuildJob(self: ?*anyopaque, buildjob: ?*anyopaque, publisher: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_PublishBuildJob(@ptrCast(self), @ptrCast(buildjob), @ptrCast(publisher));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#createBuildServiceJob)
    ///
    /// ``` self: QtC.Attica__Provider, job: QtC.Attica__BuildServiceJob ```
    pub fn CreateBuildServiceJob(self: ?*anyopaque, job: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_CreateBuildServiceJob(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#cancelBuildServiceJob)
    ///
    /// ``` self: QtC.Attica__Provider, job: QtC.Attica__BuildServiceJob ```
    pub fn CancelBuildServiceJob(self: ?*anyopaque, job: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_CancelBuildServiceJob(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#deleteRemoteAccount)
    ///
    /// ``` self: QtC.Attica__Provider, id: []const u8 ```
    pub fn DeleteRemoteAccount(self: ?*anyopaque, id: []const u8) QtC.Attica__PostJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return qtc.Attica__Provider_DeleteRemoteAccount(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#createRemoteAccount)
    ///
    /// ``` self: QtC.Attica__Provider, account: QtC.Attica__RemoteAccount ```
    pub fn CreateRemoteAccount(self: ?*anyopaque, account: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_CreateRemoteAccount(@ptrCast(self), @ptrCast(account));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#editRemoteAccount)
    ///
    /// ``` self: QtC.Attica__Provider, account: QtC.Attica__RemoteAccount ```
    pub fn EditRemoteAccount(self: ?*anyopaque, account: ?*anyopaque) QtC.Attica__PostJob {
        return qtc.Attica__Provider_EditRemoteAccount(@ptrCast(self), @ptrCast(account));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#uploadTarballToBuildService)
    ///
    /// ``` self: QtC.Attica__Provider, projectId: []const u8, fileName: []const u8, payload: []u8 ```
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

    /// [Qt documentation](https://api.kde.org/attica-provider.html#voteForContent)
    ///
    /// ``` self: QtC.Attica__Provider, contentId: []const u8, rating: u32 ```
    pub fn VoteForContent(self: ?*anyopaque, contentId: []const u8, rating: u32) QtC.Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return qtc.Attica__Provider_VoteForContent(@ptrCast(self), contentId_str, @intCast(rating));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#deleteContent)
    ///
    /// ``` self: QtC.Attica__Provider, contentId: []const u8 ```
    pub fn DeleteContent(self: ?*anyopaque, contentId: []const u8) QtC.Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return qtc.Attica__Provider_DeleteContent(@ptrCast(self), contentId_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#setDownloadFile)
    ///
    /// ``` self: QtC.Attica__Provider, contentId: []const u8, fileName: []const u8, payload: QtC.QIODevice ```
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

    /// [Qt documentation](https://api.kde.org/attica-provider.html#setDownloadFile)
    ///
    /// ``` self: QtC.Attica__Provider, contentId: []const u8, fileName: []const u8, payload: []u8 ```
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

    /// [Qt documentation](https://api.kde.org/attica-provider.html#deleteDownloadFile)
    ///
    /// ``` self: QtC.Attica__Provider, contentId: []const u8 ```
    pub fn DeleteDownloadFile(self: ?*anyopaque, contentId: []const u8) QtC.Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return qtc.Attica__Provider_DeleteDownloadFile(@ptrCast(self), contentId_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#setPreviewImage)
    ///
    /// ``` self: QtC.Attica__Provider, contentId: []const u8, previewId: []const u8, fileName: []const u8, image: []u8 ```
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

    /// [Qt documentation](https://api.kde.org/attica-provider.html#deletePreviewImage)
    ///
    /// ``` self: QtC.Attica__Provider, contentId: []const u8, previewId: []const u8 ```
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

    /// [Qt documentation](https://api.kde.org/attica-provider.html#voteForComment)
    ///
    /// ``` self: QtC.Attica__Provider, id: []const u8, rating: u32 ```
    pub fn VoteForComment(self: ?*anyopaque, id: []const u8, rating: u32) QtC.Attica__PostJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return qtc.Attica__Provider_VoteForComment(@ptrCast(self), id_str, @intCast(rating));
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#becomeFan)
    ///
    /// ``` self: QtC.Attica__Provider, contentId: []const u8 ```
    pub fn BecomeFan(self: ?*anyopaque, contentId: []const u8) QtC.Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return qtc.Attica__Provider_BecomeFan(@ptrCast(self), contentId_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#postTopic)
    ///
    /// ``` self: QtC.Attica__Provider, forumId: []const u8, subject: []const u8, content: []const u8 ```
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

    /// [Qt documentation](https://api.kde.org/attica-provider.html#getRegisterAccountUrl)
    ///
    /// ``` self: QtC.Attica__Provider, allocator: std.mem.Allocator ```
    pub fn GetRegisterAccountUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Provider_GetRegisterAccountUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::provider.GetRegisterAccountUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#postLocation)
    ///
    /// ``` self: QtC.Attica__Provider, latitude: f64, longitude: f64, city: []const u8 ```
    pub fn PostLocation3(self: ?*anyopaque, latitude: f64, longitude: f64, city: []const u8) QtC.Attica__PostJob {
        const city_str = qtc.libqt_string{
            .len = city.len,
            .data = city.ptr,
        };
        return qtc.Attica__Provider_PostLocation3(@ptrCast(self), @floatCast(latitude), @floatCast(longitude), city_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-provider.html#postLocation)
    ///
    /// ``` self: QtC.Attica__Provider, latitude: f64, longitude: f64, city: []const u8, country: []const u8 ```
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
    /// ``` self: QtC.Attica__Provider ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Provider_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/attica-provider.html#types
pub const enums = struct {
    pub const SortMode = enum {
        pub const Newest: i32 = 0;
        pub const Alphabetical: i32 = 1;
        pub const Rating: i32 = 2;
        pub const Downloads: i32 = 3;
    };
};
