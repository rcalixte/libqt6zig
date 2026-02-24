const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html)
pub const attica__platformdependentv2 = struct {
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#deleteResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    pub fn DeleteResource(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.Attica__PlatformDependentV2_DeleteResource(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` data: QtC.QIODevice `
    ///
    pub fn Put(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.Attica__PlatformDependentV2_Put(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn Put2(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.Attica__PlatformDependentV2_Put2(@ptrCast(self), @ptrCast(request), data_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` param1: QtC.Attica__PlatformDependentV2 `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.Attica__PlatformDependentV2_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#getDefaultProviderFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetDefaultProviderFiles(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__PlatformDependent_GetDefaultProviderFiles(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("attica__platformdependentv2.GetDefaultProviderFiles: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#addDefaultProviderFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn AddDefaultProviderFile(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.Attica__PlatformDependent_AddDefaultProviderFile(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#removeDefaultProviderFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn RemoveDefaultProviderFile(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.Attica__PlatformDependent_RemoveDefaultProviderFile(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#enableProvider)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` baseUrl: QtC.QUrl `
    ///
    /// ` enabled: bool `
    ///
    pub fn EnableProvider(self: ?*anyopaque, baseUrl: ?*anyopaque, enabled: bool) void {
        qtc.Attica__PlatformDependent_EnableProvider(@ptrCast(self), @ptrCast(baseUrl), enabled);
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` baseUrl: QtC.QUrl `
    ///
    pub fn IsEnabled(self: ?*anyopaque, baseUrl: ?*anyopaque) bool {
        return qtc.Attica__PlatformDependent_IsEnabled(@ptrCast(self), @ptrCast(baseUrl));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#hasCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` baseUrl: QtC.QUrl `
    ///
    pub fn HasCredentials(self: ?*anyopaque, baseUrl: ?*anyopaque) bool {
        return qtc.Attica__PlatformDependent_HasCredentials(@ptrCast(self), @ptrCast(baseUrl));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#loadCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` baseUrl: QtC.QUrl `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn LoadCredentials(self: ?*anyopaque, baseUrl: ?*anyopaque, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_LoadCredentials(@ptrCast(self), @ptrCast(baseUrl), user_str, password_str);
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#askForCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` baseUrl: QtC.QUrl `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn AskForCredentials(self: ?*anyopaque, baseUrl: ?*anyopaque, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_AskForCredentials(@ptrCast(self), @ptrCast(baseUrl), user_str, password_str);
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#saveCredentials)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` baseUrl: QtC.QUrl `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn SaveCredentials(self: ?*anyopaque, baseUrl: ?*anyopaque, user: []const u8, password: []const u8) bool {
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return qtc.Attica__PlatformDependent_SaveCredentials(@ptrCast(self), @ptrCast(baseUrl), user_str, password_str);
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    pub fn Get(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.Attica__PlatformDependent_Get(@ptrCast(self), @ptrCast(request));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` data: QtC.QIODevice `
    ///
    pub fn Post(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.Attica__PlatformDependent_Post(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn Post2(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.Attica__PlatformDependent_Post2(@ptrCast(self), @ptrCast(request), data_str);
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#setNam)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    /// ` nam: QtC.QNetworkAccessManager `
    ///
    pub fn SetNam(self: ?*anyopaque, nam: ?*anyopaque) void {
        qtc.Attica__PlatformDependent_SetNam(@ptrCast(self), @ptrCast(nam));
    }

    /// Inherited from Attica::PlatformDependent
    ///
    /// ### [Upstream resources](https://api.kde.org/attica-platformdependent.html#nam)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    pub fn Nam(self: ?*anyopaque) QtC.QNetworkAccessManager {
        return qtc.Attica__PlatformDependent_Nam(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Attica__PlatformDependentV2 `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Attica__PlatformDependentV2_Delete(@ptrCast(self));
    }
};
