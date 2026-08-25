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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Provider object in C++ memory
    ///
    pub fn new() Attica__Provider {
        return .{ .ptr = qtc.Attica__Provider_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Provider object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Provider `
    ///
    pub fn new2(other: anytype) Attica__Provider {
        comptime _ = @TypeOf(other)._is_Attica__Provider;
        return .{ .ptr = qtc.Attica__Provider_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` other: Attica__Provider `
    ///
    pub fn operatorAssign(self: Attica__Provider, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Provider;
        qtc.Attica__Provider_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn isValid(self: Attica__Provider) bool {
        return qtc.Attica__Provider_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn isEnabled(self: Attica__Provider) bool {
        return qtc.Attica__Provider_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: Attica__Provider, enabled: bool) void {
        qtc.Attica__Provider_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setAdditionalAgentInformation` instead
    ///
    pub const SetAdditionalAgentInformation = setAdditionalAgentInformation;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#setAdditionalAgentInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` additionalInformation: []const u8 `
    ///
    pub fn setAdditionalAgentInformation(self: Attica__Provider, additionalInformation: []const u8) void {
        const additionalInformation_str = qtc.libqt_string{
            .len = additionalInformation.len,
            .data = additionalInformation.ptr,
        };
        qtc.Attica__Provider_SetAdditionalAgentInformation(@ptrCast(self.ptr), additionalInformation_str);
    }

    /// ### DEPRECATED: Use `additionalAgentInformation` instead
    ///
    pub const AdditionalAgentInformation = additionalAgentInformation;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#additionalAgentInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn additionalAgentInformation(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_AdditionalAgentInformation(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Provider.additionalAgentInformation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `baseUrl` instead
    ///
    pub const BaseUrl = baseUrl;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#baseUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn baseUrl(self: Attica__Provider) QUrl {
        return .{ .ptr = qtc.Attica__Provider_BaseUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Provider.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn icon(self: Attica__Provider) QUrl {
        return .{ .ptr = qtc.Attica__Provider_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasPersonService` instead
    ///
    pub const HasPersonService = hasPersonService;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasPersonService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn hasPersonService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasPersonService(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `personServiceVersion` instead
    ///
    pub const PersonServiceVersion = personServiceVersion;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#personServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn personServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_PersonServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Provider.personServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasFriendService` instead
    ///
    pub const HasFriendService = hasFriendService;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasFriendService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn hasFriendService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasFriendService(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `friendServiceVersion` instead
    ///
    pub const FriendServiceVersion = friendServiceVersion;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#friendServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn friendServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_FriendServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Provider.friendServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasMessageService` instead
    ///
    pub const HasMessageService = hasMessageService;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasMessageService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn hasMessageService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasMessageService(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `messageServiceVersion` instead
    ///
    pub const MessageServiceVersion = messageServiceVersion;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#messageServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn messageServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_MessageServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Provider.messageServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasAchievementService` instead
    ///
    pub const HasAchievementService = hasAchievementService;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasAchievementService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn hasAchievementService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasAchievementService(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `achievementServiceVersion` instead
    ///
    pub const AchievementServiceVersion = achievementServiceVersion;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#achievementServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn achievementServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_AchievementServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Provider.achievementServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasActivityService` instead
    ///
    pub const HasActivityService = hasActivityService;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasActivityService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn hasActivityService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasActivityService(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activityServiceVersion` instead
    ///
    pub const ActivityServiceVersion = activityServiceVersion;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#activityServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn activityServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_ActivityServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Provider.activityServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasContentService` instead
    ///
    pub const HasContentService = hasContentService;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasContentService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn hasContentService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasContentService(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contentServiceVersion` instead
    ///
    pub const ContentServiceVersion = contentServiceVersion;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#contentServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contentServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_ContentServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Provider.contentServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasFanService` instead
    ///
    pub const HasFanService = hasFanService;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasFanService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn hasFanService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasFanService(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fanServiceVersion` instead
    ///
    pub const FanServiceVersion = fanServiceVersion;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#fanServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fanServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_FanServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Provider.fanServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasForumService` instead
    ///
    pub const HasForumService = hasForumService;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasForumService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn hasForumService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasForumService(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `forumServiceVersion` instead
    ///
    pub const ForumServiceVersion = forumServiceVersion;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#forumServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn forumServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_ForumServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Provider.forumServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasKnowledgebaseService` instead
    ///
    pub const HasKnowledgebaseService = hasKnowledgebaseService;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasKnowledgebaseService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn hasKnowledgebaseService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasKnowledgebaseService(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `knowledgebaseServiceVersion` instead
    ///
    pub const KnowledgebaseServiceVersion = knowledgebaseServiceVersion;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#knowledgebaseServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn knowledgebaseServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_KnowledgebaseServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Provider.knowledgebaseServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasCommentService` instead
    ///
    pub const HasCommentService = hasCommentService;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasCommentService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn hasCommentService(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasCommentService(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `commentServiceVersion` instead
    ///
    pub const CommentServiceVersion = commentServiceVersion;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#commentServiceVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn commentServiceVersion(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_CommentServiceVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Provider.commentServiceVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasCredentials` instead
    ///
    pub const HasCredentials = hasCredentials;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn hasCredentials(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasCredentials(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasCredentials2` instead
    ///
    pub const HasCredentials2 = hasCredentials2;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#hasCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn hasCredentials2(self: Attica__Provider) bool {
        return qtc.Attica__Provider_HasCredentials2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `loadCredentials` instead
    ///
    pub const LoadCredentials = loadCredentials;

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
    pub fn loadCredentials(self: Attica__Provider, user: []const u8, password: []const u8) bool {
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

    /// ### DEPRECATED: Use `saveCredentials` instead
    ///
    pub const SaveCredentials = saveCredentials;

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
    pub fn saveCredentials(self: Attica__Provider, user: []const u8, password: []const u8) bool {
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

    /// ### DEPRECATED: Use `checkLogin` instead
    ///
    pub const CheckLogin = checkLogin;

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
    pub fn checkLogin(self: Attica__Provider, user: []const u8, password: []const u8) Attica__PostJob {
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

    /// ### DEPRECATED: Use `registerAccount` instead
    ///
    pub const RegisterAccount = registerAccount;

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
    pub fn registerAccount(self: Attica__Provider, id: []const u8, password: []const u8, mail: []const u8, firstName: []const u8, lastName: []const u8) Attica__PostJob {
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

    /// ### DEPRECATED: Use `postLocation` instead
    ///
    pub const PostLocation = postLocation;

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
    pub fn postLocation(self: Attica__Provider, latitude: f64, longitude: f64) Attica__PostJob {
        return .{ .ptr = qtc.Attica__Provider_PostLocation(@ptrCast(self.ptr), @bitCast(latitude), @bitCast(longitude)) };
    }

    /// ### DEPRECATED: Use `setPrivateData` instead
    ///
    pub const SetPrivateData = setPrivateData;

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
    pub fn setPrivateData(self: Attica__Provider, app: []const u8, key: []const u8, value: []const u8) Attica__PostJob {
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

    /// ### DEPRECATED: Use `inviteFriend` instead
    ///
    pub const InviteFriend = inviteFriend;

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
    pub fn inviteFriend(self: Attica__Provider, to: []const u8, message: []const u8) Attica__PostJob {
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

    /// ### DEPRECATED: Use `approveFriendship` instead
    ///
    pub const ApproveFriendship = approveFriendship;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#approveFriendship)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` to: []const u8 `
    ///
    pub fn approveFriendship(self: Attica__Provider, to: []const u8) Attica__PostJob {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_ApproveFriendship(@ptrCast(self.ptr), to_str) };
    }

    /// ### DEPRECATED: Use `declineFriendship` instead
    ///
    pub const DeclineFriendship = declineFriendship;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#declineFriendship)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` to: []const u8 `
    ///
    pub fn declineFriendship(self: Attica__Provider, to: []const u8) Attica__PostJob {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_DeclineFriendship(@ptrCast(self.ptr), to_str) };
    }

    /// ### DEPRECATED: Use `cancelFriendship` instead
    ///
    pub const CancelFriendship = cancelFriendship;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#cancelFriendship)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` to: []const u8 `
    ///
    pub fn cancelFriendship(self: Attica__Provider, to: []const u8) Attica__PostJob {
        const to_str = qtc.libqt_string{
            .len = to.len,
            .data = to.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_CancelFriendship(@ptrCast(self.ptr), to_str) };
    }

    /// ### DEPRECATED: Use `postMessage` instead
    ///
    pub const PostMessage = postMessage;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#postMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` message: Attica__Message `
    ///
    pub fn postMessage(self: Attica__Provider, message: anytype) Attica__PostJob {
        comptime _ = @TypeOf(message)._is_Attica__Message;
        return .{ .ptr = qtc.Attica__Provider_PostMessage(@ptrCast(self.ptr), @ptrCast(message.ptr)) };
    }

    /// ### DEPRECATED: Use `editAchievement` instead
    ///
    pub const EditAchievement = editAchievement;

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
    pub fn editAchievement(self: Attica__Provider, contentId: []const u8, achievementId: []const u8, achievement: anytype) Attica__PutJob {
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

    /// ### DEPRECATED: Use `deleteAchievement` instead
    ///
    pub const DeleteAchievement = deleteAchievement;

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
    pub fn deleteAchievement(self: Attica__Provider, contentId: []const u8, achievementId: []const u8) Attica__DeleteJob {
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

    /// ### DEPRECATED: Use `setAchievementProgress` instead
    ///
    pub const SetAchievementProgress = setAchievementProgress;

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
    pub fn setAchievementProgress(self: Attica__Provider, id: []const u8, progress: anytype, timestamp: anytype) Attica__PostJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        comptime _ = @TypeOf(progress)._is_QVariant;
        comptime _ = @TypeOf(timestamp)._is_QDateTime;
        return .{ .ptr = qtc.Attica__Provider_SetAchievementProgress(@ptrCast(self.ptr), id_str, @ptrCast(progress.ptr), @ptrCast(timestamp.ptr)) };
    }

    /// ### DEPRECATED: Use `resetAchievementProgress` instead
    ///
    pub const ResetAchievementProgress = resetAchievementProgress;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#resetAchievementProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` id: []const u8 `
    ///
    pub fn resetAchievementProgress(self: Attica__Provider, id: []const u8) Attica__DeleteJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_ResetAchievementProgress(@ptrCast(self.ptr), id_str) };
    }

    /// ### DEPRECATED: Use `postActivity` instead
    ///
    pub const PostActivity = postActivity;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#postActivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` message: []const u8 `
    ///
    pub fn postActivity(self: Attica__Provider, message: []const u8) Attica__PostJob {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_PostActivity(@ptrCast(self.ptr), message_str) };
    }

    /// ### DEPRECATED: Use `createProject` instead
    ///
    pub const CreateProject = createProject;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#createProject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` project: Attica__Project `
    ///
    pub fn createProject(self: Attica__Provider, project: anytype) Attica__PostJob {
        comptime _ = @TypeOf(project)._is_Attica__Project;
        return .{ .ptr = qtc.Attica__Provider_CreateProject(@ptrCast(self.ptr), @ptrCast(project.ptr)) };
    }

    /// ### DEPRECATED: Use `deleteProject` instead
    ///
    pub const DeleteProject = deleteProject;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deleteProject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` project: Attica__Project `
    ///
    pub fn deleteProject(self: Attica__Provider, project: anytype) Attica__PostJob {
        comptime _ = @TypeOf(project)._is_Attica__Project;
        return .{ .ptr = qtc.Attica__Provider_DeleteProject(@ptrCast(self.ptr), @ptrCast(project.ptr)) };
    }

    /// ### DEPRECATED: Use `editProject` instead
    ///
    pub const EditProject = editProject;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#editProject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` project: Attica__Project `
    ///
    pub fn editProject(self: Attica__Provider, project: anytype) Attica__PostJob {
        comptime _ = @TypeOf(project)._is_Attica__Project;
        return .{ .ptr = qtc.Attica__Provider_EditProject(@ptrCast(self.ptr), @ptrCast(project.ptr)) };
    }

    /// ### DEPRECATED: Use `savePublisherField` instead
    ///
    pub const SavePublisherField = savePublisherField;

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
    pub fn savePublisherField(self: Attica__Provider, project: anytype, field: anytype) Attica__PostJob {
        comptime _ = @TypeOf(project)._is_Attica__Project;
        comptime _ = @TypeOf(field)._is_Attica__PublisherField;
        return .{ .ptr = qtc.Attica__Provider_SavePublisherField(@ptrCast(self.ptr), @ptrCast(project.ptr), @ptrCast(field.ptr)) };
    }

    /// ### DEPRECATED: Use `publishBuildJob` instead
    ///
    pub const PublishBuildJob = publishBuildJob;

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
    pub fn publishBuildJob(self: Attica__Provider, buildjob: anytype, publisher: anytype) Attica__PostJob {
        comptime _ = @TypeOf(buildjob)._is_Attica__BuildServiceJob;
        comptime _ = @TypeOf(publisher)._is_Attica__Publisher;
        return .{ .ptr = qtc.Attica__Provider_PublishBuildJob(@ptrCast(self.ptr), @ptrCast(buildjob.ptr), @ptrCast(publisher.ptr)) };
    }

    /// ### DEPRECATED: Use `createBuildServiceJob` instead
    ///
    pub const CreateBuildServiceJob = createBuildServiceJob;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#createBuildServiceJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` job: Attica__BuildServiceJob `
    ///
    pub fn createBuildServiceJob(self: Attica__Provider, job: anytype) Attica__PostJob {
        comptime _ = @TypeOf(job)._is_Attica__BuildServiceJob;
        return .{ .ptr = qtc.Attica__Provider_CreateBuildServiceJob(@ptrCast(self.ptr), @ptrCast(job.ptr)) };
    }

    /// ### DEPRECATED: Use `cancelBuildServiceJob` instead
    ///
    pub const CancelBuildServiceJob = cancelBuildServiceJob;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#cancelBuildServiceJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` job: Attica__BuildServiceJob `
    ///
    pub fn cancelBuildServiceJob(self: Attica__Provider, job: anytype) Attica__PostJob {
        comptime _ = @TypeOf(job)._is_Attica__BuildServiceJob;
        return .{ .ptr = qtc.Attica__Provider_CancelBuildServiceJob(@ptrCast(self.ptr), @ptrCast(job.ptr)) };
    }

    /// ### DEPRECATED: Use `deleteRemoteAccount` instead
    ///
    pub const DeleteRemoteAccount = deleteRemoteAccount;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deleteRemoteAccount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` id: []const u8 `
    ///
    pub fn deleteRemoteAccount(self: Attica__Provider, id: []const u8) Attica__PostJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_DeleteRemoteAccount(@ptrCast(self.ptr), id_str) };
    }

    /// ### DEPRECATED: Use `createRemoteAccount` instead
    ///
    pub const CreateRemoteAccount = createRemoteAccount;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#createRemoteAccount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` account: Attica__RemoteAccount `
    ///
    pub fn createRemoteAccount(self: Attica__Provider, account: anytype) Attica__PostJob {
        comptime _ = @TypeOf(account)._is_Attica__RemoteAccount;
        return .{ .ptr = qtc.Attica__Provider_CreateRemoteAccount(@ptrCast(self.ptr), @ptrCast(account.ptr)) };
    }

    /// ### DEPRECATED: Use `editRemoteAccount` instead
    ///
    pub const EditRemoteAccount = editRemoteAccount;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#editRemoteAccount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` account: Attica__RemoteAccount `
    ///
    pub fn editRemoteAccount(self: Attica__Provider, account: anytype) Attica__PostJob {
        comptime _ = @TypeOf(account)._is_Attica__RemoteAccount;
        return .{ .ptr = qtc.Attica__Provider_EditRemoteAccount(@ptrCast(self.ptr), @ptrCast(account.ptr)) };
    }

    /// ### DEPRECATED: Use `uploadTarballToBuildService` instead
    ///
    pub const UploadTarballToBuildService = uploadTarballToBuildService;

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
    pub fn uploadTarballToBuildService(self: Attica__Provider, projectId: []const u8, fileName: []const u8, payload: []u8) Attica__PostJob {
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

    /// ### DEPRECATED: Use `voteForContent` instead
    ///
    pub const VoteForContent = voteForContent;

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
    pub fn voteForContent(self: Attica__Provider, contentId: []const u8, rating: u32) Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_VoteForContent(@ptrCast(self.ptr), contentId_str, @bitCast(rating)) };
    }

    /// ### DEPRECATED: Use `deleteContent` instead
    ///
    pub const DeleteContent = deleteContent;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deleteContent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    pub fn deleteContent(self: Attica__Provider, contentId: []const u8) Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_DeleteContent(@ptrCast(self.ptr), contentId_str) };
    }

    /// ### DEPRECATED: Use `setDownloadFile` instead
    ///
    pub const SetDownloadFile = setDownloadFile;

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
    pub fn setDownloadFile(self: Attica__Provider, contentId: []const u8, fileName: []const u8, payload: anytype) Attica__PostJob {
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

    /// ### DEPRECATED: Use `setDownloadFile2` instead
    ///
    pub const SetDownloadFile2 = setDownloadFile2;

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
    pub fn setDownloadFile2(self: Attica__Provider, contentId: []const u8, fileName: []const u8, payload: []u8) Attica__PostJob {
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

    /// ### DEPRECATED: Use `deleteDownloadFile` instead
    ///
    pub const DeleteDownloadFile = deleteDownloadFile;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#deleteDownloadFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    pub fn deleteDownloadFile(self: Attica__Provider, contentId: []const u8) Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_DeleteDownloadFile(@ptrCast(self.ptr), contentId_str) };
    }

    /// ### DEPRECATED: Use `setPreviewImage` instead
    ///
    pub const SetPreviewImage = setPreviewImage;

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
    pub fn setPreviewImage(self: Attica__Provider, contentId: []const u8, previewId: []const u8, fileName: []const u8, image: []u8) Attica__PostJob {
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

    /// ### DEPRECATED: Use `deletePreviewImage` instead
    ///
    pub const DeletePreviewImage = deletePreviewImage;

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
    pub fn deletePreviewImage(self: Attica__Provider, contentId: []const u8, previewId: []const u8) Attica__PostJob {
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

    /// ### DEPRECATED: Use `voteForComment` instead
    ///
    pub const VoteForComment = voteForComment;

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
    pub fn voteForComment(self: Attica__Provider, id: []const u8, rating: u32) Attica__PostJob {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_VoteForComment(@ptrCast(self.ptr), id_str, @bitCast(rating)) };
    }

    /// ### DEPRECATED: Use `becomeFan` instead
    ///
    pub const BecomeFan = becomeFan;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#becomeFan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` contentId: []const u8 `
    ///
    pub fn becomeFan(self: Attica__Provider, contentId: []const u8) Attica__PostJob {
        const contentId_str = qtc.libqt_string{
            .len = contentId.len,
            .data = contentId.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_BecomeFan(@ptrCast(self.ptr), contentId_str) };
    }

    /// ### DEPRECATED: Use `postTopic` instead
    ///
    pub const PostTopic = postTopic;

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
    pub fn postTopic(self: Attica__Provider, forumId: []const u8, subject: []const u8, content: []const u8) Attica__PostJob {
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

    /// ### DEPRECATED: Use `getRegisterAccountUrl` instead
    ///
    pub const GetRegisterAccountUrl = getRegisterAccountUrl;

    /// ### [Upstream resources](https://api.kde.org/attica-provider.html#getRegisterAccountUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn getRegisterAccountUrl(self: Attica__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Provider_GetRegisterAccountUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Provider.getRegisterAccountUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `postLocation3` instead
    ///
    pub const PostLocation3 = postLocation3;

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
    pub fn postLocation3(self: Attica__Provider, latitude: f64, longitude: f64, city: []const u8) Attica__PostJob {
        const city_str = qtc.libqt_string{
            .len = city.len,
            .data = city.ptr,
        };
        return .{ .ptr = qtc.Attica__Provider_PostLocation3(@ptrCast(self.ptr), @bitCast(latitude), @bitCast(longitude), city_str) };
    }

    /// ### DEPRECATED: Use `postLocation4` instead
    ///
    pub const PostLocation4 = postLocation4;

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
    pub fn postLocation4(self: Attica__Provider, latitude: f64, longitude: f64, city: []const u8, country: []const u8) Attica__PostJob {
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

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Provider `
    ///
    pub fn delete(self: Attica__Provider) void {
        qtc.Attica__Provider_Delete(@ptrCast(self.ptr));
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
