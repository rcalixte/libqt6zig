const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const QNetworkAccessManager = @import("libqt6").QNetworkAccessManager;
const QNetworkReply = @import("libqt6").QNetworkReply;
const QNetworkRequest = @import("libqt6").QNetworkRequest;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html)
pub const Attica__PlatformDependentV2 = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__PlatformDependentV2,

    pub const _is_Attica__PlatformDependentV2 = {};
    pub const _is_Attica__PlatformDependent = {};

    /// ### DEPRECATED: Use `deleteResource` instead
    ///
    pub const DeleteResource = deleteResource;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#deleteResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn deleteResource(self: Attica__PlatformDependentV2, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.Attica__PlatformDependentV2_DeleteResource(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `put` instead
    ///
    pub const Put = put;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QIODevice `
    ///
    pub fn put(self: Attica__PlatformDependentV2, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.Attica__PlatformDependentV2_Put(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `put2` instead
    ///
    pub const Put2 = put2;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn put2(self: Attica__PlatformDependentV2, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.Attica__PlatformDependentV2_Put2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` param1: Attica__PlatformDependentV2 `
    ///
    pub fn operatorAssign(self: Attica__PlatformDependentV2, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Attica__PlatformDependentV2;
        qtc.Attica__PlatformDependentV2_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `getDefaultProviderFiles` instead
    ///
    pub const GetDefaultProviderFiles = getDefaultProviderFiles;

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#getDefaultProviderFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn getDefaultProviderFiles(self: Attica__PlatformDependentV2, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__PlatformDependent_GetDefaultProviderFiles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("Attica__PlatformDependentV2.getDefaultProviderFiles: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addDefaultProviderFile` instead
    ///
    pub const AddDefaultProviderFile = addDefaultProviderFile;

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#addDefaultProviderFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` url: QUrl `
    ///
    pub fn addDefaultProviderFile(self: Attica__PlatformDependentV2, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__PlatformDependent_AddDefaultProviderFile(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `removeDefaultProviderFile` instead
    ///
    pub const RemoveDefaultProviderFile = removeDefaultProviderFile;

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#removeDefaultProviderFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` url: QUrl `
    ///
    pub fn removeDefaultProviderFile(self: Attica__PlatformDependentV2, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__PlatformDependent_RemoveDefaultProviderFile(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `enableProvider` instead
    ///
    pub const EnableProvider = enableProvider;

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#enableProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` baseUrl: QUrl `
    ///
    /// ` enabled: bool `
    ///
    pub fn enableProvider(self: Attica__PlatformDependentV2, baseUrl: anytype, enabled: bool) void {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        qtc.Attica__PlatformDependent_EnableProvider(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` baseUrl: QUrl `
    ///
    pub fn isEnabled(self: Attica__PlatformDependentV2, baseUrl: anytype) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        return qtc.Attica__PlatformDependent_IsEnabled(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr));
    }

    /// ### DEPRECATED: Use `hasCredentials` instead
    ///
    pub const HasCredentials = hasCredentials;

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#hasCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` baseUrl: QUrl `
    ///
    pub fn hasCredentials(self: Attica__PlatformDependentV2, baseUrl: anytype) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        return qtc.Attica__PlatformDependent_HasCredentials(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr));
    }

    /// ### DEPRECATED: Use `loadCredentials` instead
    ///
    pub const LoadCredentials = loadCredentials;

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#loadCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` baseUrl: QUrl `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn loadCredentials(self: Attica__PlatformDependentV2, baseUrl: anytype, user: []const u8, password: []const u8) bool {
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

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#askForCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` baseUrl: QUrl `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn askForCredentials(self: Attica__PlatformDependentV2, baseUrl: anytype, user: []const u8, password: []const u8) bool {
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

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#saveCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` baseUrl: QUrl `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn saveCredentials(self: Attica__PlatformDependentV2, baseUrl: anytype, user: []const u8, password: []const u8) bool {
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

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn get(self: Attica__PlatformDependentV2, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.Attica__PlatformDependent_Get(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `post` instead
    ///
    pub const Post = post;

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QIODevice `
    ///
    pub fn post(self: Attica__PlatformDependentV2, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.Attica__PlatformDependent_Post(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `post2` instead
    ///
    pub const Post2 = post2;

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn post2(self: Attica__PlatformDependentV2, request: anytype, data: []u8) QNetworkReply {
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

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#setNam)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` _nam: QNetworkAccessManager `
    ///
    pub fn setNam(self: Attica__PlatformDependentV2, _nam: anytype) void {
        comptime _ = @TypeOf(_nam)._is_QNetworkAccessManager;
        qtc.Attica__PlatformDependent_SetNam(@ptrCast(self.ptr), @ptrCast(_nam.ptr));
    }

    /// ### DEPRECATED: Use `nam` instead
    ///
    pub const Nam = nam;

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#nam)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    pub fn nam(self: Attica__PlatformDependentV2) QNetworkAccessManager {
        return .{ .ptr = qtc.Attica__PlatformDependent_Nam(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    pub fn delete(self: Attica__PlatformDependentV2) void {
        qtc.Attica__PlatformDependentV2_Delete(@ptrCast(self.ptr));
    }
};
