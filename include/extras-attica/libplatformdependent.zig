const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const QNetworkAccessManager = @import("libqt6").QNetworkAccessManager;
const QNetworkReply = @import("libqt6").QNetworkReply;
const QNetworkRequest = @import("libqt6").QNetworkRequest;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html)
pub const Attica__PlatformDependent = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__PlatformDependent,

    pub const _is_Attica__PlatformDependent = {};

    /// ### DEPRECATED: Use `getDefaultProviderFiles` instead
    ///
    pub const GetDefaultProviderFiles = getDefaultProviderFiles;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#getDefaultProviderFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn getDefaultProviderFiles(self: Attica__PlatformDependent, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__PlatformDependent_GetDefaultProviderFiles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("Attica__PlatformDependent.getDefaultProviderFiles: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addDefaultProviderFile` instead
    ///
    pub const AddDefaultProviderFile = addDefaultProviderFile;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#addDefaultProviderFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    /// ` url: QUrl `
    ///
    pub fn addDefaultProviderFile(self: Attica__PlatformDependent, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__PlatformDependent_AddDefaultProviderFile(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `removeDefaultProviderFile` instead
    ///
    pub const RemoveDefaultProviderFile = removeDefaultProviderFile;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#removeDefaultProviderFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    /// ` url: QUrl `
    ///
    pub fn removeDefaultProviderFile(self: Attica__PlatformDependent, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__PlatformDependent_RemoveDefaultProviderFile(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `enableProvider` instead
    ///
    pub const EnableProvider = enableProvider;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#enableProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    /// ` baseUrl: QUrl `
    ///
    /// ` enabled: bool `
    ///
    pub fn enableProvider(self: Attica__PlatformDependent, baseUrl: anytype, enabled: bool) void {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        qtc.Attica__PlatformDependent_EnableProvider(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    /// ` baseUrl: QUrl `
    ///
    pub fn isEnabled(self: Attica__PlatformDependent, baseUrl: anytype) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        return qtc.Attica__PlatformDependent_IsEnabled(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr));
    }

    /// ### DEPRECATED: Use `hasCredentials` instead
    ///
    pub const HasCredentials = hasCredentials;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#hasCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    /// ` baseUrl: QUrl `
    ///
    pub fn hasCredentials(self: Attica__PlatformDependent, baseUrl: anytype) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        return qtc.Attica__PlatformDependent_HasCredentials(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr));
    }

    /// ### DEPRECATED: Use `loadCredentials` instead
    ///
    pub const LoadCredentials = loadCredentials;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#loadCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    /// ` baseUrl: QUrl `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn loadCredentials(self: Attica__PlatformDependent, baseUrl: anytype, user: []const u8, password: []const u8) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_LoadCredentials(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr), user_str, password_str);
    }

    /// ### DEPRECATED: Use `askForCredentials` instead
    ///
    pub const AskForCredentials = askForCredentials;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#askForCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    /// ` baseUrl: QUrl `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn askForCredentials(self: Attica__PlatformDependent, baseUrl: anytype, user: []const u8, password: []const u8) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_AskForCredentials(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr), user_str, password_str);
    }

    /// ### DEPRECATED: Use `saveCredentials` instead
    ///
    pub const SaveCredentials = saveCredentials;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#saveCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    /// ` baseUrl: QUrl `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn saveCredentials(self: Attica__PlatformDependent, baseUrl: anytype, user: []const u8, password: []const u8) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_SaveCredentials(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr), user_str, password_str);
    }

    /// ### DEPRECATED: Use `get` instead
    ///
    pub const Get = get;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn get(self: Attica__PlatformDependent, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.Attica__PlatformDependent_Get(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `post` instead
    ///
    pub const Post = post;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QIODevice `
    ///
    pub fn post(self: Attica__PlatformDependent, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.Attica__PlatformDependent_Post(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `post2` instead
    ///
    pub const Post2 = post2;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn post2(self: Attica__PlatformDependent, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.Attica__PlatformDependent_Post2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `setNam` instead
    ///
    pub const SetNam = setNam;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#setNam)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    /// ` _nam: QNetworkAccessManager `
    ///
    pub fn setNam(self: Attica__PlatformDependent, _nam: anytype) void {
        comptime _ = @TypeOf(_nam)._is_QNetworkAccessManager;
        qtc.Attica__PlatformDependent_SetNam(@ptrCast(self.ptr), @ptrCast(_nam.ptr));
    }

    /// ### DEPRECATED: Use `nam` instead
    ///
    pub const Nam = nam;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#nam)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    pub fn nam(self: Attica__PlatformDependent) QNetworkAccessManager {
        return .{ .ptr = qtc.Attica__PlatformDependent_Nam(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    /// ` param1: Attica__PlatformDependent `
    ///
    pub fn operatorAssign(self: Attica__PlatformDependent, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Attica__PlatformDependent;
        qtc.Attica__PlatformDependent_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__PlatformDependent `
    ///
    pub fn delete(self: Attica__PlatformDependent) void {
        qtc.Attica__PlatformDependent_Delete(@ptrCast(self.ptr));
    }
};
