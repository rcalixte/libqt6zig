const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Attica__Achievement = @import("libqt6").Attica__Achievement;
const Attica__BuildServiceJob = @import("libqt6").Attica__BuildServiceJob;
const Attica__DeleteJob = @import("libqt6").Attica__DeleteJob;
const Attica__Message = @import("libqt6").Attica__Message;
const Attica__PostJob = @import("libqt6").Attica__PostJob;
const Attica__Project = @import("libqt6").Attica__Project;
const Attica__Publisher = @import("libqt6").Attica__Publisher;
const Attica__PublisherField = @import("libqt6").Attica__PublisherField;
const Attica__PutJob = @import("libqt6").Attica__PutJob;
const Attica__RemoteAccount = @import("libqt6").Attica__RemoteAccount;
const QDateTime = @import("libqt6").QDateTime;
const QIODevice = @import("libqt6").QIODevice;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-provider.html)
pub const Attica__Provider = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-provider.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Provider,

    pub const _is_Attica__Provider = {};

    /// New constructs a new Attica::Provider object.
    ///
    pub fn New() Attica__Provider {
        return .{ .ptr = qtc.Attica__Provider_new() };
    }

    /// New2 constructs a new Attica::Provider object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Provider `
    ///
    pub fn New2(other: anytype) Attica__Provider {
        comptime _ = @TypeOf(other)._is_Attica__Provider;
        return .{ .ptr = qtc.Attica__Provider_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` other: Attica__Provider `
    ///
    pub fn OperatorAssign(self: Attica__Provider, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Provider;
        qtc.Attica__Provider_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn IsValid(self: Attica__Provider) bool {
        return qtc.Attica__Provider_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn IsEnabled(self: Attica__Provider) bool {
        return qtc.Attica__Provider_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: Attica__Provider, enabled: bool) void {
        qtc.Attica__Provider_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setAdditionalAgentInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` additionalInformation: []const u8 `
    ///
    pub fn SetAdditionalAgentInformation(self: Attica__Provider, additionalInformation: []const u8) void {
        const additionalInformation_str = qtc.libqt_string{
            .len = additionalInformation.len,
            .data = additionalInformation.ptr,
        };
        qtc.Attica__Provider_SetAdditionalAgentInformation(@ptrCast(self.ptr), additionalInformation_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#additionalAgentInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AdditionalAgentInformation(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_AdditionalAgentInformation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__provider.AdditionalAgentInformation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#baseUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn BaseUrl(self: Attica__Provider) QUrl {
        return .{ .ptr = qtc.Attica__Provider_BaseUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__provider.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn Icon(self: Attica__Provider) QUrl {
        return .{ .ptr = qtc.Attica__Provider_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasPersonService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn HasPersonService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasPersonService(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#personServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PersonServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_PersonServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__provider.PersonServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasFriendService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn HasFriendService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasFriendService(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#friendServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FriendServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_FriendServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__provider.FriendServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasMessageService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn HasMessageService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasMessageService(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#messageServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MessageServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_MessageServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__provider.MessageServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasAchievementService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn HasAchievementService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasAchievementService(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#achievementServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AchievementServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_AchievementServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__provider.AchievementServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasActivityService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn HasActivityService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasActivityService(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#activityServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActivityServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_ActivityServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__provider.ActivityServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasContentService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn HasContentService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasContentService(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#contentServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContentServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_ContentServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__provider.ContentServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasFanService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn HasFanService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasFanService(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#fanServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FanServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_FanServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__provider.FanServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasForumService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn HasForumService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasForumService(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#forumServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ForumServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_ForumServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__provider.ForumServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasKnowledgebaseService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn HasKnowledgebaseService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasKnowledgebaseService(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#knowledgebaseServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn KnowledgebaseServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_KnowledgebaseServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__provider.KnowledgebaseServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasCommentService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn HasCommentService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasCommentService(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#commentServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CommentServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_CommentServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__provider.CommentServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn HasCredentials(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasCredentials(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn HasCredentials2(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasCredentials2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#loadCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn LoadCredentials(self: Attica__Provider, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__Provider_LoadCredentials(@ptrCast(self.ptr), user_str, password_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#saveCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn SaveCredentials(self: Attica__Provider, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__Provider_SaveCredentials(@ptrCast(self.ptr), user_str, password_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#checkLogin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn CheckLogin(self: Attica__Provider, user: []const u8, password: []const u8) Attica__PostJob {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_CheckLogin(@ptrCast(self.ptr), user_str, password_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#registerAccount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
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
    pub fn RegisterAccount(self: Attica__Provider, id: []const u8, password: []const u8, mail: []const u8, firstName: []const u8, lastName: []const u8) Attica__PostJob {
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
        return .{ .ptr = qtc.Attica__Provider_RegisterAccount(@ptrCast(self.ptr), id_str, password_str, mail_str, firstName_str, lastName_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#postLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` latitude: f64 `
    ///
    /// ` longitude: f64 `
    ///
    pub fn PostLocation(self: Attica__Provider, latitude: f64, longitude: f64) Attica__PostJob {
        return .{ .ptr = qtc.Attica__Provider_PostLocation(@ptrCast(self.ptr), @bitCast(latitude), @bitCast(longitude)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setPrivateData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` app: []const u8 `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetPrivateData(self: Attica__Provider, app: []const u8, key: []const u8, value: []const u8) Attica__PostJob {
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
        return .{ .ptr = qtc.Attica__Provider_SetPrivateData(@ptrCast(self.ptr), app_str, key_str, value_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#inviteFriend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` to: []const u8 `
    ///
    /// ` message: []const u8 `
    ///
    pub fn InviteFriend(self: Attica__Provider, to: []const u8, message: []const u8) Attica__PostJob {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_InviteFriend(@ptrCast(self.ptr), to_str, message_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#approveFriendship)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` to: []const u8 `
    ///
    pub fn ApproveFriendship(self: Attica__Provider, to: []const u8) Attica__PostJob {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_ApproveFriendship(@ptrCast(self.ptr), to_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#declineFriendship)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` to: []const u8 `
    ///
    pub fn DeclineFriendship(self: Attica__Provider, to: []const u8) Attica__PostJob {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_DeclineFriendship(@ptrCast(self.ptr), to_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#cancelFriendship)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` to: []const u8 `
    ///
    pub fn CancelFriendship(self: Attica__Provider, to: []const u8) Attica__PostJob {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_CancelFriendship(@ptrCast(self.ptr), to_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#postMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` message: Attica__Message `
    ///
    pub fn PostMessage(self: Attica__Provider, message: anytype) Attica__PostJob {
        comptime _ = @TypeOf(message)._is_Attica__Message;
        return .{ .ptr = qtc.Attica__Provider_PostMessage(@ptrCast(self.ptr), @ptrCast(message.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#editAchievement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    /// ` achievementId: []const u8 `
    ///
    /// ` achievement: Attica__Achievement `
    ///
    pub fn EditAchievement(self: Attica__Provider, contentId: []const u8, achievementId: []const u8, achievement: anytype) Attica__PutJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        const achievementId_str = qtc.libqt_string{
            .len = achievementId.len,
            .data = achievementId.ptr,
        };
        comptime _ = @TypeOf(achievement)._is_Attica__Achievement;
        return .{ .ptr = qtc.Attica__Provider_EditAchievement(@ptrCast(self.ptr), contentId_str, achievementId_str, @ptrCast(achievement.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deleteAchievement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    /// ` achievementId: []const u8 `
    ///
    pub fn DeleteAchievement(self: Attica__Provider, contentId: []const u8, achievementId: []const u8) Attica__DeleteJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        const achievementId_str = qtc.libqt_string{
            .len = achievementId.len,
            .data = achievementId.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_DeleteAchievement(@ptrCast(self.ptr), contentId_str, achievementId_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setAchievementProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` id: []const u8 `
    ///
    /// ` progress: QVariant `
    ///
    /// ` timestamp: QDateTime `
    ///
    pub fn SetAchievementProgress(self: Attica__Provider, id: []const u8, progress: anytype, timestamp: anytype) Attica__PostJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        comptime _ = @TypeOf(progress)._is_QVariant;
        comptime _ = @TypeOf(timestamp)._is_QDateTime;
        return .{ .ptr = qtc.Attica__Provider_SetAchievementProgress(@ptrCast(self.ptr), id_str, @ptrCast(progress.ptr), @ptrCast(timestamp.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#resetAchievementProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` id: []const u8 `
    ///
    pub fn ResetAchievementProgress(self: Attica__Provider, id: []const u8) Attica__DeleteJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_ResetAchievementProgress(@ptrCast(self.ptr), id_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#postActivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` message: []const u8 `
    ///
    pub fn PostActivity(self: Attica__Provider, message: []const u8) Attica__PostJob {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_PostActivity(@ptrCast(self.ptr), message_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#createProject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` project: Attica__Project `
    ///
    pub fn CreateProject(self: Attica__Provider, project: anytype) Attica__PostJob {
        comptime _ = @TypeOf(project)._is_Attica__Project;
        return .{ .ptr = qtc.Attica__Provider_CreateProject(@ptrCast(self.ptr), @ptrCast(project.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deleteProject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` project: Attica__Project `
    ///
    pub fn DeleteProject(self: Attica__Provider, project: anytype) Attica__PostJob {
        comptime _ = @TypeOf(project)._is_Attica__Project;
        return .{ .ptr = qtc.Attica__Provider_DeleteProject(@ptrCast(self.ptr), @ptrCast(project.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#editProject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` project: Attica__Project `
    ///
    pub fn EditProject(self: Attica__Provider, project: anytype) Attica__PostJob {
        comptime _ = @TypeOf(project)._is_Attica__Project;
        return .{ .ptr = qtc.Attica__Provider_EditProject(@ptrCast(self.ptr), @ptrCast(project.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#savePublisherField)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` project: Attica__Project `
    ///
    /// ` field: Attica__PublisherField `
    ///
    pub fn SavePublisherField(self: Attica__Provider, project: anytype, field: anytype) Attica__PostJob {
        comptime _ = @TypeOf(project)._is_Attica__Project;
        comptime _ = @TypeOf(field)._is_Attica__PublisherField;
        return .{ .ptr = qtc.Attica__Provider_SavePublisherField(@ptrCast(self.ptr), @ptrCast(project.ptr), @ptrCast(field.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#publishBuildJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` buildjob: Attica__BuildServiceJob `
    ///
    /// ` publisher: Attica__Publisher `
    ///
    pub fn PublishBuildJob(self: Attica__Provider, buildjob: anytype, publisher: anytype) Attica__PostJob {
        comptime _ = @TypeOf(buildjob)._is_Attica__BuildServiceJob;
        comptime _ = @TypeOf(publisher)._is_Attica__Publisher;
        return .{ .ptr = qtc.Attica__Provider_PublishBuildJob(@ptrCast(self.ptr), @ptrCast(buildjob.ptr), @ptrCast(publisher.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#createBuildServiceJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` job: Attica__BuildServiceJob `
    ///
    pub fn CreateBuildServiceJob(self: Attica__Provider, job: anytype) Attica__PostJob {
        comptime _ = @TypeOf(job)._is_Attica__BuildServiceJob;
        return .{ .ptr = qtc.Attica__Provider_CreateBuildServiceJob(@ptrCast(self.ptr), @ptrCast(job.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#cancelBuildServiceJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` job: Attica__BuildServiceJob `
    ///
    pub fn CancelBuildServiceJob(self: Attica__Provider, job: anytype) Attica__PostJob {
        comptime _ = @TypeOf(job)._is_Attica__BuildServiceJob;
        return .{ .ptr = qtc.Attica__Provider_CancelBuildServiceJob(@ptrCast(self.ptr), @ptrCast(job.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deleteRemoteAccount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` id: []const u8 `
    ///
    pub fn DeleteRemoteAccount(self: Attica__Provider, id: []const u8) Attica__PostJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_DeleteRemoteAccount(@ptrCast(self.ptr), id_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#createRemoteAccount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` account: Attica__RemoteAccount `
    ///
    pub fn CreateRemoteAccount(self: Attica__Provider, account: anytype) Attica__PostJob {
        comptime _ = @TypeOf(account)._is_Attica__RemoteAccount;
        return .{ .ptr = qtc.Attica__Provider_CreateRemoteAccount(@ptrCast(self.ptr), @ptrCast(account.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#editRemoteAccount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` account: Attica__RemoteAccount `
    ///
    pub fn EditRemoteAccount(self: Attica__Provider, account: anytype) Attica__PostJob {
        comptime _ = @TypeOf(account)._is_Attica__RemoteAccount;
        return .{ .ptr = qtc.Attica__Provider_EditRemoteAccount(@ptrCast(self.ptr), @ptrCast(account.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#uploadTarballToBuildService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` projectId: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` payload: []u8 `
    ///
    pub fn UploadTarballToBuildService(self: Attica__Provider, projectId: []const u8, fileName: []const u8, payload: []u8) Attica__PostJob {
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
        return .{ .ptr = qtc.Attica__Provider_UploadTarballToBuildService(@ptrCast(self.ptr), projectId_str, fileName_str, payload_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#voteForContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    /// ` rating: u32 `
    ///
    pub fn VoteForContent(self: Attica__Provider, contentId: []const u8, rating: u32) Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_VoteForContent(@ptrCast(self.ptr), contentId_str, @bitCast(rating)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deleteContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    pub fn DeleteContent(self: Attica__Provider, contentId: []const u8) Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_DeleteContent(@ptrCast(self.ptr), contentId_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setDownloadFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` payload: QIODevice `
    ///
    pub fn SetDownloadFile(self: Attica__Provider, contentId: []const u8, fileName: []const u8, payload: anytype) Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(payload)._is_QIODevice;
        return .{ .ptr = qtc.Attica__Provider_SetDownloadFile(@ptrCast(self.ptr), contentId_str, fileName_str, @ptrCast(payload.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setDownloadFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` payload: []u8 `
    ///
    pub fn SetDownloadFile2(self: Attica__Provider, contentId: []const u8, fileName: []const u8, payload: []u8) Attica__PostJob {
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
        return .{ .ptr = qtc.Attica__Provider_SetDownloadFile2(@ptrCast(self.ptr), contentId_str, fileName_str, payload_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deleteDownloadFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    pub fn DeleteDownloadFile(self: Attica__Provider, contentId: []const u8) Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_DeleteDownloadFile(@ptrCast(self.ptr), contentId_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setPreviewImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    /// ` previewId: []const u8 `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` image: []u8 `
    ///
    pub fn SetPreviewImage(self: Attica__Provider, contentId: []const u8, previewId: []const u8, fileName: []const u8, image: []u8) Attica__PostJob {
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
        return .{ .ptr = qtc.Attica__Provider_SetPreviewImage(@ptrCast(self.ptr), contentId_str, previewId_str, fileName_str, image_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deletePreviewImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    /// ` previewId: []const u8 `
    ///
    pub fn DeletePreviewImage(self: Attica__Provider, contentId: []const u8, previewId: []const u8) Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        const previewId_str = qtc.libqt_string{
            .len = previewId.len,
            .data = previewId.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_DeletePreviewImage(@ptrCast(self.ptr), contentId_str, previewId_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#voteForComment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` id: []const u8 `
    ///
    /// ` rating: u32 `
    ///
    pub fn VoteForComment(self: Attica__Provider, id: []const u8, rating: u32) Attica__PostJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_VoteForComment(@ptrCast(self.ptr), id_str, @bitCast(rating)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#becomeFan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    pub fn BecomeFan(self: Attica__Provider, contentId: []const u8) Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_BecomeFan(@ptrCast(self.ptr), contentId_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#postTopic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` forumId: []const u8 `
    ///
    /// ` subject: []const u8 `
    ///
    /// ` content: []const u8 `
    ///
    pub fn PostTopic(self: Attica__Provider, forumId: []const u8, subject: []const u8, content: []const u8) Attica__PostJob {
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
        return .{ .ptr = qtc.Attica__Provider_PostTopic(@ptrCast(self.ptr), forumId_str, subject_str, content_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#getRegisterAccountUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetRegisterAccountUrl(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_GetRegisterAccountUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__provider.GetRegisterAccountUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#postLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` latitude: f64 `
    ///
    /// ` longitude: f64 `
    ///
    /// ` city: []const u8 `
    ///
    pub fn PostLocation3(self: Attica__Provider, latitude: f64, longitude: f64, city: []const u8) Attica__PostJob {
        const city_str = qtc.libqt_string{
            .len = city.len,
            .data = city.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_PostLocation3(@ptrCast(self.ptr), @bitCast(latitude), @bitCast(longitude), city_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#postLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` latitude: f64 `
    ///
    /// ` longitude: f64 `
    ///
    /// ` city: []const u8 `
    ///
    /// ` country: []const u8 `
    ///
    pub fn PostLocation4(self: Attica__Provider, latitude: f64, longitude: f64, city: []const u8, country: []const u8) Attica__PostJob {
        const city_str = qtc.libqt_string{
            .len = city.len,
            .data = city.ptr,
        };
        const country_str = qtc.libqt_string{
            .len = country.len,
            .data = country.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_PostLocation4(@ptrCast(self.ptr), @bitCast(latitude), @bitCast(longitude), city_str, country_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn Delete(self: Attica__Provider) void {
        qtc.Attica__Provider_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/attica-provider.html#public-types)
pub const enums = struct {
    pub const SortMode = enum(i32) {
        pub const Newest: i32 = 0;
        pub const Alphabetical: i32 = 1;
        pub const Rating: i32 = 2;
        pub const Downloads: i32 = 3;
    };
};
