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

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#deleteResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn DeleteResource(self: Attica__PlatformDependentV2, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.Attica__PlatformDependentV2_DeleteResource(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

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
    pub fn Put(self: Attica__PlatformDependentV2, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.Attica__PlatformDependentV2_Put(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

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
    pub fn Put2(self: Attica__PlatformDependentV2, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.Attica__PlatformDependentV2_Put2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` param1: Attica__PlatformDependentV2 `
    ///
    pub fn OperatorAssign(self: Attica__PlatformDependentV2, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Attica__PlatformDependentV2;
        qtc.Attica__PlatformDependentV2_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn GetDefaultProviderFiles(self: Attica__PlatformDependentV2, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__PlatformDependent_GetDefaultProviderFiles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("attica__platformdependentv2.GetDefaultProviderFiles: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn AddDefaultProviderFile(self: Attica__PlatformDependentV2, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__PlatformDependent_AddDefaultProviderFile(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

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
    pub fn RemoveDefaultProviderFile(self: Attica__PlatformDependentV2, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.Attica__PlatformDependent_RemoveDefaultProviderFile(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

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
    pub fn EnableProvider(self: Attica__PlatformDependentV2, baseUrl: anytype, enabled: bool) void {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        qtc.Attica__PlatformDependent_EnableProvider(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr), enabled);
    }

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
    pub fn IsEnabled(self: Attica__PlatformDependentV2, baseUrl: anytype) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        return qtc.Attica__PlatformDependent_IsEnabled(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr));
    }

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
    pub fn HasCredentials(self: Attica__PlatformDependentV2, baseUrl: anytype) bool {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        return qtc.Attica__PlatformDependent_HasCredentials(@ptrCast(self.ptr), @ptrCast(baseUrl.ptr));
    }

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
    pub fn LoadCredentials(self: Attica__PlatformDependentV2, baseUrl: anytype, user: []const u8, password: []const u8) bool {
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
    pub fn AskForCredentials(self: Attica__PlatformDependentV2, baseUrl: anytype, user: []const u8, password: []const u8) bool {
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
    pub fn SaveCredentials(self: Attica__PlatformDependentV2, baseUrl: anytype, user: []const u8, password: []const u8) bool {
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
    pub fn Get(self: Attica__PlatformDependentV2, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.Attica__PlatformDependent_Get(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

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
    pub fn Post(self: Attica__PlatformDependentV2, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.Attica__PlatformDependent_Post(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

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
    pub fn Post2(self: Attica__PlatformDependentV2, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.Attica__PlatformDependent_Post2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#setNam)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    /// ` nam: QNetworkAccessManager `
    ///
    pub fn SetNam(self: Attica__PlatformDependentV2, nam: anytype) void {
        comptime _ = @TypeOf(nam)._is_QNetworkAccessManager;
        qtc.Attica__PlatformDependent_SetNam(@ptrCast(self.ptr), @ptrCast(nam.ptr));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#nam)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    pub fn Nam(self: Attica__PlatformDependentV2) QNetworkAccessManager {
        return .{ .ptr = qtc.Attica__PlatformDependent_Nam(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__PlatformDependentV2 `
    ///
    pub fn Delete(self: Attica__PlatformDependentV2) void {
        qtc.Attica__PlatformDependentV2_Delete(@ptrCast(self.ptr));
    }
};
